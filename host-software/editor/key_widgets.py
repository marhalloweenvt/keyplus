#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Copyright 2018 jem@seethis.link
# Licensed under the MIT license (http://opensource.org/licenses/MIT)

from __future__ import absolute_import, division, print_function, unicode_literals

from PySide.QtCore import QSize, Qt, QRectF, QPointF, QPoint, QLine, QObject, \
    QTimer
from PySide.QtGui import QPainter, QBrush, QPainterPath, QFont, QFontMetrics, \
    QColor, QPen, QTransform, QPolygonF
from PySide.QtGui import QApplication, QWidget, QComboBox, QVBoxLayout, \
    QGraphicsItem, QGraphicsScene, QGraphicsView

from PySide.QtCore import Slot, Signal

import os
import json
import kle

DEFAULT_KEY_SIZE = 50

class KeyboardDeviceWidget(QGraphicsItem):

    def __init__(self, key_layout, name, key_size=DEFAULT_KEY_SIZE, parent=None):
        super(KeyboardDeviceWidget, self).__init__(parent)

        self.key_layout = key_layout
        self.keys = key_layout.get_keys()
        self.keyList = []
        self.keySize = self.key_layout.spacing

        for(i, key) in enumerate(self.keys):
            key = KeyWidget(
                key,
                key.get_legend_str(),
                color = QColor(0,0,0),
                parent=self
            )

            # self.updateBoundingRect(key)
            key.positionUpdateSignal.connect(self.handlePositionUpdate)
            self.keyList.append(key)

        self.updateBoundingRect()

        self.deviceName = name

    def updateBoundingRect(self):
        margin = self.keySize * 0.5

        boundingRect = QRectF(0, 0, 0, 0)


        for key in self.keyList:
            rect = key.shape().boundingRect()
            rect.translate(key.pos())
            boundingRect = boundingRect.united(rect)


        boundingRect.setX(boundingRect.x() - margin)
        boundingRect.setY(boundingRect.y() - margin)
        boundingRect.setWidth(boundingRect.width() + margin)
        boundingRect.setHeight(boundingRect.height() + margin)
        self.keyBoundRect = boundingRect

    def initUI(self):
        pass

    def boundingRect(self):
        return self.keyBoundRect

    def paint(self, painter, option, widget):
        painter.setPen(QPen(Qt.black, 1))
        painter.drawRect(self.keyBoundRect)

    @staticmethod
    def from_file(file_name, name, key_size=DEFAULT_KEY_SIZE):
        json_layout = None
        with open(file_name) as json_file:
            json_layout = json.loads(json_file.read())
        print(json_layout)
        key_layout = kle.KLEKeyboard.from_json(json_layout, spacing=key_size)
        return KeyboardDeviceWidget(key_layout, name)

    #     # def slide_color(key, x):
    #     #     if (key.color_dir == +1):
    #     #         if x >= 255:
    #     #             key.color_dir = -1
    #     #             return x
    #     #         else:
    #     #             return x+1
    #     #     if (key.color_dir == -1):
    #     #         if x <= 0:
    #     #             key.color_dir = +1
    #     #             return x
    #     #         else:
    #     #             return x-1
    #     def slide_color(key, x):
    #         if key.color_dir == +1:
    #             return min(255, x + key.color_dir)
    #         elif key.color_dir == -1:
    #             return max(0, x + key.color_dir)

    #     for key in self.keyList:
    #         (h,s,v,a) = key.color.getHsv();
    #         if h == 255:
    #             key.color_dir = -1
    #         elif h == 0:
    #             key.color_dir = +1

    #         h = slide_color(key, h)
    #         # s = slide_color(key, s)
    #         new_color = QColor.fromHsv(
    #             h,
    #             s,
    #             v
    #         )

    #         key.color = new_color
    #         key.update()

    @Slot(str)
    def handlePositionUpdate(self):
        print("child widget updated")
        self.updateBoundingRect()
        self.prepareGeometryChange()

class LayerWidget:
    pass

class KeyWidget(QGraphicsItem, QObject):
    positionUpdateSignal = Signal()

    def __init__(self, key, text, color=QColor(0,0,0), parent=None):
        super(KeyWidget, self).__init__(parent)
        QObject.__init__(self)

        self.setCursor(Qt.OpenHandCursor)

        self.color = color
        self.color_dir = +1

        self.text = text

        rect = key.get_rect_points()
        self.setPos(rect[0].x, rect[0].y)
        self.angle = key.r

        self.w = key.w
        self.h = key.h

        # self.setAttribute(QtCore.Qt.WA_DeleteOnClose)

    # def boundingRect(self):
    #     return QRectF(-self.w, -self.h, self.w, self.h)

    def setColor(self, color):
        self.color = color

    # def getShape(self)

    def boundingRect(self):
        if self.angle == 0:
            return QRectF(0, 0, self.w, self.h)
        else:
            sideLen = self.w + self.h
            rect = QRectF(0, 0, 2*sideLen, 2*sideLen)
            rect.moveTo(QPoint(-sideLen, -sideLen))
            return rect

    def shape(self):
        bound = QPainterPath()
        rotMatrix = QTransform().rotate(self.angle)
        poly = QPolygonF([
            QPointF(0, 0),
            QPointF(self.w, 0),
            QPointF(self.w, self.h),
            QPointF(0, self.h),
        ])
        poly = rotMatrix.map(poly)
        bound.addPolygon(poly)
        return bound

    def paint(self, painter, option, widget):
        w = self.w
        h = self.h
        key = QPainterPath()
        key.setFillRule(Qt.WindingFill)

        painter.save()
        painter.rotate(self.angle)
        key.moveTo(0.0, 0.0)
        key.lineTo(w, 0.0)
        key.lineTo(w, h)
        key.lineTo(0.0, h)
        painter.fillPath(key, self.color)
        painter.setPen(QPen(Qt.white, 1))
        key.moveTo(0,0)
        painter.drawLine(0, 0, w, 0)
        painter.drawLine(w, 0, w, h)
        painter.drawLine(w, h, 0, h)
        painter.drawLine(0, h, 0, 0)

        painter.setPen(Qt.white)
        metric = painter.fontMetrics()

        margin = 5
        textBound = metric.boundingRect(self.text)
        painter.drawText(margin,
                         h-margin,  self.text)
        painter.restore()

    # def setPos(self, pos, y=None):
    #     if y == None:
    #         super(KeyWidget, self).setPos(pos)
    #     else:
    #         super(KeyWidget, self).setPos(pos, y)
    #     self.sendPositionUpdate()

    def sendPositionUpdate(self):
        self.positionUpdateSignal.emit()


class DragBox(QGraphicsItem):
    def __init__(self, startPos, endPos):
        super(DragBox, self).__init__()

        self.startPos = startPos
        self.endPos = endPos

    def getRect(self):
        start = self.startPos
        end = self.endPos

        x = min(start.x(), end.x())
        y = min(start.y(), end.y())
        w = abs(start.x() - end.x())
        h = abs(start.y() - end.y())

        return QRectF(x, y, w, h)

    def boundingRect(self):
        return self.getRect()

    def setStartPos(self, startPos):
        self.startPos = startPos
        self.prepareGeometryChange()

    def setEndPos(self, endPos):
        self.endPos = endPos
        self.prepareGeometryChange()

    def paint(self, painter, option, widget):
        painter.setPen(QPen(Qt.black, 1))
        painter.drawRect(self.getRect())


class GraphicsView(QGraphicsView):

    def resizeEvent(self, event):
        pass

class KeyboardEditorScene(QGraphicsScene):
    def __init__(self, x, y, w, h, key_size=50, parent=None):
        super(KeyboardEditorScene, self).__init__(x, y, w, h, parent=parent)

        self.dragStartPos = None
        self.selectedItem = None
        self.dragItemStartPos = None
        self.zIncrementer = 0
        self.dragging = False
        self.dragBoxRect = DragBox(QPointF(0.0, 0.0), QPointF(0.0, 0.0))
        self.dragBoxRect.hide()
        self.dragBoxRect.setZValue(5000000)
        self.addItem(self.dragBoxRect)

        self.gridActive = True
        self.keySize = key_size
        self.snapSize = 0.125

    def setSnapSize(self, size):
        self.snapSize = size

    def mouseMoveEvent(self, event):
        if not self.dragStartPos:
            return

        if self.dragging:
            self.dragBoxRect.setEndPos(event.scenePos())
            self.dragBoxRect.show()
        elif self.selectedItem:
            delta = event.scenePos() - self.dragStartPos
            # self.selectedItem.setPos(self.dragItemStartPos)
            # self.selectedItem.moveBy(delta.x(), delta.y())
            # self.selectedItem.setPos(self.dragItemStartPos + delta)
            self.selectedItem.setPos(self.dragItemStartPos + delta)

    def handleLeftClick(self, _, event):
        clickPos = event.scenePos()
        if self.itemAt(clickPos.x(), clickPos.y(), QTransform()) == None:
            print("missed")
            self.dragBoxRect.setStartPos(event.scenePos())
            self.dragging = True
        else:
            print("hit")
            self.selectedItem = self.itemAt(clickPos.x(), clickPos.y(), QTransform())
            # self.dragItemStartPos = self.selectedItem.scenePos()
            self.dragItemStartPos = self.selectedItem.pos()
            self.zIncrementer += 1
            self.selectedItem.setZValue(self.zIncrementer)


    def mousePressEvent(self, event):
        self.dragStartPos = event.scenePos()
        if event.button() == Qt.MouseButton.LeftButton:
            self.handleLeftClick(self, event)

    def mouseReleaseEvent(self, event):

        if self.dragging:
            self.dragBoxRect.hide()
            self.dragging = False
        elif self.selectedItem != None:
            if self.gridActive:
                delta = event.scenePos() - self.dragStartPos
                self.selectedItem.setPos(self.dragItemStartPos)
                self.selectedItem.moveBy(delta.x(), delta.y())
                pos = self.selectedItem.pos()
                snapSize = self.snapSize * self.keySize
                x = round(pos.x() / snapSize) * snapSize
                y = round(pos.y() / snapSize) * snapSize
                self.selectedItem.setPos(x, y)

            if type(self.selectedItem) == KeyWidget:
                self.selectedItem.sendPositionUpdate()

            # clickPos = event.scenePos()
            # if self.itemAt(clickPos.x(), clickPos.y(), QTransform()) == None:
            #     print("missed")
            # else:
            #     super(KeyboardEditorScene, self).mouseReleaseEvent(event)

        self.dragStartPos = None
        self.selectedItem = None


