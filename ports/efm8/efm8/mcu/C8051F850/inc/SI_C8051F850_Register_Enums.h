//------------------------------------------------------------------------------
// Copyright 2014 Silicon Laboratories, Inc.
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Silicon Laboratories End User
// License Agreement which accompanies this distribution, and is available at
// http://developer.silabs.com/legal/version/v11/Silicon_Labs_Software_License_Agreement.txt
// Original content and implementation provided by Silicon Laboratories.
//------------------------------------------------------------------------------
//Supported Devices:
//  C8051F850_GM
//  C8051F850_GU
//  C8051F851_GM
//  C8051F851_GU
//  C8051F852_GM
//  C8051F852_GU
//  C8051F853_GM
//  C8051F853_GU
//  C8051F854_GM
//  C8051F854_GU
//  C8051F855_GM
//  C8051F855_GU
//  C8051F860_GS
//  C8051F861_GS
//  C8051F862_GS
//  C8051F863_GS
//  C8051F864_GS
//  C8051F865_GS

#ifndef SI_C8051F850_REGISTER_ENUMS_H
#define SI_C8051F850_REGISTER_ENUMS_H

//Standard device includes
#include "SI_C8051F850_Defs.h"
//------------------------------------------------------------------------------
// ADC0AC Enums (ADC0 Accumulator Configuration @ 0xB3)
//------------------------------------------------------------------------------
#define ADC0AC_ADRPT__FMASK            0x07 ///< Repeat Count                                      
#define ADC0AC_ADRPT__SHIFT            0x00 ///< Repeat Count                                      
#define ADC0AC_ADRPT__ACC_1            0x00 ///< Perform and Accumulate 1 conversion (not used in  
                                            ///< 12-bit mode).                                     
#define ADC0AC_ADRPT__ACC_4            0x01 ///< Perform and Accumulate 4 conversions (1 conversion
                                            ///< in 12-bit mode).                                  
#define ADC0AC_ADRPT__ACC_8            0x02 ///< Perform and Accumulate 8 conversions (2           
                                            ///< conversions in 12-bit mode).                      
#define ADC0AC_ADRPT__ACC_16           0x03 ///< Perform and Accumulate 16 conversions (4          
                                            ///< conversions in 12-bit mode).                      
#define ADC0AC_ADRPT__ACC_32           0x04 ///< Perform and Accumulate 32 conversions (8          
                                            ///< conversions in 12-bit mode).                      
#define ADC0AC_ADRPT__ACC_64           0x05 ///< Perform and Accumulate 64 conversions (16         
                                            ///< conversions in 12-bit mode).                      
                                                                                                   
#define ADC0AC_ADSJST__FMASK           0x38 ///< Accumulator Shift and Justify                     
#define ADC0AC_ADSJST__SHIFT           0x03 ///< Accumulator Shift and Justify                     
#define ADC0AC_ADSJST__RIGHT_NO_SHIFT  0x00 ///< Right justified. No shifting applied.             
#define ADC0AC_ADSJST__RIGHT_SHIFT_1   0x08 ///< Right justified. Shifted right by 1 bit.          
#define ADC0AC_ADSJST__RIGHT_SHIFT_2   0x10 ///< Right justified. Shifted right by 2 bits.         
#define ADC0AC_ADSJST__RIGHT_SHIFT_3   0x18 ///< Right justified. Shifted right by 3 bits.         
#define ADC0AC_ADSJST__LEFT_NO_SHIFT   0x20 ///< Left justified. No shifting applied.              
                                                                                                   
#define ADC0AC_ADAE__BMASK             0x40 ///< Accumulate Enable                                 
#define ADC0AC_ADAE__SHIFT             0x06 ///< Accumulate Enable                                 
#define ADC0AC_ADAE__ACC_DISABLED      0x00 ///< ADC0H:ADC0L contain the result of the latest      
                                            ///< conversion when Burst Mode is disabled.           
#define ADC0AC_ADAE__ACC_ENABLED       0x40 ///< ADC0H:ADC0L contain the accumulated conversion    
                                            ///< results when Burst Mode is disabled. Firmware must
                                            ///< write 0x0000 to ADC0H:ADC0L to clear the          
                                            ///< accumulated result.                               
                                                                                                   
#define ADC0AC_AD12BE__BMASK           0x80 ///< 12-Bit Mode Enable                                
#define ADC0AC_AD12BE__SHIFT           0x07 ///< 12-Bit Mode Enable                                
#define ADC0AC_AD12BE__12_BIT_DISABLED 0x00 ///< Disable 12-bit mode.                              
#define ADC0AC_AD12BE__12_BIT_ENABLED  0x80 ///< Enable 12-bit mode.                               
                                                                                                   
//------------------------------------------------------------------------------
// ADC0CF Enums (ADC0 Configuration @ 0xBC)
//------------------------------------------------------------------------------
#define ADC0CF_ADGN__BMASK         0x01 ///< Gain Control                                      
#define ADC0CF_ADGN__SHIFT         0x00 ///< Gain Control                                      
#define ADC0CF_ADGN__GAIN_0P5      0x00 ///< The on-chip PGA gain is 0.5.                      
#define ADC0CF_ADGN__GAIN_1        0x01 ///< The on-chip PGA gain is 1.                        
                                                                                               
#define ADC0CF_ADTM__BMASK         0x02 ///< Track Mode                                        
#define ADC0CF_ADTM__SHIFT         0x01 ///< Track Mode                                        
#define ADC0CF_ADTM__TRACK_NORMAL  0x00 ///< Normal Track Mode. When ADC0 is enabled,          
                                        ///< conversion begins immediately following the start-
                                        ///< of-conversion signal.                             
#define ADC0CF_ADTM__TRACK_DELAYED 0x02 ///< Delayed Track Mode. When ADC0 is enabled,         
                                        ///< conversion begins 4 SAR clock cycles following the
                                        ///< start-of-conversion signal. The ADC is allowed to 
                                        ///< track during this time.                           
                                                                                               
#define ADC0CF_AD8BE__BMASK        0x04 ///< 8-Bit Mode Enable                                 
#define ADC0CF_AD8BE__SHIFT        0x02 ///< 8-Bit Mode Enable                                 
#define ADC0CF_AD8BE__NORMAL       0x00 ///< ADC0 operates in 10-bit or 12-bit mode (normal    
                                        ///< operation).                                       
#define ADC0CF_AD8BE__8_BIT        0x04 ///< ADC0 operates in 8-bit mode.                      
                                                                                               
#define ADC0CF_ADSC__FMASK         0xF8 ///< SAR Clock Divider                                 
#define ADC0CF_ADSC__SHIFT         0x03 ///< SAR Clock Divider                                 
                                                                                               
//------------------------------------------------------------------------------
// ADC0CN0 Enums (ADC0 Control 0 @ 0xE8)
//------------------------------------------------------------------------------
#define ADC0CN0_ADCM__FMASK            0x07 ///< Start of Conversion Mode Select                   
#define ADC0CN0_ADCM__SHIFT            0x00 ///< Start of Conversion Mode Select                   
#define ADC0CN0_ADCM__ADBUSY           0x00 ///< ADC0 conversion initiated on write of 1 to ADBUSY.
#define ADC0CN0_ADCM__TIMER0           0x01 ///< ADC0 conversion initiated on overflow of Timer 0. 
#define ADC0CN0_ADCM__TIMER2           0x02 ///< ADC0 conversion initiated on overflow of Timer 2. 
#define ADC0CN0_ADCM__TIMER3           0x03 ///< ADC0 conversion initiated on overflow of Timer 3. 
#define ADC0CN0_ADCM__CNVSTR           0x04 ///< ADC0 conversion initiated on rising edge of       
                                            ///< CNVSTR.                                           
                                                                                                   
#define ADC0CN0_ADWINT__BMASK          0x08 ///< Window Compare Interrupt Flag                     
#define ADC0CN0_ADWINT__SHIFT          0x03 ///< Window Compare Interrupt Flag                     
#define ADC0CN0_ADWINT__NOT_SET        0x00 ///< An ADC window compare event did not occur.        
#define ADC0CN0_ADWINT__SET            0x08 ///< An ADC window compare event occurred.             
                                                                                                   
#define ADC0CN0_ADBUSY__BMASK          0x10 ///< ADC Busy                                          
#define ADC0CN0_ADBUSY__SHIFT          0x04 ///< ADC Busy                                          
#define ADC0CN0_ADBUSY__NOT_SET        0x00 ///< An ADC0 conversion is not currently in progress.  
#define ADC0CN0_ADBUSY__SET            0x10 ///< ADC0 conversion is in progress or start an ADC0   
                                            ///< conversion.                                       
                                                                                                   
#define ADC0CN0_ADINT__BMASK           0x20 ///< Conversion Complete Interrupt Flag                
#define ADC0CN0_ADINT__SHIFT           0x05 ///< Conversion Complete Interrupt Flag                
#define ADC0CN0_ADINT__NOT_SET         0x00 ///< ADC0 has not completed a conversion since the last
                                            ///< time ADINT was cleared.                           
#define ADC0CN0_ADINT__SET             0x20 ///< ADC0 completed a data conversion.                 
                                                                                                   
#define ADC0CN0_ADBMEN__BMASK          0x40 ///< Burst Mode Enable                                 
#define ADC0CN0_ADBMEN__SHIFT          0x06 ///< Burst Mode Enable                                 
#define ADC0CN0_ADBMEN__BURST_DISABLED 0x00 ///< Disable ADC0 burst mode.                          
#define ADC0CN0_ADBMEN__BURST_ENABLED  0x40 ///< Enable ADC0 burst mode.                           
                                                                                                   
#define ADC0CN0_ADEN__BMASK            0x80 ///< ADC Enable                                        
#define ADC0CN0_ADEN__SHIFT            0x07 ///< ADC Enable                                        
#define ADC0CN0_ADEN__DISABLED         0x00 ///< Disable ADC0 (low-power shutdown).                
#define ADC0CN0_ADEN__ENABLED          0x80 ///< Enable ADC0 (active and ready for data            
                                            ///< conversions).                                     
                                                                                                   
//------------------------------------------------------------------------------
// ADC0CN1 Enums (ADC0 Control 1 @ 0xB2)
//------------------------------------------------------------------------------
#define ADC0CN1_ADCMBE__BMASK              0x01 ///< Common Mode Buffer Enable                         
#define ADC0CN1_ADCMBE__SHIFT              0x00 ///< Common Mode Buffer Enable                         
#define ADC0CN1_ADCMBE__CM_BUFFER_DISABLED 0x00 ///< Disable the common mode buffer. This setting      
                                                ///< should be used only if the tracking time of the   
                                                ///< signal is greater than 1.5 us.                    
#define ADC0CN1_ADCMBE__CM_BUFFER_ENABLED  0x01 ///< Enable the common mode buffer. This setting should
                                                ///< be used in most cases, and will give the best     
                                                ///< dynamic ADC performance. The common mode buffer   
                                                ///< must be enabled if signal tracking time is less   
                                                ///< than or equal to 1.5 us.                          
                                                                                                       
//------------------------------------------------------------------------------
// ADC0GTH Enums (ADC0 Greater-Than High Byte @ 0xC4)
//------------------------------------------------------------------------------
#define ADC0GTH_ADC0GTH__FMASK 0xFF ///< Greater-Than High Byte
#define ADC0GTH_ADC0GTH__SHIFT 0x00 ///< Greater-Than High Byte
                                                               
//------------------------------------------------------------------------------
// ADC0GTL Enums (ADC0 Greater-Than Low Byte @ 0xC3)
//------------------------------------------------------------------------------
#define ADC0GTL_ADC0GTL__FMASK 0xFF ///< Greater-Than Low Byte
#define ADC0GTL_ADC0GTL__SHIFT 0x00 ///< Greater-Than Low Byte
                                                              
//------------------------------------------------------------------------------
// ADC0H Enums (ADC0 Data Word High Byte @ 0xBE)
//------------------------------------------------------------------------------
#define ADC0H_ADC0H__FMASK 0xFF ///< Data Word High Byte
#define ADC0H_ADC0H__SHIFT 0x00 ///< Data Word High Byte
                                                        
//------------------------------------------------------------------------------
// ADC0L Enums (ADC0 Data Word Low Byte @ 0xBD)
//------------------------------------------------------------------------------
#define ADC0L_ADC0L__FMASK 0xFF ///< Data Word Low Byte
#define ADC0L_ADC0L__SHIFT 0x00 ///< Data Word Low Byte
                                                       
//------------------------------------------------------------------------------
// ADC0LTH Enums (ADC0 Less-Than High Byte @ 0xC6)
//------------------------------------------------------------------------------
#define ADC0LTH_ADC0LTH__FMASK 0xFF ///< Less-Than High Byte
#define ADC0LTH_ADC0LTH__SHIFT 0x00 ///< Less-Than High Byte
                                                            
//------------------------------------------------------------------------------
// ADC0LTL Enums (ADC0 Less-Than Low Byte @ 0xC5)
//------------------------------------------------------------------------------
#define ADC0LTL_ADC0LTL__FMASK 0xFF ///< Less-Than Low Byte
#define ADC0LTL_ADC0LTL__SHIFT 0x00 ///< Less-Than Low Byte
                                                           
//------------------------------------------------------------------------------
// ADC0MX Enums (ADC0 Multiplexer Selection @ 0xBB)
//------------------------------------------------------------------------------
#define ADC0MX_ADC0MX__FMASK   0x1F ///< AMUX0 Positive Input Selection
#define ADC0MX_ADC0MX__SHIFT   0x00 ///< AMUX0 Positive Input Selection
#define ADC0MX_ADC0MX__ADC0P0  0x00 ///< Select ADC0.0.                
#define ADC0MX_ADC0MX__ADC0P1  0x01 ///< Select ADC0.1.                
#define ADC0MX_ADC0MX__ADC0P2  0x02 ///< Select ADC0.2.                
#define ADC0MX_ADC0MX__ADC0P3  0x03 ///< Select ADC0.3.                
#define ADC0MX_ADC0MX__ADC0P4  0x04 ///< Select ADC0.4.                
#define ADC0MX_ADC0MX__ADC0P5  0x05 ///< Select ADC0.5.                
#define ADC0MX_ADC0MX__ADC0P6  0x06 ///< Select ADC0.6.                
#define ADC0MX_ADC0MX__ADC0P7  0x07 ///< Select ADC0.7.                
#define ADC0MX_ADC0MX__ADC0P8  0x08 ///< Select ADC0.8.                
#define ADC0MX_ADC0MX__ADC0P9  0x09 ///< Select ADC0.9.                
#define ADC0MX_ADC0MX__ADC0P10 0x0A ///< Select ADC0.10.               
#define ADC0MX_ADC0MX__ADC0P11 0x0B ///< Select ADC0.11.               
#define ADC0MX_ADC0MX__ADC0P12 0x0C ///< Select ADC0.12.               
#define ADC0MX_ADC0MX__ADC0P13 0x0D ///< Select ADC0.13.               
#define ADC0MX_ADC0MX__ADC0P14 0x0E ///< Select ADC0.14.               
#define ADC0MX_ADC0MX__ADC0P15 0x0F ///< Select ADC0.15.               
#define ADC0MX_ADC0MX__TEMP    0x10 ///< Temperature sensor.           
#define ADC0MX_ADC0MX__LDO     0x11 ///< Internal LDO regulator output.
#define ADC0MX_ADC0MX__VDD     0x12 ///< VDD.                          
#define ADC0MX_ADC0MX__GND     0x13 ///< GND.                          
#define ADC0MX_ADC0MX__NONE    0x1F ///< No input selected.            
                                                                       
//------------------------------------------------------------------------------
// ADC0PWR Enums (ADC0 Power Control @ 0xDF)
//------------------------------------------------------------------------------
#define ADC0PWR_ADPWR__FMASK                 0x0F ///< Burst Mode Power Up Time                         
#define ADC0PWR_ADPWR__SHIFT                 0x00 ///< Burst Mode Power Up Time                         
                                                                                                        
#define ADC0PWR_ADLPM__BMASK                 0x10 ///< Low Power Mode Enable                            
#define ADC0PWR_ADLPM__SHIFT                 0x04 ///< Low Power Mode Enable                            
#define ADC0PWR_ADLPM__LP_BUFFER_DISABLED    0x00 ///< Disable low power mode.                          
#define ADC0PWR_ADLPM__LP_BUFFER_ENABLED     0x10 ///< Enable low power mode (requires extended tracking
                                                  ///< time).                                           
                                                                                                        
#define ADC0PWR_ADMXLP__BMASK                0x20 ///< Mux and Reference Low Power Mode Enable          
#define ADC0PWR_ADMXLP__SHIFT                0x05 ///< Mux and Reference Low Power Mode Enable          
#define ADC0PWR_ADMXLP__LP_MUX_VREF_DISABLED 0x00 ///< Low power mode disabled.                         
#define ADC0PWR_ADMXLP__LP_MUX_VREF_ENABLED  0x20 ///< Low power mode enabled (SAR clock < 4 MHz).      
                                                                                                        
#define ADC0PWR_ADBIAS__FMASK                0xC0 ///< Bias Power Select                                
#define ADC0PWR_ADBIAS__SHIFT                0x06 ///< Bias Power Select                                
#define ADC0PWR_ADBIAS__MODE0                0x00 ///< Select bias current mode 0. Recommended to use   
                                                  ///< modes 1, 2, or 3.                                
#define ADC0PWR_ADBIAS__MODE1                0x40 ///< Select bias current mode 1 (SARCLK <= 16 MHz).   
#define ADC0PWR_ADBIAS__MODE2                0x80 ///< Select bias current mode 2.                      
#define ADC0PWR_ADBIAS__MODE3                0xC0 ///< Select bias current mode 3 (SARCLK <= 4 MHz).    
                                                                                                        
//------------------------------------------------------------------------------
// ADC0TK Enums (ADC0 Burst Mode Track Time @ 0xB9)
//------------------------------------------------------------------------------
#define ADC0TK_ADTK__FMASK         0x3F ///< Burst Mode Tracking Time                       
#define ADC0TK_ADTK__SHIFT         0x00 ///< Burst Mode Tracking Time                       
                                                                                            
#define ADC0TK_AD12SM__BMASK       0x80 ///< 12-Bit Sampling Mode                           
#define ADC0TK_AD12SM__SHIFT       0x07 ///< 12-Bit Sampling Mode                           
#define ADC0TK_AD12SM__SAMPLE_FOUR 0x00 ///< The ADC will re-track and sample the input four
                                        ///< times during a 12-bit conversion.              
#define ADC0TK_AD12SM__SAMPLE_ONCE 0x80 ///< The ADC will sample the input once at the      
                                        ///< beginning of each 12-bit conversion. The ADTK  
                                        ///< field can be set to 63 to maximize throughput. 
                                                                                            
//------------------------------------------------------------------------------
// ACC Enums (Accumulator @ 0xE0)
//------------------------------------------------------------------------------
#define ACC_ACC__FMASK 0xFF ///< Accumulator
#define ACC_ACC__SHIFT 0x00 ///< Accumulator
                                            
//------------------------------------------------------------------------------
// B Enums (B Register @ 0xF0)
//------------------------------------------------------------------------------
#define B_B__FMASK 0xFF ///< B Register
#define B_B__SHIFT 0x00 ///< B Register
                                       
//------------------------------------------------------------------------------
// DPH Enums (Data Pointer High @ 0x83)
//------------------------------------------------------------------------------
#define DPH_DPH__FMASK 0xFF ///< Data Pointer High
#define DPH_DPH__SHIFT 0x00 ///< Data Pointer High
                                                  
//------------------------------------------------------------------------------
// DPL Enums (Data Pointer Low @ 0x82)
//------------------------------------------------------------------------------
#define DPL_DPL__FMASK 0xFF ///< Data Pointer Low
#define DPL_DPL__SHIFT 0x00 ///< Data Pointer Low
                                                 
//------------------------------------------------------------------------------
// PSW Enums (Program Status Word @ 0xD0)
//------------------------------------------------------------------------------
#define PSW_PARITY__BMASK   0x01 ///< Parity Flag                                       
#define PSW_PARITY__SHIFT   0x00 ///< Parity Flag                                       
#define PSW_PARITY__NOT_SET 0x00 ///< The sum of the 8 bits in the accumulator is even. 
#define PSW_PARITY__SET     0x01 ///< The sum of the 8 bits in the accumulator is odd.  
                                                                                        
#define PSW_F1__BMASK       0x02 ///< User Flag 1                                       
#define PSW_F1__SHIFT       0x01 ///< User Flag 1                                       
#define PSW_F1__NOT_SET     0x00 ///< Flag is not set.                                  
#define PSW_F1__SET         0x02 ///< Flag is set.                                      
                                                                                        
#define PSW_OV__BMASK       0x04 ///< Overflow Flag                                     
#define PSW_OV__SHIFT       0x02 ///< Overflow Flag                                     
#define PSW_OV__NOT_SET     0x00 ///< An overflow did not occur.                        
#define PSW_OV__SET         0x04 ///< An overflow occurred.                             
                                                                                        
#define PSW_RS__FMASK       0x18 ///< Register Bank Select                              
#define PSW_RS__SHIFT       0x03 ///< Register Bank Select                              
#define PSW_RS__BANK0       0x00 ///< Bank 0, Addresses 0x00-0x07                       
#define PSW_RS__BANK1       0x08 ///< Bank 1, Addresses 0x08-0x0F                       
#define PSW_RS__BANK2       0x10 ///< Bank 2, Addresses 0x10-0x17                       
#define PSW_RS__BANK3       0x18 ///< Bank 3, Addresses 0x18-0x1F                       
                                                                                        
#define PSW_F0__BMASK       0x20 ///< User Flag 0                                       
#define PSW_F0__SHIFT       0x05 ///< User Flag 0                                       
#define PSW_F0__NOT_SET     0x00 ///< Flag is not set.                                  
#define PSW_F0__SET         0x20 ///< Flag is set.                                      
                                                                                        
#define PSW_AC__BMASK       0x40 ///< Auxiliary Carry Flag                              
#define PSW_AC__SHIFT       0x06 ///< Auxiliary Carry Flag                              
#define PSW_AC__NOT_SET     0x00 ///< A carry into (addition) or borrow from            
                                 ///< (subtraction) the high order nibble did not occur.
#define PSW_AC__SET         0x40 ///< A carry into (addition) or borrow from            
                                 ///< (subtraction) the high order nibble occurred.     
                                                                                        
#define PSW_CY__BMASK       0x80 ///< Carry Flag                                        
#define PSW_CY__SHIFT       0x07 ///< Carry Flag                                        
#define PSW_CY__NOT_SET     0x00 ///< A carry (addition) or borrow (subtraction) did not
                                 ///< occur.                                            
#define PSW_CY__SET         0x80 ///< A carry (addition) or borrow (subtraction)        
                                 ///< occurred.                                         
                                                                                        
//------------------------------------------------------------------------------
// SP Enums (Stack Pointer @ 0x81)
//------------------------------------------------------------------------------
#define SP_SP__FMASK 0xFF ///< Stack Pointer
#define SP_SP__SHIFT 0x00 ///< Stack Pointer
                                            
//------------------------------------------------------------------------------
// CLKSEL Enums (Clock Select @ 0xA9)
//------------------------------------------------------------------------------
#define CLKSEL_CLKSL__FMASK           0x03 ///< Clock Source Select                             
#define CLKSEL_CLKSL__SHIFT           0x00 ///< Clock Source Select                             
#define CLKSEL_CLKSL__HFOSC           0x00 ///< Clock derived from the Internal High-Frequency  
                                           ///< Oscillator.                                     
#define CLKSEL_CLKSL__EXTOSC          0x01 ///< Clock derived from the External CMOS clock      
                                           ///< circuit.                                        
#define CLKSEL_CLKSL__LFOSC           0x02 ///< Clock derived from the Internal Low-Frequency   
                                           ///< Oscillator.                                     
                                                                                                
#define CLKSEL_CLKDIV__FMASK          0x70 ///< Clock Source Divider                            
#define CLKSEL_CLKDIV__SHIFT          0x04 ///< Clock Source Divider                            
#define CLKSEL_CLKDIV__SYSCLK_DIV_1   0x00 ///< SYSCLK is equal to selected clock source divided
                                           ///< by 1.                                           
#define CLKSEL_CLKDIV__SYSCLK_DIV_2   0x10 ///< SYSCLK is equal to selected clock source divided
                                           ///< by 2.                                           
#define CLKSEL_CLKDIV__SYSCLK_DIV_4   0x20 ///< SYSCLK is equal to selected clock source divided
                                           ///< by 4.                                           
#define CLKSEL_CLKDIV__SYSCLK_DIV_8   0x30 ///< SYSCLK is equal to selected clock source divided
                                           ///< by 8.                                           
#define CLKSEL_CLKDIV__SYSCLK_DIV_16  0x40 ///< SYSCLK is equal to selected clock source divided
                                           ///< by 16.                                          
#define CLKSEL_CLKDIV__SYSCLK_DIV_32  0x50 ///< SYSCLK is equal to selected clock source divided
                                           ///< by 32.                                          
#define CLKSEL_CLKDIV__SYSCLK_DIV_64  0x60 ///< SYSCLK is equal to selected clock source divided
                                           ///< by 64.                                          
#define CLKSEL_CLKDIV__SYSCLK_DIV_128 0x70 ///< SYSCLK is equal to selected clock source divided
                                           ///< by 128.                                         
                                                                                                
//------------------------------------------------------------------------------
// CPT0CN Enums (Comparator 0 Control @ 0x9B)
//------------------------------------------------------------------------------
#define CPT0CN_CPHYN__FMASK                0x03 ///< Comparator Negative Hysteresis Control            
#define CPT0CN_CPHYN__SHIFT                0x00 ///< Comparator Negative Hysteresis Control            
#define CPT0CN_CPHYN__DISABLED             0x00 ///< Disable negative hysteresis.                      
#define CPT0CN_CPHYN__ENABLED_MODE1        0x01 ///< Negative Hysteresis = Hysteresis 1.               
#define CPT0CN_CPHYN__ENABLED_MODE2        0x02 ///< Negative Hysteresis = Hysteresis 2.               
#define CPT0CN_CPHYN__ENABLED_MODE3        0x03 ///< Negative Hysteresis = Hysteresis 3 (Maximum).     
                                                                                                       
#define CPT0CN_CPHYP__FMASK                0x0C ///< Comparator Positive Hysteresis Control            
#define CPT0CN_CPHYP__SHIFT                0x02 ///< Comparator Positive Hysteresis Control            
#define CPT0CN_CPHYP__DISABLED             0x00 ///< Disable positive hysteresis.                      
#define CPT0CN_CPHYP__ENABLED_MODE1        0x04 ///< Positive Hysteresis = Hysteresis 1.               
#define CPT0CN_CPHYP__ENABLED_MODE2        0x08 ///< Positive Hysteresis = Hysteresis 2.               
#define CPT0CN_CPHYP__ENABLED_MODE3        0x0C ///< Positive Hysteresis = Hysteresis 3 (Maximum).     
                                                                                                       
#define CPT0CN_CPFIF__BMASK                0x10 ///< Comparator Falling-Edge Flag                      
#define CPT0CN_CPFIF__SHIFT                0x04 ///< Comparator Falling-Edge Flag                      
#define CPT0CN_CPFIF__NOT_SET              0x00 ///< No comparator falling edge has occurred since this
                                                ///< flag was last cleared.                            
#define CPT0CN_CPFIF__FALLING_EDGE         0x10 ///< Comparator falling edge has occurred.             
                                                                                                       
#define CPT0CN_CPRIF__BMASK                0x20 ///< Comparator Rising-Edge Flag                       
#define CPT0CN_CPRIF__SHIFT                0x05 ///< Comparator Rising-Edge Flag                       
#define CPT0CN_CPRIF__NOT_SET              0x00 ///< No comparator rising edge has occurred since this 
                                                ///< flag was last cleared.                            
#define CPT0CN_CPRIF__RISING_EDGE          0x20 ///< Comparator rising edge has occurred.              
                                                                                                       
#define CPT0CN_CPOUT__BMASK                0x40 ///< Comparator Output State Flag                      
#define CPT0CN_CPOUT__SHIFT                0x06 ///< Comparator Output State Flag                      
#define CPT0CN_CPOUT__POS_LESS_THAN_NEG    0x00 ///< Voltage on CP0P < CP0N.                           
#define CPT0CN_CPOUT__POS_GREATER_THAN_NEG 0x40 ///< Voltage on CP0P > CP0N.                           
                                                                                                       
#define CPT0CN_CPEN__BMASK                 0x80 ///< Comparator Enable                                 
#define CPT0CN_CPEN__SHIFT                 0x07 ///< Comparator Enable                                 
#define CPT0CN_CPEN__DISABLED              0x00 ///< Comparator disabled.                              
#define CPT0CN_CPEN__ENABLED               0x80 ///< Comparator enabled.                               
                                                                                                       
//------------------------------------------------------------------------------
// CPT0MD Enums (Comparator 0 Mode @ 0x9D)
//------------------------------------------------------------------------------
#define CPT0MD_CPMD__FMASK              0x03 ///< Comparator Mode Select                      
#define CPT0MD_CPMD__SHIFT              0x00 ///< Comparator Mode Select                      
#define CPT0MD_CPMD__MODE0              0x00 ///< Mode 0 (Fastest Response Time, Highest Power
                                             ///< Consumption)                                
#define CPT0MD_CPMD__MODE1              0x01 ///< Mode 1                                      
#define CPT0MD_CPMD__MODE2              0x02 ///< Mode 2                                      
#define CPT0MD_CPMD__MODE3              0x03 ///< Mode 3 (Slowest Response Time, Lowest Power 
                                             ///< Consumption)                                
                                                                                              
#define CPT0MD_CPFIE__BMASK             0x10 ///< Comparator Falling-Edge Interrupt Enable    
#define CPT0MD_CPFIE__SHIFT             0x04 ///< Comparator Falling-Edge Interrupt Enable    
#define CPT0MD_CPFIE__FALL_INT_DISABLED 0x00 ///< Comparator falling-edge interrupt disabled. 
#define CPT0MD_CPFIE__FALL_INT_ENABLED  0x10 ///< Comparator falling-edge interrupt enabled.  
                                                                                              
#define CPT0MD_CPRIE__BMASK             0x20 ///< Comparator Rising-Edge Interrupt Enable     
#define CPT0MD_CPRIE__SHIFT             0x05 ///< Comparator Rising-Edge Interrupt Enable     
#define CPT0MD_CPRIE__RISE_INT_DISABLED 0x00 ///< Comparator rising-edge interrupt disabled.  
#define CPT0MD_CPRIE__RISE_INT_ENABLED  0x20 ///< Comparator rising-edge interrupt enabled.   
                                                                                              
#define CPT0MD_CPLOUT__BMASK            0x80 ///< Comparator Latched Output Flag              
#define CPT0MD_CPLOUT__SHIFT            0x07 ///< Comparator Latched Output Flag              
#define CPT0MD_CPLOUT__LOW              0x00 ///< Comparator output was logic low at last PCA 
                                             ///< overflow.                                   
#define CPT0MD_CPLOUT__HIGH             0x80 ///< Comparator output was logic high at last PCA
                                             ///< overflow.                                   
                                                                                              
//------------------------------------------------------------------------------
// CPT0MX Enums (Comparator 0 Multiplexer Selection @ 0x9F)
//------------------------------------------------------------------------------
#define CPT0MX_CMXP__FMASK    0x0F ///< Comparator Positive Input MUX Selection
#define CPT0MX_CMXP__SHIFT    0x00 ///< Comparator Positive Input MUX Selection
#define CPT0MX_CMXP__CMP0P0   0x00 ///< External pin CMP0P.0.                  
#define CPT0MX_CMXP__CMP0P1   0x01 ///< External pin CMP0P.1.                  
#define CPT0MX_CMXP__CMP0P2   0x02 ///< External pin CMP0P.2.                  
#define CPT0MX_CMXP__CMP0P3   0x03 ///< External pin CMP0P.3.                  
#define CPT0MX_CMXP__CMP0P4   0x04 ///< External pin CMP0P.4.                  
#define CPT0MX_CMXP__CMP0P5   0x05 ///< External pin CMP0P.5.                  
#define CPT0MX_CMXP__CMP0P6   0x06 ///< External pin CMP0P.6.                  
#define CPT0MX_CMXP__CMP0P7   0x07 ///< External pin CMP0P.7.                  
#define CPT0MX_CMXP__INTERNAL 0x08 ///< Internal LDO output                    
#define CPT0MX_CMXP__NONE     0x0F ///< No input selected.                     
                                                                               
#define CPT0MX_CMXN__FMASK    0xF0 ///< Comparator Negative Input MUX Selection
#define CPT0MX_CMXN__SHIFT    0x04 ///< Comparator Negative Input MUX Selection
#define CPT0MX_CMXN__CMP0N0   0x00 ///< External pin CMP0N.0.                  
#define CPT0MX_CMXN__CMP0N1   0x10 ///< External pin CMP0N.1.                  
#define CPT0MX_CMXN__CMP0N2   0x20 ///< External pin CMP0N.2.                  
#define CPT0MX_CMXN__CMP0N3   0x30 ///< External pin CMP0N.3.                  
#define CPT0MX_CMXN__CMP0N4   0x40 ///< External pin CMP0N.4.                  
#define CPT0MX_CMXN__CMP0N5   0x50 ///< External pin CMP0N.5.                  
#define CPT0MX_CMXN__CMP0N6   0x60 ///< External pin CMP0N.6.                  
#define CPT0MX_CMXN__CMP0N7   0x70 ///< External pin CMP0N.7.                  
#define CPT0MX_CMXN__GND      0x80 ///< GND                                    
#define CPT0MX_CMXN__NONE     0xF0 ///< No input selected.                     
                                                                               
//------------------------------------------------------------------------------
// CPT1CN Enums (Comparator 1 Control @ 0xBF)
//------------------------------------------------------------------------------
#define CPT1CN_CPHYN__FMASK                0x03 ///< Comparator Negative Hysteresis Control            
#define CPT1CN_CPHYN__SHIFT                0x00 ///< Comparator Negative Hysteresis Control            
#define CPT1CN_CPHYN__DISABLED             0x00 ///< Disable negative hysteresis.                      
#define CPT1CN_CPHYN__ENABLED_MODE1        0x01 ///< Negative Hysteresis = Hysteresis 1.               
#define CPT1CN_CPHYN__ENABLED_MODE2        0x02 ///< Negative Hysteresis = Hysteresis 2.               
#define CPT1CN_CPHYN__ENABLED_MODE3        0x03 ///< Negative Hysteresis = Hysteresis 3 (Maximum).     
                                                                                                       
#define CPT1CN_CPHYP__FMASK                0x0C ///< Comparator Positive Hysteresis Control            
#define CPT1CN_CPHYP__SHIFT                0x02 ///< Comparator Positive Hysteresis Control            
#define CPT1CN_CPHYP__DISABLED             0x00 ///< Disable positive hysteresis.                      
#define CPT1CN_CPHYP__ENABLED_MODE1        0x04 ///< Positive Hysteresis = Hysteresis 1.               
#define CPT1CN_CPHYP__ENABLED_MODE2        0x08 ///< Positive Hysteresis = Hysteresis 2.               
#define CPT1CN_CPHYP__ENABLED_MODE3        0x0C ///< Positive Hysteresis = Hysteresis 3 (Maximum).     
                                                                                                       
#define CPT1CN_CPFIF__BMASK                0x10 ///< Comparator Falling-Edge Flag                      
#define CPT1CN_CPFIF__SHIFT                0x04 ///< Comparator Falling-Edge Flag                      
#define CPT1CN_CPFIF__NOT_SET              0x00 ///< No comparator falling edge has occurred since this
                                                ///< flag was last cleared.                            
#define CPT1CN_CPFIF__FALLING_EDGE         0x10 ///< Comparator falling edge has occurred.             
                                                                                                       
#define CPT1CN_CPRIF__BMASK                0x20 ///< Comparator Rising-Edge Flag                       
#define CPT1CN_CPRIF__SHIFT                0x05 ///< Comparator Rising-Edge Flag                       
#define CPT1CN_CPRIF__NOT_SET              0x00 ///< No comparator rising edge has occurred since this 
                                                ///< flag was last cleared.                            
#define CPT1CN_CPRIF__RISING_EDGE          0x20 ///< Comparator rising edge has occurred.              
                                                                                                       
#define CPT1CN_CPOUT__BMASK                0x40 ///< Comparator Output State Flag                      
#define CPT1CN_CPOUT__SHIFT                0x06 ///< Comparator Output State Flag                      
#define CPT1CN_CPOUT__POS_LESS_THAN_NEG    0x00 ///< Voltage on CP1P < CP1N.                           
#define CPT1CN_CPOUT__POS_GREATER_THAN_NEG 0x40 ///< Voltage on CP1P > CP1N.                           
                                                                                                       
#define CPT1CN_CPEN__BMASK                 0x80 ///< Comparator Enable                                 
#define CPT1CN_CPEN__SHIFT                 0x07 ///< Comparator Enable                                 
#define CPT1CN_CPEN__DISABLED              0x00 ///< Comparator disabled.                              
#define CPT1CN_CPEN__ENABLED               0x80 ///< Comparator enabled.                               
                                                                                                       
//------------------------------------------------------------------------------
// CPT1MD Enums (Comparator 1 Mode @ 0xAB)
//------------------------------------------------------------------------------
#define CPT1MD_CPMD__FMASK              0x03 ///< Comparator Mode Select                      
#define CPT1MD_CPMD__SHIFT              0x00 ///< Comparator Mode Select                      
#define CPT1MD_CPMD__MODE0              0x00 ///< Mode 0 (Fastest Response Time, Highest Power
                                             ///< Consumption)                                
#define CPT1MD_CPMD__MODE1              0x01 ///< Mode 1                                      
#define CPT1MD_CPMD__MODE2              0x02 ///< Mode 2                                      
#define CPT1MD_CPMD__MODE3              0x03 ///< Mode 3 (Slowest Response Time, Lowest Power 
                                             ///< Consumption)                                
                                                                                              
#define CPT1MD_CPFIE__BMASK             0x10 ///< Comparator Falling-Edge Interrupt Enable    
#define CPT1MD_CPFIE__SHIFT             0x04 ///< Comparator Falling-Edge Interrupt Enable    
#define CPT1MD_CPFIE__FALL_INT_DISABLED 0x00 ///< Comparator falling-edge interrupt disabled. 
#define CPT1MD_CPFIE__FALL_INT_ENABLED  0x10 ///< Comparator falling-edge interrupt enabled.  
                                                                                              
#define CPT1MD_CPRIE__BMASK             0x20 ///< Comparator Rising-Edge Interrupt Enable     
#define CPT1MD_CPRIE__SHIFT             0x05 ///< Comparator Rising-Edge Interrupt Enable     
#define CPT1MD_CPRIE__RISE_INT_DISABLED 0x00 ///< Comparator rising-edge interrupt disabled.  
#define CPT1MD_CPRIE__RISE_INT_ENABLED  0x20 ///< Comparator rising-edge interrupt enabled.   
                                                                                              
#define CPT1MD_CPLOUT__BMASK            0x80 ///< Comparator Latched Output Flag              
#define CPT1MD_CPLOUT__SHIFT            0x07 ///< Comparator Latched Output Flag              
#define CPT1MD_CPLOUT__LOW              0x00 ///< Comparator output was logic low at last PCA 
                                             ///< overflow.                                   
#define CPT1MD_CPLOUT__HIGH             0x80 ///< Comparator output was logic high at last PCA
                                             ///< overflow.                                   
                                                                                              
//------------------------------------------------------------------------------
// CPT1MX Enums (Comparator 1 Multiplexer Selection @ 0xAA)
//------------------------------------------------------------------------------
#define CPT1MX_CMXP__FMASK    0x0F ///< Comparator Positive Input MUX Selection
#define CPT1MX_CMXP__SHIFT    0x00 ///< Comparator Positive Input MUX Selection
#define CPT1MX_CMXP__CMP1P0   0x00 ///< External pin CMP1P.0.                  
#define CPT1MX_CMXP__CMP1P1   0x01 ///< External pin CMP1P.1.                  
#define CPT1MX_CMXP__CMP1P2   0x02 ///< External pin CMP1P.2.                  
#define CPT1MX_CMXP__CMP1P3   0x03 ///< External pin CMP1P.3.                  
#define CPT1MX_CMXP__CMP1P4   0x04 ///< External pin CMP1P.4.                  
#define CPT1MX_CMXP__CMP1P5   0x05 ///< External pin CMP1P.5.                  
#define CPT1MX_CMXP__CMP1P6   0x06 ///< External pin CMP1P.6.                  
#define CPT1MX_CMXP__CMP1P7   0x07 ///< External pin CMP1P.7.                  
#define CPT1MX_CMXP__INTERNAL 0x08 ///< Internal LDO output                    
#define CPT1MX_CMXP__NONE     0x0F ///< No input selected.                     
                                                                               
#define CPT1MX_CMXN__FMASK    0xF0 ///< Comparator Negative Input MUX Selection
#define CPT1MX_CMXN__SHIFT    0x04 ///< Comparator Negative Input MUX Selection
#define CPT1MX_CMXN__CMP1N0   0x00 ///< External pin CMP1N.0.                  
#define CPT1MX_CMXN__CMP1N1   0x10 ///< External pin CMP1N.1.                  
#define CPT1MX_CMXN__CMP1N2   0x20 ///< External pin CMP1N.2.                  
#define CPT1MX_CMXN__CMP1N3   0x30 ///< External pin CMP1N.3.                  
#define CPT1MX_CMXN__CMP1N4   0x40 ///< External pin CMP1N.4.                  
#define CPT1MX_CMXN__CMP1N5   0x50 ///< External pin CMP1N.5.                  
#define CPT1MX_CMXN__CMP1N6   0x60 ///< External pin CMP1N.6.                  
#define CPT1MX_CMXN__CMP1N7   0x70 ///< External pin CMP1N.7.                  
#define CPT1MX_CMXN__GND      0x80 ///< GND                                    
#define CPT1MX_CMXN__NONE     0xF0 ///< No input selected.                     
                                                                               
//------------------------------------------------------------------------------
// CRC0AUTO Enums (CRC0 Automatic Control @ 0xD2)
//------------------------------------------------------------------------------
#define CRC0AUTO_CRCST__FMASK     0x3F ///< Automatic CRC Calculation Starting Block  
#define CRC0AUTO_CRCST__SHIFT     0x00 ///< Automatic CRC Calculation Starting Block  
                                                                                      
#define CRC0AUTO_AUTOEN__BMASK    0x80 ///< Automatic CRC Calculation Enable          
#define CRC0AUTO_AUTOEN__SHIFT    0x07 ///< Automatic CRC Calculation Enable          
#define CRC0AUTO_AUTOEN__DISABLED 0x00 ///< Disable automatic CRC operations on flash.
#define CRC0AUTO_AUTOEN__ENABLED  0x80 ///< Enable automatic CRC operations on flash. 
                                                                                      
//------------------------------------------------------------------------------
// CRC0CN Enums (CRC0 Control @ 0xCE)
//------------------------------------------------------------------------------
#define CRC0CN_CRCPNT__BMASK        0x01 ///< CRC Result Pointer                               
#define CRC0CN_CRCPNT__SHIFT        0x00 ///< CRC Result Pointer                               
#define CRC0CN_CRCPNT__ACCESS_LOWER 0x00 ///< CRC0DAT accesses bits 7-0 of the 16-bit CRC      
                                         ///< result.                                          
#define CRC0CN_CRCPNT__ACCESS_UPPER 0x01 ///< CRC0DAT accesses bits 15-8 of the 16-bit CRC     
                                         ///< result.                                          
                                                                                               
#define CRC0CN_CRCVAL__BMASK        0x04 ///< CRC Initialization Value                         
#define CRC0CN_CRCVAL__SHIFT        0x02 ///< CRC Initialization Value                         
#define CRC0CN_CRCVAL__SET_ZEROES   0x00 ///< CRC result is set to 0x0000 on write of 1 to     
                                         ///< CRCINIT.                                         
#define CRC0CN_CRCVAL__SET_ONES     0x04 ///< CRC result is set to 0xFFFF on write of 1 to     
                                         ///< CRCINIT.                                         
                                                                                               
#define CRC0CN_CRCINIT__BMASK       0x08 ///< CRC Initialization Enable                        
#define CRC0CN_CRCINIT__SHIFT       0x03 ///< CRC Initialization Enable                        
#define CRC0CN_CRCINIT__DO_NOT_INIT 0x00 ///< Do not initialize the CRC result.                
#define CRC0CN_CRCINIT__INIT        0x08 ///< Initialize the CRC result to ones or zeroes vased
                                         ///< on the value of CRCVAL.                          
                                                                                               
//------------------------------------------------------------------------------
// CRC0CNT Enums (CRC0 Automatic Flash Sector Count @ 0xD3)
//------------------------------------------------------------------------------
#define CRC0CNT_CRCCNT__FMASK  0x1F ///< Automatic CRC Calculation Block Count
#define CRC0CNT_CRCCNT__SHIFT  0x00 ///< Automatic CRC Calculation Block Count
                                                                              
#define CRC0CNT_CRCDN__BMASK   0x80 ///< Automatic CRC Calculation Complete   
#define CRC0CNT_CRCDN__SHIFT   0x07 ///< Automatic CRC Calculation Complete   
#define CRC0CNT_CRCDN__NOT_SET 0x00 ///< A CRC calculation is in progress.    
#define CRC0CNT_CRCDN__SET     0x80 ///< A CRC calculation is not in progress.
                                                                              
//------------------------------------------------------------------------------
// CRC0DAT Enums (CRC0 Data Output @ 0xDE)
//------------------------------------------------------------------------------
#define CRC0DAT_CRC0DAT__FMASK 0xFF ///< CRC Data Output
#define CRC0DAT_CRC0DAT__SHIFT 0x00 ///< CRC Data Output
                                                        
//------------------------------------------------------------------------------
// CRC0FLIP Enums (CRC0 Bit Flip @ 0xCF)
//------------------------------------------------------------------------------
#define CRC0FLIP_CRC0FLIP__FMASK 0xFF ///< CRC0 Bit Flip
#define CRC0FLIP_CRC0FLIP__SHIFT 0x00 ///< CRC0 Bit Flip
                                                        
//------------------------------------------------------------------------------
// CRC0IN Enums (CRC0 Data Input @ 0xDD)
//------------------------------------------------------------------------------
#define CRC0IN_CRC0IN__FMASK 0xFF ///< CRC Data Input
#define CRC0IN_CRC0IN__SHIFT 0x00 ///< CRC Data Input
                                                     
//------------------------------------------------------------------------------
// DERIVID Enums (Derivative Identification @ 0xAD)
//------------------------------------------------------------------------------
#define DERIVID_DERIVID__FMASK        0xFF ///< Derivative ID
#define DERIVID_DERIVID__SHIFT        0x00 ///< Derivative ID
#define DERIVID_DERIVID__C8051F850_GU 0xD0 ///< C8051F850-GU 
#define DERIVID_DERIVID__C8051F851_GU 0xD1 ///< C8051F851-GU 
#define DERIVID_DERIVID__C8051F852_GU 0xD2 ///< C8051F852-GU 
#define DERIVID_DERIVID__C8051F853_GU 0xD3 ///< C8051F853-GU 
#define DERIVID_DERIVID__C8051F854_GU 0xD4 ///< C8051F854-GU 
#define DERIVID_DERIVID__C8051F855_GU 0xD5 ///< C8051F855-GU 
#define DERIVID_DERIVID__C8051F860_GS 0xE0 ///< C8051F860-GS 
#define DERIVID_DERIVID__C8051F861_GS 0xE1 ///< C8051F861-GS 
#define DERIVID_DERIVID__C8051F862_GS 0xE2 ///< C8051F862-GS 
#define DERIVID_DERIVID__C8051F863_GS 0xE3 ///< C8051F863-GS 
#define DERIVID_DERIVID__C8051F864_GS 0xE4 ///< C8051F864-GS 
#define DERIVID_DERIVID__C8051F865_GS 0xE5 ///< C8051F865-GS 
#define DERIVID_DERIVID__C8051F850_GM 0xF0 ///< C8051F850-GM 
#define DERIVID_DERIVID__C8051F851_GM 0xF1 ///< C8051F851-GM 
#define DERIVID_DERIVID__C8051F852_GM 0xF2 ///< C8051F852-GM 
#define DERIVID_DERIVID__C8051F853_GM 0xF3 ///< C8051F853-GM 
#define DERIVID_DERIVID__C8051F854_GM 0xF4 ///< C8051F854-GM 
#define DERIVID_DERIVID__C8051F855_GM 0xF5 ///< C8051F855-GM 
                                                             
//------------------------------------------------------------------------------
// DEVICEID Enums (Device Identification @ 0xB5)
//------------------------------------------------------------------------------
#define DEVICEID_DEVICEID__FMASK 0xFF ///< Device ID
#define DEVICEID_DEVICEID__SHIFT 0x00 ///< Device ID
                                                    
//------------------------------------------------------------------------------
// REVID Enums (Revision Identifcation @ 0xB6)
//------------------------------------------------------------------------------
#define REVID_REVID__FMASK 0xFF ///< Revision ID
#define REVID_REVID__SHIFT 0x00 ///< Revision ID
#define REVID_REVID__REV_A 0x00 ///< Revision A 
#define REVID_REVID__REV_B 0x01 ///< Revision B 
#define REVID_REVID__REV_C 0x02 ///< Revision C 
                                                
//------------------------------------------------------------------------------
// IT01CF Enums (INT0/INT1 Configuration @ 0xE4)
//------------------------------------------------------------------------------
#define IT01CF_IN0SL__FMASK       0x07 ///< INT0 Port Pin Selection   
#define IT01CF_IN0SL__SHIFT       0x00 ///< INT0 Port Pin Selection   
#define IT01CF_IN0SL__P0_0        0x00 ///< Select P0.0.              
#define IT01CF_IN0SL__P0_1        0x01 ///< Select P0.1.              
#define IT01CF_IN0SL__P0_2        0x02 ///< Select P0.2.              
#define IT01CF_IN0SL__P0_3        0x03 ///< Select P0.3.              
#define IT01CF_IN0SL__P0_4        0x04 ///< Select P0.4.              
#define IT01CF_IN0SL__P0_5        0x05 ///< Select P0.5.              
#define IT01CF_IN0SL__P0_6        0x06 ///< Select P0.6.              
#define IT01CF_IN0SL__P0_7        0x07 ///< Select P0.7.              
                                                                      
#define IT01CF_IN0PL__BMASK       0x08 ///< INT0 Polarity             
#define IT01CF_IN0PL__SHIFT       0x03 ///< INT0 Polarity             
#define IT01CF_IN0PL__ACTIVE_LOW  0x00 ///< INT0 input is active low. 
#define IT01CF_IN0PL__ACTIVE_HIGH 0x08 ///< INT0 input is active high.
                                                                      
#define IT01CF_IN1SL__FMASK       0x70 ///< INT1 Port Pin Selection   
#define IT01CF_IN1SL__SHIFT       0x04 ///< INT1 Port Pin Selection   
#define IT01CF_IN1SL__P0_0        0x00 ///< Select P0.0.              
#define IT01CF_IN1SL__P0_1        0x10 ///< Select P0.1.              
#define IT01CF_IN1SL__P0_2        0x20 ///< Select P0.2.              
#define IT01CF_IN1SL__P0_3        0x30 ///< Select P0.3.              
#define IT01CF_IN1SL__P0_4        0x40 ///< Select P0.4.              
#define IT01CF_IN1SL__P0_5        0x50 ///< Select P0.5.              
#define IT01CF_IN1SL__P0_6        0x60 ///< Select P0.6.              
#define IT01CF_IN1SL__P0_7        0x70 ///< Select P0.7.              
                                                                      
#define IT01CF_IN1PL__BMASK       0x80 ///< INT1 Polarity             
#define IT01CF_IN1PL__SHIFT       0x07 ///< INT1 Polarity             
#define IT01CF_IN1PL__ACTIVE_LOW  0x00 ///< INT1 input is active low. 
#define IT01CF_IN1PL__ACTIVE_HIGH 0x80 ///< INT1 input is active high.
                                                                      
//------------------------------------------------------------------------------
// FLKEY Enums (Flash Lock and Key @ 0xB7)
//------------------------------------------------------------------------------
#define FLKEY_FLKEY__FMASK    0xFF ///< Flash Lock and Key Register                    
#define FLKEY_FLKEY__SHIFT    0x00 ///< Flash Lock and Key Register                    
#define FLKEY_FLKEY__LOCKED   0x00 ///< Flash is write/erase locked.                   
#define FLKEY_FLKEY__FIRST    0x01 ///< The first key code has been written (0xA5).    
#define FLKEY_FLKEY__UNLOCKED 0x02 ///< Flash is unlocked (writes/erases allowed).     
#define FLKEY_FLKEY__DISABLED 0x03 ///< Flash writes/erases are disabled until the next
                                   ///< reset.                                         
#define FLKEY_FLKEY__KEY1     0xA5 ///< Flash writes and erases are enabled by writing 
                                   ///< 0xA5 followed by 0xF1 to the FLKEY register.   
#define FLKEY_FLKEY__KEY2     0xF1 ///< Flash writes and erases are enabled by writing 
                                   ///< 0xA5 followed by 0xF1 to the FLKEY register.   
                                                                                       
//------------------------------------------------------------------------------
// PSCTL Enums (Program Store Control @ 0x8F)
//------------------------------------------------------------------------------
#define PSCTL_PSWE__BMASK          0x01 ///< Program Store Write Enable                      
#define PSCTL_PSWE__SHIFT          0x00 ///< Program Store Write Enable                      
#define PSCTL_PSWE__WRITE_DISABLED 0x00 ///< Writes to flash program memory disabled.        
#define PSCTL_PSWE__WRITE_ENABLED  0x01 ///< Writes to flash program memory enabled; the MOVX
                                        ///< write instruction targets flash memory.         
                                                                                             
#define PSCTL_PSEE__BMASK          0x02 ///< Program Store Erase Enable                      
#define PSCTL_PSEE__SHIFT          0x01 ///< Program Store Erase Enable                      
#define PSCTL_PSEE__ERASE_DISABLED 0x00 ///< Flash program memory erasure disabled.          
#define PSCTL_PSEE__ERASE_ENABLED  0x02 ///< Flash program memory erasure enabled.           
                                                                                             
//------------------------------------------------------------------------------
// OSCICL Enums (High Frequency Oscillator Calibration @ 0xC7)
//------------------------------------------------------------------------------
#define OSCICL_OSCICL__FMASK 0xFF ///< Oscillator Calibration
#define OSCICL_OSCICL__SHIFT 0x00 ///< Oscillator Calibration
                                                             
//------------------------------------------------------------------------------
// EIE1 Enums (Extended Interrupt Enable 1 @ 0xE6)
//------------------------------------------------------------------------------
#define EIE1_ESMB0__BMASK     0x01 ///< SMBus (SMB0) Interrupt Enable                     
#define EIE1_ESMB0__SHIFT     0x00 ///< SMBus (SMB0) Interrupt Enable                     
#define EIE1_ESMB0__DISABLED  0x00 ///< Disable all SMB0 interrupts.                      
#define EIE1_ESMB0__ENABLED   0x01 ///< Enable interrupt requests generated by SMB0.      
                                                                                          
#define EIE1_EMAT__BMASK      0x02 ///< Port Match Interrupts Enable                      
#define EIE1_EMAT__SHIFT      0x01 ///< Port Match Interrupts Enable                      
#define EIE1_EMAT__DISABLED   0x00 ///< Disable all Port Match interrupts.                
#define EIE1_EMAT__ENABLED    0x02 ///< Enable interrupt requests generated by a Port     
                                   ///< Match.                                            
                                                                                          
#define EIE1_EWADC0__BMASK    0x04 ///< Window Comparison ADC0 Interrupt Enable           
#define EIE1_EWADC0__SHIFT    0x02 ///< Window Comparison ADC0 Interrupt Enable           
#define EIE1_EWADC0__DISABLED 0x00 ///< Disable ADC0 Window Comparison interrupt.         
#define EIE1_EWADC0__ENABLED  0x04 ///< Enable interrupt requests generated by ADC0 Window
                                   ///< Compare flag (ADWINT).                            
                                                                                          
#define EIE1_EADC0__BMASK     0x08 ///< ADC0 Conversion Complete Interrupt Enable         
#define EIE1_EADC0__SHIFT     0x03 ///< ADC0 Conversion Complete Interrupt Enable         
#define EIE1_EADC0__DISABLED  0x00 ///< Disable ADC0 Conversion Complete interrupt.       
#define EIE1_EADC0__ENABLED   0x08 ///< Enable interrupt requests generated by the ADINT  
                                   ///< flag.                                             
                                                                                          
#define EIE1_EPCA0__BMASK     0x10 ///< Programmable Counter Array (PCA0) Interrupt Enable
#define EIE1_EPCA0__SHIFT     0x04 ///< Programmable Counter Array (PCA0) Interrupt Enable
#define EIE1_EPCA0__DISABLED  0x00 ///< Disable all PCA0 interrupts.                      
#define EIE1_EPCA0__ENABLED   0x10 ///< Enable interrupt requests generated by PCA0.      
                                                                                          
#define EIE1_ECP0__BMASK      0x20 ///< Comparator0 (CP0) Interrupt Enable                
#define EIE1_ECP0__SHIFT      0x05 ///< Comparator0 (CP0) Interrupt Enable                
#define EIE1_ECP0__DISABLED   0x00 ///< Disable CP0 interrupts.                           
#define EIE1_ECP0__ENABLED    0x20 ///< Enable interrupt requests generated by the        
                                   ///< comparator 0 CPRIF or CPFIF flags.                
                                                                                          
#define EIE1_ECP1__BMASK      0x40 ///< Comparator1 (CP1) Interrupt Enable                
#define EIE1_ECP1__SHIFT      0x06 ///< Comparator1 (CP1) Interrupt Enable                
#define EIE1_ECP1__DISABLED   0x00 ///< Disable CP1 interrupts.                           
#define EIE1_ECP1__ENABLED    0x40 ///< Enable interrupt requests generated by the        
                                   ///< comparator 1 CPRIF or CPFIF flags.                
                                                                                          
#define EIE1_ET3__BMASK       0x80 ///< Timer 3 Interrupt Enable                          
#define EIE1_ET3__SHIFT       0x07 ///< Timer 3 Interrupt Enable                          
#define EIE1_ET3__DISABLED    0x00 ///< Disable Timer 3 interrupts.                       
#define EIE1_ET3__ENABLED     0x80 ///< Enable interrupt requests generated by the TF3L or
                                   ///< TF3H flags.                                       
                                                                                          
//------------------------------------------------------------------------------
// EIP1 Enums (Extended Interrupt Priority 1 @ 0xF3)
//------------------------------------------------------------------------------
#define EIP1_PSMB0__BMASK  0x01 ///< SMBus (SMB0) Interrupt Priority Control                     
#define EIP1_PSMB0__SHIFT  0x00 ///< SMBus (SMB0) Interrupt Priority Control                     
#define EIP1_PSMB0__LOW    0x00 ///< SMB0 interrupt set to low priority level.                   
#define EIP1_PSMB0__HIGH   0x01 ///< SMB0 interrupt set to high priority level.                  
                                                                                                 
#define EIP1_PMAT__BMASK   0x02 ///< Port Match Interrupt Priority Control                       
#define EIP1_PMAT__SHIFT   0x01 ///< Port Match Interrupt Priority Control                       
#define EIP1_PMAT__LOW     0x00 ///< Port Match interrupt set to low priority level.             
#define EIP1_PMAT__HIGH    0x02 ///< Port Match interrupt set to high priority level.            
                                                                                                 
#define EIP1_PWADC0__BMASK 0x04 ///< ADC0 Window Comparator Interrupt Priority Control           
#define EIP1_PWADC0__SHIFT 0x02 ///< ADC0 Window Comparator Interrupt Priority Control           
#define EIP1_PWADC0__LOW   0x00 ///< ADC0 Window interrupt set to low priority level.            
#define EIP1_PWADC0__HIGH  0x04 ///< ADC0 Window interrupt set to high priority level.           
                                                                                                 
#define EIP1_PADC0__BMASK  0x08 ///< ADC0 Conversion Complete Interrupt Priority Control         
#define EIP1_PADC0__SHIFT  0x03 ///< ADC0 Conversion Complete Interrupt Priority Control         
#define EIP1_PADC0__LOW    0x00 ///< ADC0 Conversion Complete interrupt set to low               
                                ///< priority level.                                             
#define EIP1_PADC0__HIGH   0x08 ///< ADC0 Conversion Complete interrupt set to high              
                                ///< priority level.                                             
                                                                                                 
#define EIP1_PPCA0__BMASK  0x10 ///< Programmable Counter Array (PCA0) Interrupt Priority Control
#define EIP1_PPCA0__SHIFT  0x04 ///< Programmable Counter Array (PCA0) Interrupt Priority Control
#define EIP1_PPCA0__LOW    0x00 ///< PCA0 interrupt set to low priority level.                   
#define EIP1_PPCA0__HIGH   0x10 ///< PCA0 interrupt set to high priority level.                  
                                                                                                 
#define EIP1_PCP0__BMASK   0x20 ///< Comparator0 (CP0) Interrupt Priority Control                
#define EIP1_PCP0__SHIFT   0x05 ///< Comparator0 (CP0) Interrupt Priority Control                
#define EIP1_PCP0__LOW     0x00 ///< CP0 interrupt set to low priority level.                    
#define EIP1_PCP0__HIGH    0x20 ///< CP0 interrupt set to high priority level.                   
                                                                                                 
#define EIP1_PCP1__BMASK   0x40 ///< Comparator1 (CP1) Interrupt Priority Control                
#define EIP1_PCP1__SHIFT   0x06 ///< Comparator1 (CP1) Interrupt Priority Control                
#define EIP1_PCP1__LOW     0x00 ///< CP1 interrupt set to low priority level.                    
#define EIP1_PCP1__HIGH    0x40 ///< CP1 interrupt set to high priority level.                   
                                                                                                 
#define EIP1_PT3__BMASK    0x80 ///< Timer 3 Interrupt Priority Control                          
#define EIP1_PT3__SHIFT    0x07 ///< Timer 3 Interrupt Priority Control                          
#define EIP1_PT3__LOW      0x00 ///< Timer 3 interrupts set to low priority level.               
#define EIP1_PT3__HIGH     0x80 ///< Timer 3 interrupts set to high priority level.              
                                                                                                 
//------------------------------------------------------------------------------
// IE Enums (Interrupt Enable @ 0xA8)
//------------------------------------------------------------------------------
#define IE_EX0__BMASK      0x01 ///< External Interrupt 0 Enable                       
#define IE_EX0__SHIFT      0x00 ///< External Interrupt 0 Enable                       
#define IE_EX0__DISABLED   0x00 ///< Disable external interrupt 0.                     
#define IE_EX0__ENABLED    0x01 ///< Enable interrupt requests generated by the /INT0  
                                ///< input.                                            
                                                                                       
#define IE_ET0__BMASK      0x02 ///< Timer 0 Interrupt Enable                          
#define IE_ET0__SHIFT      0x01 ///< Timer 0 Interrupt Enable                          
#define IE_ET0__DISABLED   0x00 ///< Disable all Timer 0 interrupt.                    
#define IE_ET0__ENABLED    0x02 ///< Enable interrupt requests generated by the TF0    
                                ///< flag.                                             
                                                                                       
#define IE_EX1__BMASK      0x04 ///< External Interrupt 1 Enable                       
#define IE_EX1__SHIFT      0x02 ///< External Interrupt 1 Enable                       
#define IE_EX1__DISABLED   0x00 ///< Disable external interrupt 1.                     
#define IE_EX1__ENABLED    0x04 ///< Enable interrupt requests generated by the /INT1  
                                ///< input.                                            
                                                                                       
#define IE_ET1__BMASK      0x08 ///< Timer 1 Interrupt Enable                          
#define IE_ET1__SHIFT      0x03 ///< Timer 1 Interrupt Enable                          
#define IE_ET1__DISABLED   0x00 ///< Disable all Timer 1 interrupt.                    
#define IE_ET1__ENABLED    0x08 ///< Enable interrupt requests generated by the TF1    
                                ///< flag.                                             
                                                                                       
#define IE_ES0__BMASK      0x10 ///< UART0 Interrupt Enable                            
#define IE_ES0__SHIFT      0x04 ///< UART0 Interrupt Enable                            
#define IE_ES0__DISABLED   0x00 ///< Disable UART0 interrupt.                          
#define IE_ES0__ENABLED    0x10 ///< Enable UART0 interrupt.                           
                                                                                       
#define IE_ET2__BMASK      0x20 ///< Timer 2 Interrupt Enable                          
#define IE_ET2__SHIFT      0x05 ///< Timer 2 Interrupt Enable                          
#define IE_ET2__DISABLED   0x00 ///< Disable Timer 2 interrupt.                        
#define IE_ET2__ENABLED    0x20 ///< Enable interrupt requests generated by the TF2L or
                                ///< TF2H flags.                                       
                                                                                       
#define IE_ESPI0__BMASK    0x40 ///< SPI0 Interrupt Enable                             
#define IE_ESPI0__SHIFT    0x06 ///< SPI0 Interrupt Enable                             
#define IE_ESPI0__DISABLED 0x00 ///< Disable all SPI0 interrupts.                      
#define IE_ESPI0__ENABLED  0x40 ///< Enable interrupt requests generated by SPI0.      
                                                                                       
#define IE_EA__BMASK       0x80 ///< All Interrupts Enable                             
#define IE_EA__SHIFT       0x07 ///< All Interrupts Enable                             
#define IE_EA__DISABLED    0x00 ///< Disable all interrupt sources.                    
#define IE_EA__ENABLED     0x80 ///< Enable each interrupt according to its individual 
                                ///< mask setting.                                     
                                                                                       
//------------------------------------------------------------------------------
// IP Enums (Interrupt Priority @ 0xB8)
//------------------------------------------------------------------------------
#define IP_PX0__BMASK   0x01 ///< External Interrupt 0 Priority Control                        
#define IP_PX0__SHIFT   0x00 ///< External Interrupt 0 Priority Control                        
#define IP_PX0__LOW     0x00 ///< External Interrupt 0 set to low priority level.              
#define IP_PX0__HIGH    0x01 ///< External Interrupt 0 set to high priority level.             
                                                                                               
#define IP_PT0__BMASK   0x02 ///< Timer 0 Interrupt Priority Control                           
#define IP_PT0__SHIFT   0x01 ///< Timer 0 Interrupt Priority Control                           
#define IP_PT0__LOW     0x00 ///< Timer 0 interrupt set to low priority level.                 
#define IP_PT0__HIGH    0x02 ///< Timer 0 interrupt set to high priority level.                
                                                                                               
#define IP_PX1__BMASK   0x04 ///< External Interrupt 1 Priority Control                        
#define IP_PX1__SHIFT   0x02 ///< External Interrupt 1 Priority Control                        
#define IP_PX1__LOW     0x00 ///< External Interrupt 1 set to low priority level.              
#define IP_PX1__HIGH    0x04 ///< External Interrupt 1 set to high priority level.             
                                                                                               
#define IP_PT1__BMASK   0x08 ///< Timer 1 Interrupt Priority Control                           
#define IP_PT1__SHIFT   0x03 ///< Timer 1 Interrupt Priority Control                           
#define IP_PT1__LOW     0x00 ///< Timer 1 interrupt set to low priority level.                 
#define IP_PT1__HIGH    0x08 ///< Timer 1 interrupt set to high priority level.                
                                                                                               
#define IP_PS0__BMASK   0x10 ///< UART0 Interrupt Priority Control                             
#define IP_PS0__SHIFT   0x04 ///< UART0 Interrupt Priority Control                             
#define IP_PS0__LOW     0x00 ///< UART0 interrupt set to low priority level.                   
#define IP_PS0__HIGH    0x10 ///< UART0 interrupt set to high priority level.                  
                                                                                               
#define IP_PT2__BMASK   0x20 ///< Timer 2 Interrupt Priority Control                           
#define IP_PT2__SHIFT   0x05 ///< Timer 2 Interrupt Priority Control                           
#define IP_PT2__LOW     0x00 ///< Timer 2 interrupt set to low priority level.                 
#define IP_PT2__HIGH    0x20 ///< Timer 2 interrupt set to high priority level.                
                                                                                               
#define IP_PSPI0__BMASK 0x40 ///< Serial Peripheral Interface (SPI0) Interrupt Priority Control
#define IP_PSPI0__SHIFT 0x06 ///< Serial Peripheral Interface (SPI0) Interrupt Priority Control
#define IP_PSPI0__LOW   0x00 ///< SPI0 interrupt set to low priority level.                    
#define IP_PSPI0__HIGH  0x40 ///< SPI0 interrupt set to high priority level.                   
                                                                                               
//------------------------------------------------------------------------------
// OSCLCN Enums (Low Frequency Oscillator Control @ 0xB1)
//------------------------------------------------------------------------------
#define OSCLCN_OSCLD__FMASK       0x03 ///< Internal L-F Oscillator Divider Select           
#define OSCLCN_OSCLD__SHIFT       0x00 ///< Internal L-F Oscillator Divider Select           
#define OSCLCN_OSCLD__DIVIDE_BY_8 0x00 ///< Divide by 8 selected.                            
#define OSCLCN_OSCLD__DIVIDE_BY_4 0x01 ///< Divide by 4 selected.                            
#define OSCLCN_OSCLD__DIVIDE_BY_2 0x02 ///< Divide by 2 selected.                            
#define OSCLCN_OSCLD__DIVIDE_BY_1 0x03 ///< Divide by 1 selected.                            
                                                                                             
#define OSCLCN_OSCLF__FMASK       0x3C ///< Internal L-F Oscillator Frequency Control        
#define OSCLCN_OSCLF__SHIFT       0x02 ///< Internal L-F Oscillator Frequency Control        
                                                                                             
#define OSCLCN_OSCLRDY__BMASK     0x40 ///< Internal L-F Oscillator Ready                    
#define OSCLCN_OSCLRDY__SHIFT     0x06 ///< Internal L-F Oscillator Ready                    
#define OSCLCN_OSCLRDY__NOT_SET   0x00 ///< Internal L-F Oscillator frequency not stabilized.
#define OSCLCN_OSCLRDY__SET       0x40 ///< Internal L-F Oscillator frequency stabilized.    
                                                                                             
#define OSCLCN_OSCLEN__BMASK      0x80 ///< Internal L-F Oscillator Enable                   
#define OSCLCN_OSCLEN__SHIFT      0x07 ///< Internal L-F Oscillator Enable                   
#define OSCLCN_OSCLEN__DISABLED   0x00 ///< Internal L-F Oscillator Disabled.                
#define OSCLCN_OSCLEN__ENABLED    0x80 ///< Internal L-F Oscillator Enabled.                 
                                                                                             
//------------------------------------------------------------------------------
// PRTDRV Enums (Port Drive Strength @ 0xF6)
//------------------------------------------------------------------------------
#define PRTDRV_P0DRV__BMASK      0x01 ///< Port 0 Drive Strength                  
#define PRTDRV_P0DRV__SHIFT      0x00 ///< Port 0 Drive Strength                  
#define PRTDRV_P0DRV__LOW_DRIVE  0x00 ///< All pins on P0 use low drive strength. 
#define PRTDRV_P0DRV__HIGH_DRIVE 0x01 ///< All pins on P0 use high drive strength.
                                                                                  
#define PRTDRV_P1DRV__BMASK      0x02 ///< Port 1 Drive Strength                  
#define PRTDRV_P1DRV__SHIFT      0x01 ///< Port 1 Drive Strength                  
#define PRTDRV_P1DRV__LOW_DRIVE  0x00 ///< All pins on P1 use low drive strength. 
#define PRTDRV_P1DRV__HIGH_DRIVE 0x02 ///< All pins on P1 use high drive strength.
                                                                                  
#define PRTDRV_P2DRV__BMASK      0x04 ///< Port 2 Drive Strength                  
#define PRTDRV_P2DRV__SHIFT      0x02 ///< Port 2 Drive Strength                  
#define PRTDRV_P2DRV__LOW_DRIVE  0x00 ///< All pins on P2 use low drive strength. 
#define PRTDRV_P2DRV__HIGH_DRIVE 0x04 ///< All pins on P2 use high drive strength.
                                                                                  
//------------------------------------------------------------------------------
// XBR0 Enums (Port I/O Crossbar 0 @ 0xE1)
//------------------------------------------------------------------------------
#define XBR0_URT0E__BMASK     0x01 ///< UART I/O Output Enable                        
#define XBR0_URT0E__SHIFT     0x00 ///< UART I/O Output Enable                        
#define XBR0_URT0E__DISABLED  0x00 ///< UART I/O unavailable at Port pin.             
#define XBR0_URT0E__ENABLED   0x01 ///< UART TX, RX routed to Port pins P0.4 and P0.5.
                                                                                      
#define XBR0_SPI0E__BMASK     0x02 ///< SPI I/O Enable                                
#define XBR0_SPI0E__SHIFT     0x01 ///< SPI I/O Enable                                
#define XBR0_SPI0E__DISABLED  0x00 ///< SPI I/O unavailable at Port pins.             
#define XBR0_SPI0E__ENABLED   0x02 ///< SPI I/O routed to Port pins. The SPI can be   
                                   ///< assigned either 3 or 4 GPIO pins.             
                                                                                      
#define XBR0_SMB0E__BMASK     0x04 ///< SMBus0 I/O Enable                             
#define XBR0_SMB0E__SHIFT     0x02 ///< SMBus0 I/O Enable                             
#define XBR0_SMB0E__DISABLED  0x00 ///< SMBus0 I/O unavailable at Port pins.          
#define XBR0_SMB0E__ENABLED   0x04 ///< SMBus0 I/O routed to Port pins.               
                                                                                      
#define XBR0_CP0E__BMASK      0x08 ///< Comparator0 Output Enable                     
#define XBR0_CP0E__SHIFT      0x03 ///< Comparator0 Output Enable                     
#define XBR0_CP0E__DISABLED   0x00 ///< CP0 unavailable at Port pin.                  
#define XBR0_CP0E__ENABLED    0x08 ///< CP0 routed to Port pin.                       
                                                                                      
#define XBR0_CP0AE__BMASK     0x10 ///< Comparator0 Asynchronous Output Enable        
#define XBR0_CP0AE__SHIFT     0x04 ///< Comparator0 Asynchronous Output Enable        
#define XBR0_CP0AE__DISABLED  0x00 ///< Asynchronous CP0 unavailable at Port pin.     
#define XBR0_CP0AE__ENABLED   0x10 ///< Asynchronous CP0 routed to Port pin.          
                                                                                      
#define XBR0_CP1E__BMASK      0x20 ///< Comparator1 Output Enable                     
#define XBR0_CP1E__SHIFT      0x05 ///< Comparator1 Output Enable                     
#define XBR0_CP1E__DISABLED   0x00 ///< CP1 unavailable at Port pin.                  
#define XBR0_CP1E__ENABLED    0x20 ///< CP1 routed to Port pin.                       
                                                                                      
#define XBR0_CP1AE__BMASK     0x40 ///< Comparator1 Asynchronous Output Enable        
#define XBR0_CP1AE__SHIFT     0x06 ///< Comparator1 Asynchronous Output Enable        
#define XBR0_CP1AE__DISABLED  0x00 ///< Asynchronous CP1 unavailable at Port pin.     
#define XBR0_CP1AE__ENABLED   0x40 ///< Asynchronous CP1 routed to Port pin.          
                                                                                      
#define XBR0_SYSCKE__BMASK    0x80 ///< SYSCLK Output Enable                          
#define XBR0_SYSCKE__SHIFT    0x07 ///< SYSCLK Output Enable                          
#define XBR0_SYSCKE__DISABLED 0x00 ///< SYSCLK unavailable at Port pin.               
#define XBR0_SYSCKE__ENABLED  0x80 ///< SYSCLK output routed to Port pin.             
                                                                                      
//------------------------------------------------------------------------------
// XBR1 Enums (Port I/O Crossbar 1 @ 0xE2)
//------------------------------------------------------------------------------
#define XBR1_PCA0ME__FMASK          0x03 ///< PCA Module I/O Enable                
#define XBR1_PCA0ME__SHIFT          0x00 ///< PCA Module I/O Enable                
#define XBR1_PCA0ME__DISABLED       0x00 ///< All PCA I/O unavailable at Port pins.
#define XBR1_PCA0ME__CEX0           0x01 ///< CEX0 routed to Port pin.             
#define XBR1_PCA0ME__CEX0_CEX1      0x02 ///< CEX0, CEX1 routed to Port pins.      
#define XBR1_PCA0ME__CEX0_CEX1_CEX2 0x03 ///< CEX0, CEX1, CEX2 routed to Port pins.
                                                                                   
#define XBR1_ECIE__BMASK            0x04 ///< PCA0 External Counter Input Enable   
#define XBR1_ECIE__SHIFT            0x02 ///< PCA0 External Counter Input Enable   
#define XBR1_ECIE__DISABLED         0x00 ///< ECI unavailable at Port pin.         
#define XBR1_ECIE__ENABLED          0x04 ///< ECI routed to Port pin.              
                                                                                   
#define XBR1_T0E__BMASK             0x08 ///< T0 Enable                            
#define XBR1_T0E__SHIFT             0x03 ///< T0 Enable                            
#define XBR1_T0E__DISABLED          0x00 ///< T0 unavailable at Port pin.          
#define XBR1_T0E__ENABLED           0x08 ///< T0 routed to Port pin.               
                                                                                   
#define XBR1_T1E__BMASK             0x10 ///< T1 Enable                            
#define XBR1_T1E__SHIFT             0x04 ///< T1 Enable                            
#define XBR1_T1E__DISABLED          0x00 ///< T1 unavailable at Port pin.          
#define XBR1_T1E__ENABLED           0x10 ///< T1 routed to Port pin.               
                                                                                   
#define XBR1_T2E__BMASK             0x20 ///< T2 Enable                            
#define XBR1_T2E__SHIFT             0x05 ///< T2 Enable                            
#define XBR1_T2E__DISABLED          0x00 ///< T2 unavailable at Port pin.          
#define XBR1_T2E__ENABLED           0x20 ///< T2 routed to Port pin.               
                                                                                   
//------------------------------------------------------------------------------
// XBR2 Enums (Port I/O Crossbar 2 @ 0xE3)
//------------------------------------------------------------------------------
#define XBR2_XBARE__BMASK               0x40 ///< Crossbar Enable                                 
#define XBR2_XBARE__SHIFT               0x06 ///< Crossbar Enable                                 
#define XBR2_XBARE__DISABLED            0x00 ///< Crossbar disabled.                              
#define XBR2_XBARE__ENABLED             0x40 ///< Crossbar enabled.                               
                                                                                                  
#define XBR2_WEAKPUD__BMASK             0x80 ///< Port I/O Weak Pullup Disable                    
#define XBR2_WEAKPUD__SHIFT             0x07 ///< Port I/O Weak Pullup Disable                    
#define XBR2_WEAKPUD__PULL_UPS_ENABLED  0x00 ///< Weak Pullups enabled (except for Ports whose I/O
                                             ///< are configured for analog mode).                
#define XBR2_WEAKPUD__PULL_UPS_DISABLED 0x80 ///< Weak Pullups disabled.                          
                                                                                                  
//------------------------------------------------------------------------------
// PCA0CENT Enums (PCA Center Alignment Enable @ 0x9E)
//------------------------------------------------------------------------------
#define PCA0CENT_CEX0CEN__BMASK  0x01 ///< CEX0 Center Alignment Enable
#define PCA0CENT_CEX0CEN__SHIFT  0x00 ///< CEX0 Center Alignment Enable
#define PCA0CENT_CEX0CEN__EDGE   0x00 ///< Edge-aligned.               
#define PCA0CENT_CEX0CEN__CENTER 0x01 ///< Center-aligned.             
                                                                       
#define PCA0CENT_CEX1CEN__BMASK  0x02 ///< CEX1 Center Alignment Enable
#define PCA0CENT_CEX1CEN__SHIFT  0x01 ///< CEX1 Center Alignment Enable
#define PCA0CENT_CEX1CEN__EDGE   0x00 ///< Edge-aligned.               
#define PCA0CENT_CEX1CEN__CENTER 0x02 ///< Center-aligned.             
                                                                       
#define PCA0CENT_CEX2CEN__BMASK  0x04 ///< CEX2 Center Alignment Enable
#define PCA0CENT_CEX2CEN__SHIFT  0x02 ///< CEX2 Center Alignment Enable
#define PCA0CENT_CEX2CEN__EDGE   0x00 ///< Edge-aligned.               
#define PCA0CENT_CEX2CEN__CENTER 0x04 ///< Center-aligned.             
                                                                       
//------------------------------------------------------------------------------
// PCA0CLR Enums (PCA Comparator Clear Control @ 0x9C)
//------------------------------------------------------------------------------
#define PCA0CLR_CPCE0__BMASK    0x01 ///< Comparator Clear Enable for CEX0              
#define PCA0CLR_CPCE0__SHIFT    0x00 ///< Comparator Clear Enable for CEX0              
#define PCA0CLR_CPCE0__DISABLED 0x00 ///< Disable the comparator clear function on PCA  
                                     ///< channel 0.                                    
#define PCA0CLR_CPCE0__ENABLED  0x01 ///< Enable the comparator clear function on PCA   
                                     ///< channel 0.                                    
                                                                                        
#define PCA0CLR_CPCE1__BMASK    0x02 ///< Comparator Clear Enable for CEX1              
#define PCA0CLR_CPCE1__SHIFT    0x01 ///< Comparator Clear Enable for CEX1              
#define PCA0CLR_CPCE1__DISABLED 0x00 ///< Disable the comparator clear function on PCA  
                                     ///< channel 1.                                    
#define PCA0CLR_CPCE1__ENABLED  0x02 ///< Enable the comparator clear function on PCA   
                                     ///< channel 1.                                    
                                                                                        
#define PCA0CLR_CPCE2__BMASK    0x04 ///< Comparator Clear Enable for CEX2              
#define PCA0CLR_CPCE2__SHIFT    0x02 ///< Comparator Clear Enable for CEX2              
#define PCA0CLR_CPCE2__DISABLED 0x00 ///< Disable the comparator clear function on PCA  
                                     ///< channel 2.                                    
#define PCA0CLR_CPCE2__ENABLED  0x04 ///< Enable the comparator clear function on PCA   
                                     ///< channel 2.                                    
                                                                                        
#define PCA0CLR_CPCPOL__BMASK   0x80 ///< Comparator Clear Polarity                     
#define PCA0CLR_CPCPOL__SHIFT   0x07 ///< Comparator Clear Polarity                     
#define PCA0CLR_CPCPOL__LOW     0x00 ///< PCA channel(s) will be cleared when comparator
                                     ///< result goes logic low.                        
#define PCA0CLR_CPCPOL__HIGH    0x80 ///< PCA channel(s) will be cleared when comparator
                                     ///< result goes logic high.                       
                                                                                        
//------------------------------------------------------------------------------
// PCA0CN Enums (PCA Control @ 0xD8)
//------------------------------------------------------------------------------
#define PCA0CN_CCF0__BMASK   0x01 ///< PCA Module 0 Capture/Compare Flag             
#define PCA0CN_CCF0__SHIFT   0x00 ///< PCA Module 0 Capture/Compare Flag             
#define PCA0CN_CCF0__NOT_SET 0x00 ///< A match or capture did not occur on channel 0.
#define PCA0CN_CCF0__SET     0x01 ///< A match or capture occurred on channel 0.     
                                                                                     
#define PCA0CN_CCF1__BMASK   0x02 ///< PCA Module 1 Capture/Compare Flag             
#define PCA0CN_CCF1__SHIFT   0x01 ///< PCA Module 1 Capture/Compare Flag             
#define PCA0CN_CCF1__NOT_SET 0x00 ///< A match or capture did not occur on channel 1.
#define PCA0CN_CCF1__SET     0x02 ///< A match or capture occurred on channel 1.     
                                                                                     
#define PCA0CN_CCF2__BMASK   0x04 ///< PCA Module 2 Capture/Compare Flag             
#define PCA0CN_CCF2__SHIFT   0x02 ///< PCA Module 2 Capture/Compare Flag             
#define PCA0CN_CCF2__NOT_SET 0x00 ///< A match or capture did not occur on channel 2.
#define PCA0CN_CCF2__SET     0x04 ///< A match or capture occurred on channel 2.     
                                                                                     
#define PCA0CN_CR__BMASK     0x40 ///< PCA Counter/Timer Run Control                 
#define PCA0CN_CR__SHIFT     0x06 ///< PCA Counter/Timer Run Control                 
#define PCA0CN_CR__STOP      0x00 ///< Stop the PCA Counter/Timer.                   
#define PCA0CN_CR__RUN       0x40 ///< Start the PCA Counter/Timer running.          
                                                                                     
#define PCA0CN_CF__BMASK     0x80 ///< PCA Counter/Timer Overflow Flag               
#define PCA0CN_CF__SHIFT     0x07 ///< PCA Counter/Timer Overflow Flag               
#define PCA0CN_CF__NOT_SET   0x00 ///< The PCA counter/timer did not overflow.       
#define PCA0CN_CF__SET       0x80 ///< The PCA counter/timer overflowed.             
                                                                                     
//------------------------------------------------------------------------------
// PCA0CPH0 Enums (PCA Channel 0 Capture Module High Byte @ 0xFC)
//------------------------------------------------------------------------------
#define PCA0CPH0_PCA0CPH0__FMASK 0xFF ///< PCA Channel 0 Capture Module High Byte
#define PCA0CPH0_PCA0CPH0__SHIFT 0x00 ///< PCA Channel 0 Capture Module High Byte
                                                                                 
//------------------------------------------------------------------------------
// PCA0CPH1 Enums (PCA Channel 1 Capture Module High Byte @ 0xEA)
//------------------------------------------------------------------------------
#define PCA0CPH1_PCA0CPH1__FMASK 0xFF ///< PCA Channel 1 Capture Module High Byte
#define PCA0CPH1_PCA0CPH1__SHIFT 0x00 ///< PCA Channel 1 Capture Module High Byte
                                                                                 
//------------------------------------------------------------------------------
// PCA0CPH2 Enums (PCA Channel 2 Capture Module High Byte @ 0xEC)
//------------------------------------------------------------------------------
#define PCA0CPH2_PCA0CPH2__FMASK 0xFF ///< PCA Channel 2 Capture Module High Byte
#define PCA0CPH2_PCA0CPH2__SHIFT 0x00 ///< PCA Channel 2 Capture Module High Byte
                                                                                 
//------------------------------------------------------------------------------
// PCA0CPL0 Enums (PCA Channel 0 Capture Module Low Byte @ 0xFB)
//------------------------------------------------------------------------------
#define PCA0CPL0_PCA0CPL0__FMASK 0xFF ///< PCA Channel 0 Capture Module Low Byte
#define PCA0CPL0_PCA0CPL0__SHIFT 0x00 ///< PCA Channel 0 Capture Module Low Byte
                                                                                
//------------------------------------------------------------------------------
// PCA0CPL1 Enums (PCA Channel 1 Capture Module Low Byte @ 0xE9)
//------------------------------------------------------------------------------
#define PCA0CPL1_PCA0CPL1__FMASK 0xFF ///< PCA Channel 1 Capture Module Low Byte
#define PCA0CPL1_PCA0CPL1__SHIFT 0x00 ///< PCA Channel 1 Capture Module Low Byte
                                                                                
//------------------------------------------------------------------------------
// PCA0CPL2 Enums (PCA Channel 2 Capture Module Low Byte @ 0xEB)
//------------------------------------------------------------------------------
#define PCA0CPL2_PCA0CPL2__FMASK 0xFF ///< PCA Channel 2 Capture Module Low Byte
#define PCA0CPL2_PCA0CPL2__SHIFT 0x00 ///< PCA Channel 2 Capture Module Low Byte
                                                                                
//------------------------------------------------------------------------------
// PCA0CPM0 Enums (PCA Channel 0 Capture/Compare Mode @ 0xDA)
//------------------------------------------------------------------------------
#define PCA0CPM0_ECCF__BMASK    0x01 ///< Channel 0 Capture/Compare Flag Interrupt Enable
#define PCA0CPM0_ECCF__SHIFT    0x00 ///< Channel 0 Capture/Compare Flag Interrupt Enable
#define PCA0CPM0_ECCF__DISABLED 0x00 ///< Disable CCF0 interrupts.                       
#define PCA0CPM0_ECCF__ENABLED  0x01 ///< Enable a Capture/Compare Flag interrupt request
                                     ///< when CCF0 is set.                              
                                                                                         
#define PCA0CPM0_PWM__BMASK     0x02 ///< Channel 0 Pulse Width Modulation Mode Enable   
#define PCA0CPM0_PWM__SHIFT     0x01 ///< Channel 0 Pulse Width Modulation Mode Enable   
#define PCA0CPM0_PWM__DISABLED  0x00 ///< Disable PWM function.                          
#define PCA0CPM0_PWM__ENABLED   0x02 ///< Enable PWM function.                           
                                                                                         
#define PCA0CPM0_TOG__BMASK     0x04 ///< Channel 0 Toggle Function Enable               
#define PCA0CPM0_TOG__SHIFT     0x02 ///< Channel 0 Toggle Function Enable               
#define PCA0CPM0_TOG__DISABLED  0x00 ///< Disable toggle function.                       
#define PCA0CPM0_TOG__ENABLED   0x04 ///< Enable toggle function.                        
                                                                                         
#define PCA0CPM0_MAT__BMASK     0x08 ///< Channel 0 Match Function Enable                
#define PCA0CPM0_MAT__SHIFT     0x03 ///< Channel 0 Match Function Enable                
#define PCA0CPM0_MAT__DISABLED  0x00 ///< Disable match function.                        
#define PCA0CPM0_MAT__ENABLED   0x08 ///< Enable match function.                         
                                                                                         
#define PCA0CPM0_CAPN__BMASK    0x10 ///< Channel 0 Capture Negative Function Enable     
#define PCA0CPM0_CAPN__SHIFT    0x04 ///< Channel 0 Capture Negative Function Enable     
#define PCA0CPM0_CAPN__DISABLED 0x00 ///< Disable negative edge capture.                 
#define PCA0CPM0_CAPN__ENABLED  0x10 ///< Enable negative edge capture.                  
                                                                                         
#define PCA0CPM0_CAPP__BMASK    0x20 ///< Channel 0 Capture Positive Function Enable     
#define PCA0CPM0_CAPP__SHIFT    0x05 ///< Channel 0 Capture Positive Function Enable     
#define PCA0CPM0_CAPP__DISABLED 0x00 ///< Disable positive edge capture.                 
#define PCA0CPM0_CAPP__ENABLED  0x20 ///< Enable positive edge capture.                  
                                                                                         
#define PCA0CPM0_ECOM__BMASK    0x40 ///< Channel 0 Comparator Function Enable           
#define PCA0CPM0_ECOM__SHIFT    0x06 ///< Channel 0 Comparator Function Enable           
#define PCA0CPM0_ECOM__DISABLED 0x00 ///< Disable comparator function.                   
#define PCA0CPM0_ECOM__ENABLED  0x40 ///< Enable comparator function.                    
                                                                                         
#define PCA0CPM0_PWM16__BMASK   0x80 ///< Channel 0 16-bit Pulse Width Modulation Enable 
#define PCA0CPM0_PWM16__SHIFT   0x07 ///< Channel 0 16-bit Pulse Width Modulation Enable 
#define PCA0CPM0_PWM16__8_BIT   0x00 ///< 8 to 11-bit PWM selected.                      
#define PCA0CPM0_PWM16__16_BIT  0x80 ///< 16-bit PWM selected.                           
                                                                                         
//------------------------------------------------------------------------------
// PCA0CPM1 Enums (PCA Channel 1 Capture/Compare Mode @ 0xDB)
//------------------------------------------------------------------------------
#define PCA0CPM1_ECCF__BMASK    0x01 ///< Channel 1 Capture/Compare Flag Interrupt Enable
#define PCA0CPM1_ECCF__SHIFT    0x00 ///< Channel 1 Capture/Compare Flag Interrupt Enable
#define PCA0CPM1_ECCF__DISABLED 0x00 ///< Disable CCF1 interrupts.                       
#define PCA0CPM1_ECCF__ENABLED  0x01 ///< Enable a Capture/Compare Flag interrupt request
                                     ///< when CCF1 is set.                              
                                                                                         
#define PCA0CPM1_PWM__BMASK     0x02 ///< Channel 1 Pulse Width Modulation Mode Enable   
#define PCA0CPM1_PWM__SHIFT     0x01 ///< Channel 1 Pulse Width Modulation Mode Enable   
#define PCA0CPM1_PWM__DISABLED  0x00 ///< Disable PWM function.                          
#define PCA0CPM1_PWM__ENABLED   0x02 ///< Enable PWM function.                           
                                                                                         
#define PCA0CPM1_TOG__BMASK     0x04 ///< Channel 1 Toggle Function Enable               
#define PCA0CPM1_TOG__SHIFT     0x02 ///< Channel 1 Toggle Function Enable               
#define PCA0CPM1_TOG__DISABLED  0x00 ///< Disable toggle function.                       
#define PCA0CPM1_TOG__ENABLED   0x04 ///< Enable toggle function.                        
                                                                                         
#define PCA0CPM1_MAT__BMASK     0x08 ///< Channel 1 Match Function Enable                
#define PCA0CPM1_MAT__SHIFT     0x03 ///< Channel 1 Match Function Enable                
#define PCA0CPM1_MAT__DISABLED  0x00 ///< Disable match function.                        
#define PCA0CPM1_MAT__ENABLED   0x08 ///< Enable match function.                         
                                                                                         
#define PCA0CPM1_CAPN__BMASK    0x10 ///< Channel 1 Capture Negative Function Enable     
#define PCA0CPM1_CAPN__SHIFT    0x04 ///< Channel 1 Capture Negative Function Enable     
#define PCA0CPM1_CAPN__DISABLED 0x00 ///< Disable negative edge capture.                 
#define PCA0CPM1_CAPN__ENABLED  0x10 ///< Enable negative edge capture.                  
                                                                                         
#define PCA0CPM1_CAPP__BMASK    0x20 ///< Channel 1 Capture Positive Function Enable     
#define PCA0CPM1_CAPP__SHIFT    0x05 ///< Channel 1 Capture Positive Function Enable     
#define PCA0CPM1_CAPP__DISABLED 0x00 ///< Disable positive edge capture.                 
#define PCA0CPM1_CAPP__ENABLED  0x20 ///< Enable positive edge capture.                  
                                                                                         
#define PCA0CPM1_ECOM__BMASK    0x40 ///< Channel 1 Comparator Function Enable           
#define PCA0CPM1_ECOM__SHIFT    0x06 ///< Channel 1 Comparator Function Enable           
#define PCA0CPM1_ECOM__DISABLED 0x00 ///< Disable comparator function.                   
#define PCA0CPM1_ECOM__ENABLED  0x40 ///< Enable comparator function.                    
                                                                                         
#define PCA0CPM1_PWM16__BMASK   0x80 ///< Channel 1 16-bit Pulse Width Modulation Enable 
#define PCA0CPM1_PWM16__SHIFT   0x07 ///< Channel 1 16-bit Pulse Width Modulation Enable 
#define PCA0CPM1_PWM16__8_BIT   0x00 ///< 8 to 11-bit PWM selected.                      
#define PCA0CPM1_PWM16__16_BIT  0x80 ///< 16-bit PWM selected.                           
                                                                                         
//------------------------------------------------------------------------------
// PCA0CPM2 Enums (PCA Channel 2 Capture/Compare Mode @ 0xDC)
//------------------------------------------------------------------------------
#define PCA0CPM2_ECCF__BMASK    0x01 ///< Channel 2 Capture/Compare Flag Interrupt Enable
#define PCA0CPM2_ECCF__SHIFT    0x00 ///< Channel 2 Capture/Compare Flag Interrupt Enable
#define PCA0CPM2_ECCF__DISABLED 0x00 ///< Disable CCF2 interrupts.                       
#define PCA0CPM2_ECCF__ENABLED  0x01 ///< Enable a Capture/Compare Flag interrupt request
                                     ///< when CCF2 is set.                              
                                                                                         
#define PCA0CPM2_PWM__BMASK     0x02 ///< Channel 2 Pulse Width Modulation Mode Enable   
#define PCA0CPM2_PWM__SHIFT     0x01 ///< Channel 2 Pulse Width Modulation Mode Enable   
#define PCA0CPM2_PWM__DISABLED  0x00 ///< Disable PWM function.                          
#define PCA0CPM2_PWM__ENABLED   0x02 ///< Enable PWM function.                           
                                                                                         
#define PCA0CPM2_TOG__BMASK     0x04 ///< Channel 2 Toggle Function Enable               
#define PCA0CPM2_TOG__SHIFT     0x02 ///< Channel 2 Toggle Function Enable               
#define PCA0CPM2_TOG__DISABLED  0x00 ///< Disable toggle function.                       
#define PCA0CPM2_TOG__ENABLED   0x04 ///< Enable toggle function.                        
                                                                                         
#define PCA0CPM2_MAT__BMASK     0x08 ///< Channel 2 Match Function Enable                
#define PCA0CPM2_MAT__SHIFT     0x03 ///< Channel 2 Match Function Enable                
#define PCA0CPM2_MAT__DISABLED  0x00 ///< Disable match function.                        
#define PCA0CPM2_MAT__ENABLED   0x08 ///< Enable match function.                         
                                                                                         
#define PCA0CPM2_CAPN__BMASK    0x10 ///< Channel 2 Capture Negative Function Enable     
#define PCA0CPM2_CAPN__SHIFT    0x04 ///< Channel 2 Capture Negative Function Enable     
#define PCA0CPM2_CAPN__DISABLED 0x00 ///< Disable negative edge capture.                 
#define PCA0CPM2_CAPN__ENABLED  0x10 ///< Enable negative edge capture.                  
                                                                                         
#define PCA0CPM2_CAPP__BMASK    0x20 ///< Channel 2 Capture Positive Function Enable     
#define PCA0CPM2_CAPP__SHIFT    0x05 ///< Channel 2 Capture Positive Function Enable     
#define PCA0CPM2_CAPP__DISABLED 0x00 ///< Disable positive edge capture.                 
#define PCA0CPM2_CAPP__ENABLED  0x20 ///< Enable positive edge capture.                  
                                                                                         
#define PCA0CPM2_ECOM__BMASK    0x40 ///< Channel 2 Comparator Function Enable           
#define PCA0CPM2_ECOM__SHIFT    0x06 ///< Channel 2 Comparator Function Enable           
#define PCA0CPM2_ECOM__DISABLED 0x00 ///< Disable comparator function.                   
#define PCA0CPM2_ECOM__ENABLED  0x40 ///< Enable comparator function.                    
                                                                                         
#define PCA0CPM2_PWM16__BMASK   0x80 ///< Channel 2 16-bit Pulse Width Modulation Enable 
#define PCA0CPM2_PWM16__SHIFT   0x07 ///< Channel 2 16-bit Pulse Width Modulation Enable 
#define PCA0CPM2_PWM16__8_BIT   0x00 ///< 8 to 11-bit PWM selected.                      
#define PCA0CPM2_PWM16__16_BIT  0x80 ///< 16-bit PWM selected.                           
                                                                                         
//------------------------------------------------------------------------------
// PCA0H Enums (PCA Counter/Timer High Byte @ 0xFA)
//------------------------------------------------------------------------------
#define PCA0H_PCA0H__FMASK 0xFF ///< PCA Counter/Timer High Byte
#define PCA0H_PCA0H__SHIFT 0x00 ///< PCA Counter/Timer High Byte
                                                                
//------------------------------------------------------------------------------
// PCA0L Enums (PCA Counter/Timer Low Byte @ 0xF9)
//------------------------------------------------------------------------------
#define PCA0L_PCA0L__FMASK 0xFF ///< PCA Counter/Timer Low Byte
#define PCA0L_PCA0L__SHIFT 0x00 ///< PCA Counter/Timer Low Byte
                                                               
//------------------------------------------------------------------------------
// PCA0MD Enums (PCA Mode @ 0xD9)
//------------------------------------------------------------------------------
#define PCA0MD_ECF__BMASK            0x01 ///< PCA Counter/Timer Overflow Interrupt Enable       
#define PCA0MD_ECF__SHIFT            0x00 ///< PCA Counter/Timer Overflow Interrupt Enable       
#define PCA0MD_ECF__OVF_INT_DISABLED 0x00 ///< Disable the CF interrupt.                         
#define PCA0MD_ECF__OVF_INT_ENABLED  0x01 ///< Enable a PCA Counter/Timer Overflow interrupt     
                                          ///< request when CF (PCA0CN.7) is set.                
                                                                                                 
#define PCA0MD_CPS__FMASK            0x0E ///< PCA Counter/Timer Pulse Select                    
#define PCA0MD_CPS__SHIFT            0x01 ///< PCA Counter/Timer Pulse Select                    
#define PCA0MD_CPS__SYSCLK_DIV_12    0x00 ///< System clock divided by 12.                       
#define PCA0MD_CPS__SYSCLK_DIV_4     0x02 ///< System clock divided by 4.                        
#define PCA0MD_CPS__T0_OVERFLOW      0x04 ///< Timer 0 overflow.                                 
#define PCA0MD_CPS__ECI              0x06 ///< High-to-low transitions on ECI (max rate = system 
                                          ///< clock divided by 4).                              
#define PCA0MD_CPS__SYSCLK           0x08 ///< System clock.                                     
#define PCA0MD_CPS__EXTOSC_DIV_8     0x0A ///< External clock divided by 8 (synchronized with the
                                          ///< system clock).                                    
#define PCA0MD_CPS__LFOSC_DIV_8      0x0C ///< Low frequency oscillator divided by 8.            
                                                                                                 
#define PCA0MD_CIDL__BMASK           0x80 ///< PCA Counter/Timer Idle Control                    
#define PCA0MD_CIDL__SHIFT           0x07 ///< PCA Counter/Timer Idle Control                    
#define PCA0MD_CIDL__NORMAL          0x00 ///< PCA continues to function normally while the      
                                          ///< system controller is in Idle Mode.                
#define PCA0MD_CIDL__SUSPEND         0x80 ///< PCA operation is suspended while the system       
                                          ///< controller is in Idle Mode.                       
                                                                                                 
//------------------------------------------------------------------------------
// PCA0POL Enums (PCA Output Polarity @ 0x96)
//------------------------------------------------------------------------------
#define PCA0POL_CEX0POL__BMASK   0x01 ///< CEX0 Output Polarity 
#define PCA0POL_CEX0POL__SHIFT   0x00 ///< CEX0 Output Polarity 
#define PCA0POL_CEX0POL__DEFAULT 0x00 ///< Use default polarity.
#define PCA0POL_CEX0POL__INVERT  0x01 ///< Invert polarity.     
                                                                
#define PCA0POL_CEX1POL__BMASK   0x02 ///< CEX1 Output Polarity 
#define PCA0POL_CEX1POL__SHIFT   0x01 ///< CEX1 Output Polarity 
#define PCA0POL_CEX1POL__DEFAULT 0x00 ///< Use default polarity.
#define PCA0POL_CEX1POL__INVERT  0x02 ///< Invert polarity.     
                                                                
#define PCA0POL_CEX2POL__BMASK   0x04 ///< CEX2 Output Polarity 
#define PCA0POL_CEX2POL__SHIFT   0x02 ///< CEX2 Output Polarity 
#define PCA0POL_CEX2POL__DEFAULT 0x00 ///< Use default polarity.
#define PCA0POL_CEX2POL__INVERT  0x04 ///< Invert polarity.     
                                                                
//------------------------------------------------------------------------------
// PCA0PWM Enums (PCA PWM Configuration @ 0xF7)
//------------------------------------------------------------------------------
#define PCA0PWM_CLSEL__FMASK             0x07 ///< Cycle Length Select                              
#define PCA0PWM_CLSEL__SHIFT             0x00 ///< Cycle Length Select                              
#define PCA0PWM_CLSEL__8_BITS            0x00 ///< 8 bits.                                          
#define PCA0PWM_CLSEL__9_BITS            0x01 ///< 9 bits.                                          
#define PCA0PWM_CLSEL__10_BITS           0x02 ///< 10 bits.                                         
#define PCA0PWM_CLSEL__11_BITS           0x03 ///< 11 bits.                                         
                                                                                                    
#define PCA0PWM_COVF__BMASK              0x20 ///< Cycle Overflow Flag                              
#define PCA0PWM_COVF__SHIFT              0x05 ///< Cycle Overflow Flag                              
#define PCA0PWM_COVF__NO_OVERFLOW        0x00 ///< No overflow has occurred since the last time this
                                              ///< bit was cleared.                                 
#define PCA0PWM_COVF__OVERFLOW           0x20 ///< An overflow has occurred since the last time this
                                              ///< bit was cleared.                                 
                                                                                                    
#define PCA0PWM_ECOV__BMASK              0x40 ///< Cycle Overflow Interrupt Enable                  
#define PCA0PWM_ECOV__SHIFT              0x06 ///< Cycle Overflow Interrupt Enable                  
#define PCA0PWM_ECOV__COVF_MASK_DISABLED 0x00 ///< COVF will not generate PCA interrupts.           
#define PCA0PWM_ECOV__COVF_MASK_ENABLED  0x40 ///< A PCA interrupt will be generated when COVF is   
                                              ///< set.                                             
                                                                                                    
#define PCA0PWM_ARSEL__BMASK             0x80 ///< Auto-Reload Register Select                      
#define PCA0PWM_ARSEL__SHIFT             0x07 ///< Auto-Reload Register Select                      
#define PCA0PWM_ARSEL__CAPTURE_COMPARE   0x00 ///< Read/Write Capture/Compare Registers at PCA0CPHn 
                                              ///< and PCA0CPLn.                                    
#define PCA0PWM_ARSEL__AUTORELOAD        0x80 ///< Read/Write Auto-Reload Registers at PCA0CPHn and 
                                              ///< PCA0CPLn.                                        
                                                                                                    
//------------------------------------------------------------------------------
// PCON Enums (Power Control @ 0x87)
//------------------------------------------------------------------------------
#define PCON_IDLE__BMASK  0x01 ///< Idle Mode Select                                
#define PCON_IDLE__SHIFT  0x00 ///< Idle Mode Select                                
#define PCON_IDLE__NORMAL 0x00 ///< Idle mode not activated.                        
#define PCON_IDLE__IDLE   0x01 ///< CPU goes into Idle mode (shuts off clock to CPU,
                               ///< but clocks to enabled peripherals are still     
                               ///< active).                                        
                                                                                    
#define PCON_STOP__BMASK  0x02 ///< Stop Mode Select                                
#define PCON_STOP__SHIFT  0x01 ///< Stop Mode Select                                
#define PCON_STOP__NORMAL 0x00 ///< Stop mode not activated.                        
#define PCON_STOP__STOP   0x02 ///< CPU goes into Stop mode (internal oscillator    
                               ///< stopped).                                       
                                                                                    
#define PCON_GF0__BMASK   0x04 ///< General Purpose Flag 0                          
#define PCON_GF0__SHIFT   0x02 ///< General Purpose Flag 0                          
#define PCON_GF0__NOT_SET 0x00 ///< The GF0 flag is not set. Clear the GF0 flag.    
#define PCON_GF0__SET     0x04 ///< The GF0 flag is set. Set the GF0 flag.          
                                                                                    
#define PCON_GF1__BMASK   0x08 ///< General Purpose Flag 1                          
#define PCON_GF1__SHIFT   0x03 ///< General Purpose Flag 1                          
#define PCON_GF1__NOT_SET 0x00 ///< The GF1 flag is not set. Clear the GF1 flag.    
#define PCON_GF1__SET     0x08 ///< The GF1 flag is set. Set the GF1 flag.          
                                                                                    
#define PCON_GF2__BMASK   0x10 ///< General Purpose Flag 2                          
#define PCON_GF2__SHIFT   0x04 ///< General Purpose Flag 2                          
#define PCON_GF2__NOT_SET 0x00 ///< The GF2 flag is not set. Clear the GF2 flag.    
#define PCON_GF2__SET     0x10 ///< The GF2 flag is set. Set the GF2 flag.          
                                                                                    
#define PCON_GF3__BMASK   0x20 ///< General Purpose Flag 3                          
#define PCON_GF3__SHIFT   0x05 ///< General Purpose Flag 3                          
#define PCON_GF3__NOT_SET 0x00 ///< The GF3 flag is not set. Clear the GF3 flag.    
#define PCON_GF3__SET     0x20 ///< The GF3 flag is set. Set the GF3 flag.          
                                                                                    
#define PCON_GF4__BMASK   0x40 ///< General Purpose Flag 4                          
#define PCON_GF4__SHIFT   0x06 ///< General Purpose Flag 4                          
#define PCON_GF4__NOT_SET 0x00 ///< The GF4 flag is not set. Clear the GF4 flag.    
#define PCON_GF4__SET     0x40 ///< The GF4 flag is set. Set the GF4 flag.          
                                                                                    
#define PCON_GF5__BMASK   0x80 ///< General Purpose Flag 5                          
#define PCON_GF5__SHIFT   0x07 ///< General Purpose Flag 5                          
#define PCON_GF5__NOT_SET 0x00 ///< The GF5 flag is not set. Clear the GF5 flag.    
#define PCON_GF5__SET     0x80 ///< The GF5 flag is set. Set the GF5 flag.          
                                                                                    
//------------------------------------------------------------------------------
// P0 Enums (Port 0 Pin Latch @ 0x80)
//------------------------------------------------------------------------------
#define P0_B0__BMASK 0x01 ///< Port 0 Bit 0 Latch                            
#define P0_B0__SHIFT 0x00 ///< Port 0 Bit 0 Latch                            
#define P0_B0__LOW   0x00 ///< P0.0 is low. Set P0.0 to drive low.           
#define P0_B0__HIGH  0x01 ///< P0.0 is high. Set P0.0 to drive or float high.
                                                                             
#define P0_B1__BMASK 0x02 ///< Port 0 Bit 1 Latch                            
#define P0_B1__SHIFT 0x01 ///< Port 0 Bit 1 Latch                            
#define P0_B1__LOW   0x00 ///< P0.1 is low. Set P0.1 to drive low.           
#define P0_B1__HIGH  0x02 ///< P0.1 is high. Set P0.1 to drive or float high.
                                                                             
#define P0_B2__BMASK 0x04 ///< Port 0 Bit 2 Latch                            
#define P0_B2__SHIFT 0x02 ///< Port 0 Bit 2 Latch                            
#define P0_B2__LOW   0x00 ///< P0.2 is low. Set P0.2 to drive low.           
#define P0_B2__HIGH  0x04 ///< P0.2 is high. Set P0.2 to drive or float high.
                                                                             
#define P0_B3__BMASK 0x08 ///< Port 0 Bit 3 Latch                            
#define P0_B3__SHIFT 0x03 ///< Port 0 Bit 3 Latch                            
#define P0_B3__LOW   0x00 ///< P0.3 is low. Set P0.3 to drive low.           
#define P0_B3__HIGH  0x08 ///< P0.3 is high. Set P0.3 to drive or float high.
                                                                             
#define P0_B4__BMASK 0x10 ///< Port 0 Bit 4 Latch                            
#define P0_B4__SHIFT 0x04 ///< Port 0 Bit 4 Latch                            
#define P0_B4__LOW   0x00 ///< P0.4 is low. Set P0.4 to drive low.           
#define P0_B4__HIGH  0x10 ///< P0.4 is high. Set P0.4 to drive or float high.
                                                                             
#define P0_B5__BMASK 0x20 ///< Port 0 Bit 5 Latch                            
#define P0_B5__SHIFT 0x05 ///< Port 0 Bit 5 Latch                            
#define P0_B5__LOW   0x00 ///< P0.5 is low. Set P0.5 to drive low.           
#define P0_B5__HIGH  0x20 ///< P0.5 is high. Set P0.5 to drive or float high.
                                                                             
#define P0_B6__BMASK 0x40 ///< Port 0 Bit 6 Latch                            
#define P0_B6__SHIFT 0x06 ///< Port 0 Bit 6 Latch                            
#define P0_B6__LOW   0x00 ///< P0.6 is low. Set P0.6 to drive low.           
#define P0_B6__HIGH  0x40 ///< P0.6 is high. Set P0.6 to drive or float high.
                                                                             
#define P0_B7__BMASK 0x80 ///< Port 0 Bit 7 Latch                            
#define P0_B7__SHIFT 0x07 ///< Port 0 Bit 7 Latch                            
#define P0_B7__LOW   0x00 ///< P0.7 is low. Set P0.7 to drive low.           
#define P0_B7__HIGH  0x80 ///< P0.7 is high. Set P0.7 to drive or float high.
                                                                             
//------------------------------------------------------------------------------
// P0MASK Enums (Port 0 Mask @ 0xFE)
//------------------------------------------------------------------------------
#define P0MASK_B0__BMASK    0x01 ///< Port 0 Bit 0 Mask Value                           
#define P0MASK_B0__SHIFT    0x00 ///< Port 0 Bit 0 Mask Value                           
#define P0MASK_B0__IGNORED  0x00 ///< P0.0 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B0__COMPARED 0x01 ///< P0.0 pin logic value is compared to P0MAT.0.      
                                                                                        
#define P0MASK_B1__BMASK    0x02 ///< Port 0 Bit 1 Mask Value                           
#define P0MASK_B1__SHIFT    0x01 ///< Port 0 Bit 1 Mask Value                           
#define P0MASK_B1__IGNORED  0x00 ///< P0.1 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B1__COMPARED 0x02 ///< P0.1 pin logic value is compared to P0MAT.1.      
                                                                                        
#define P0MASK_B2__BMASK    0x04 ///< Port 0 Bit 2 Mask Value                           
#define P0MASK_B2__SHIFT    0x02 ///< Port 0 Bit 2 Mask Value                           
#define P0MASK_B2__IGNORED  0x00 ///< P0.2 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B2__COMPARED 0x04 ///< P0.2 pin logic value is compared to P0MAT.2.      
                                                                                        
#define P0MASK_B3__BMASK    0x08 ///< Port 0 Bit 3 Mask Value                           
#define P0MASK_B3__SHIFT    0x03 ///< Port 0 Bit 3 Mask Value                           
#define P0MASK_B3__IGNORED  0x00 ///< P0.3 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B3__COMPARED 0x08 ///< P0.3 pin logic value is compared to P0MAT.3.      
                                                                                        
#define P0MASK_B4__BMASK    0x10 ///< Port 0 Bit 4 Mask Value                           
#define P0MASK_B4__SHIFT    0x04 ///< Port 0 Bit 4 Mask Value                           
#define P0MASK_B4__IGNORED  0x00 ///< P0.4 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B4__COMPARED 0x10 ///< P0.4 pin logic value is compared to P0MAT.4.      
                                                                                        
#define P0MASK_B5__BMASK    0x20 ///< Port 0 Bit 5 Mask Value                           
#define P0MASK_B5__SHIFT    0x05 ///< Port 0 Bit 5 Mask Value                           
#define P0MASK_B5__IGNORED  0x00 ///< P0.5 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B5__COMPARED 0x20 ///< P0.5 pin logic value is compared to P0MAT.5.      
                                                                                        
#define P0MASK_B6__BMASK    0x40 ///< Port 0 Bit 6 Mask Value                           
#define P0MASK_B6__SHIFT    0x06 ///< Port 0 Bit 6 Mask Value                           
#define P0MASK_B6__IGNORED  0x00 ///< P0.6 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B6__COMPARED 0x40 ///< P0.6 pin logic value is compared to P0MAT.6.      
                                                                                        
#define P0MASK_B7__BMASK    0x80 ///< Port 0 Bit 7 Mask Value                           
#define P0MASK_B7__SHIFT    0x07 ///< Port 0 Bit 7 Mask Value                           
#define P0MASK_B7__IGNORED  0x00 ///< P0.7 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P0MASK_B7__COMPARED 0x80 ///< P0.7 pin logic value is compared to P0MAT.7.      
                                                                                        
//------------------------------------------------------------------------------
// P0MAT Enums (Port 0 Match @ 0xFD)
//------------------------------------------------------------------------------
#define P0MAT_B0__BMASK 0x01 ///< Port 0 Bit 0 Match Value                         
#define P0MAT_B0__SHIFT 0x00 ///< Port 0 Bit 0 Match Value                         
#define P0MAT_B0__LOW   0x00 ///< P0.0 pin logic value is compared with logic LOW. 
#define P0MAT_B0__HIGH  0x01 ///< P0.0 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B1__BMASK 0x02 ///< Port 0 Bit 1 Match Value                         
#define P0MAT_B1__SHIFT 0x01 ///< Port 0 Bit 1 Match Value                         
#define P0MAT_B1__LOW   0x00 ///< P0.1 pin logic value is compared with logic LOW. 
#define P0MAT_B1__HIGH  0x02 ///< P0.1 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B2__BMASK 0x04 ///< Port 0 Bit 2 Match Value                         
#define P0MAT_B2__SHIFT 0x02 ///< Port 0 Bit 2 Match Value                         
#define P0MAT_B2__LOW   0x00 ///< P0.2 pin logic value is compared with logic LOW. 
#define P0MAT_B2__HIGH  0x04 ///< P0.2 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B3__BMASK 0x08 ///< Port 0 Bit 3 Match Value                         
#define P0MAT_B3__SHIFT 0x03 ///< Port 0 Bit 3 Match Value                         
#define P0MAT_B3__LOW   0x00 ///< P0.3 pin logic value is compared with logic LOW. 
#define P0MAT_B3__HIGH  0x08 ///< P0.3 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B4__BMASK 0x10 ///< Port 0 Bit 4 Match Value                         
#define P0MAT_B4__SHIFT 0x04 ///< Port 0 Bit 4 Match Value                         
#define P0MAT_B4__LOW   0x00 ///< P0.4 pin logic value is compared with logic LOW. 
#define P0MAT_B4__HIGH  0x10 ///< P0.4 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B5__BMASK 0x20 ///< Port 0 Bit 5 Match Value                         
#define P0MAT_B5__SHIFT 0x05 ///< Port 0 Bit 5 Match Value                         
#define P0MAT_B5__LOW   0x00 ///< P0.5 pin logic value is compared with logic LOW. 
#define P0MAT_B5__HIGH  0x20 ///< P0.5 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B6__BMASK 0x40 ///< Port 0 Bit 6 Match Value                         
#define P0MAT_B6__SHIFT 0x06 ///< Port 0 Bit 6 Match Value                         
#define P0MAT_B6__LOW   0x00 ///< P0.6 pin logic value is compared with logic LOW. 
#define P0MAT_B6__HIGH  0x40 ///< P0.6 pin logic value is compared with logic HIGH.
                                                                                   
#define P0MAT_B7__BMASK 0x80 ///< Port 0 Bit 7 Match Value                         
#define P0MAT_B7__SHIFT 0x07 ///< Port 0 Bit 7 Match Value                         
#define P0MAT_B7__LOW   0x00 ///< P0.7 pin logic value is compared with logic LOW. 
#define P0MAT_B7__HIGH  0x80 ///< P0.7 pin logic value is compared with logic HIGH.
                                                                                   
//------------------------------------------------------------------------------
// P0MDIN Enums (Port 0 Input Mode @ 0xF1)
//------------------------------------------------------------------------------
#define P0MDIN_B0__BMASK   0x01 ///< Port 0 Bit 0 Input Mode                 
#define P0MDIN_B0__SHIFT   0x00 ///< Port 0 Bit 0 Input Mode                 
#define P0MDIN_B0__ANALOG  0x00 ///< P0.0 pin is configured for analog mode. 
#define P0MDIN_B0__DIGITAL 0x01 ///< P0.0 pin is configured for digital mode.
                                                                             
#define P0MDIN_B1__BMASK   0x02 ///< Port 0 Bit 1 Input Mode                 
#define P0MDIN_B1__SHIFT   0x01 ///< Port 0 Bit 1 Input Mode                 
#define P0MDIN_B1__ANALOG  0x00 ///< P0.1 pin is configured for analog mode. 
#define P0MDIN_B1__DIGITAL 0x02 ///< P0.1 pin is configured for digital mode.
                                                                             
#define P0MDIN_B2__BMASK   0x04 ///< Port 0 Bit 2 Input Mode                 
#define P0MDIN_B2__SHIFT   0x02 ///< Port 0 Bit 2 Input Mode                 
#define P0MDIN_B2__ANALOG  0x00 ///< P0.2 pin is configured for analog mode. 
#define P0MDIN_B2__DIGITAL 0x04 ///< P0.2 pin is configured for digital mode.
                                                                             
#define P0MDIN_B3__BMASK   0x08 ///< Port 0 Bit 3 Input Mode                 
#define P0MDIN_B3__SHIFT   0x03 ///< Port 0 Bit 3 Input Mode                 
#define P0MDIN_B3__ANALOG  0x00 ///< P0.3 pin is configured for analog mode. 
#define P0MDIN_B3__DIGITAL 0x08 ///< P0.3 pin is configured for digital mode.
                                                                             
#define P0MDIN_B4__BMASK   0x10 ///< Port 0 Bit 4 Input Mode                 
#define P0MDIN_B4__SHIFT   0x04 ///< Port 0 Bit 4 Input Mode                 
#define P0MDIN_B4__ANALOG  0x00 ///< P0.4 pin is configured for analog mode. 
#define P0MDIN_B4__DIGITAL 0x10 ///< P0.4 pin is configured for digital mode.
                                                                             
#define P0MDIN_B5__BMASK   0x20 ///< Port 0 Bit 5 Input Mode                 
#define P0MDIN_B5__SHIFT   0x05 ///< Port 0 Bit 5 Input Mode                 
#define P0MDIN_B5__ANALOG  0x00 ///< P0.5 pin is configured for analog mode. 
#define P0MDIN_B5__DIGITAL 0x20 ///< P0.5 pin is configured for digital mode.
                                                                             
#define P0MDIN_B6__BMASK   0x40 ///< Port 0 Bit 6 Input Mode                 
#define P0MDIN_B6__SHIFT   0x06 ///< Port 0 Bit 6 Input Mode                 
#define P0MDIN_B6__ANALOG  0x00 ///< P0.6 pin is configured for analog mode. 
#define P0MDIN_B6__DIGITAL 0x40 ///< P0.6 pin is configured for digital mode.
                                                                             
#define P0MDIN_B7__BMASK   0x80 ///< Port 0 Bit 7 Input Mode                 
#define P0MDIN_B7__SHIFT   0x07 ///< Port 0 Bit 7 Input Mode                 
#define P0MDIN_B7__ANALOG  0x00 ///< P0.7 pin is configured for analog mode. 
#define P0MDIN_B7__DIGITAL 0x80 ///< P0.7 pin is configured for digital mode.
                                                                             
//------------------------------------------------------------------------------
// P0MDOUT Enums (Port 0 Output Mode @ 0xA4)
//------------------------------------------------------------------------------
#define P0MDOUT_B0__BMASK      0x01 ///< Port 0 Bit 0 Output Mode  
#define P0MDOUT_B0__SHIFT      0x00 ///< Port 0 Bit 0 Output Mode  
#define P0MDOUT_B0__OPEN_DRAIN 0x00 ///< P0.0 output is open-drain.
#define P0MDOUT_B0__PUSH_PULL  0x01 ///< P0.0 output is push-pull. 
                                                                   
#define P0MDOUT_B1__BMASK      0x02 ///< Port 0 Bit 1 Output Mode  
#define P0MDOUT_B1__SHIFT      0x01 ///< Port 0 Bit 1 Output Mode  
#define P0MDOUT_B1__OPEN_DRAIN 0x00 ///< P0.1 output is open-drain.
#define P0MDOUT_B1__PUSH_PULL  0x02 ///< P0.1 output is push-pull. 
                                                                   
#define P0MDOUT_B2__BMASK      0x04 ///< Port 0 Bit 2 Output Mode  
#define P0MDOUT_B2__SHIFT      0x02 ///< Port 0 Bit 2 Output Mode  
#define P0MDOUT_B2__OPEN_DRAIN 0x00 ///< P0.2 output is open-drain.
#define P0MDOUT_B2__PUSH_PULL  0x04 ///< P0.2 output is push-pull. 
                                                                   
#define P0MDOUT_B3__BMASK      0x08 ///< Port 0 Bit 3 Output Mode  
#define P0MDOUT_B3__SHIFT      0x03 ///< Port 0 Bit 3 Output Mode  
#define P0MDOUT_B3__OPEN_DRAIN 0x00 ///< P0.3 output is open-drain.
#define P0MDOUT_B3__PUSH_PULL  0x08 ///< P0.3 output is push-pull. 
                                                                   
#define P0MDOUT_B4__BMASK      0x10 ///< Port 0 Bit 4 Output Mode  
#define P0MDOUT_B4__SHIFT      0x04 ///< Port 0 Bit 4 Output Mode  
#define P0MDOUT_B4__OPEN_DRAIN 0x00 ///< P0.4 output is open-drain.
#define P0MDOUT_B4__PUSH_PULL  0x10 ///< P0.4 output is push-pull. 
                                                                   
#define P0MDOUT_B5__BMASK      0x20 ///< Port 0 Bit 5 Output Mode  
#define P0MDOUT_B5__SHIFT      0x05 ///< Port 0 Bit 5 Output Mode  
#define P0MDOUT_B5__OPEN_DRAIN 0x00 ///< P0.5 output is open-drain.
#define P0MDOUT_B5__PUSH_PULL  0x20 ///< P0.5 output is push-pull. 
                                                                   
#define P0MDOUT_B6__BMASK      0x40 ///< Port 0 Bit 6 Output Mode  
#define P0MDOUT_B6__SHIFT      0x06 ///< Port 0 Bit 6 Output Mode  
#define P0MDOUT_B6__OPEN_DRAIN 0x00 ///< P0.6 output is open-drain.
#define P0MDOUT_B6__PUSH_PULL  0x40 ///< P0.6 output is push-pull. 
                                                                   
#define P0MDOUT_B7__BMASK      0x80 ///< Port 0 Bit 7 Output Mode  
#define P0MDOUT_B7__SHIFT      0x07 ///< Port 0 Bit 7 Output Mode  
#define P0MDOUT_B7__OPEN_DRAIN 0x00 ///< P0.7 output is open-drain.
#define P0MDOUT_B7__PUSH_PULL  0x80 ///< P0.7 output is push-pull. 
                                                                   
//------------------------------------------------------------------------------
// P0SKIP Enums (Port 0 Skip @ 0xD4)
//------------------------------------------------------------------------------
#define P0SKIP_B0__BMASK       0x01 ///< Port 0 Bit 0 Skip                       
#define P0SKIP_B0__SHIFT       0x00 ///< Port 0 Bit 0 Skip                       
#define P0SKIP_B0__NOT_SKIPPED 0x00 ///< P0.0 pin is not skipped by the crossbar.
#define P0SKIP_B0__SKIPPED     0x01 ///< P0.0 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B1__BMASK       0x02 ///< Port 0 Bit 1 Skip                       
#define P0SKIP_B1__SHIFT       0x01 ///< Port 0 Bit 1 Skip                       
#define P0SKIP_B1__NOT_SKIPPED 0x00 ///< P0.1 pin is not skipped by the crossbar.
#define P0SKIP_B1__SKIPPED     0x02 ///< P0.1 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B2__BMASK       0x04 ///< Port 0 Bit 2 Skip                       
#define P0SKIP_B2__SHIFT       0x02 ///< Port 0 Bit 2 Skip                       
#define P0SKIP_B2__NOT_SKIPPED 0x00 ///< P0.2 pin is not skipped by the crossbar.
#define P0SKIP_B2__SKIPPED     0x04 ///< P0.2 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B3__BMASK       0x08 ///< Port 0 Bit 3 Skip                       
#define P0SKIP_B3__SHIFT       0x03 ///< Port 0 Bit 3 Skip                       
#define P0SKIP_B3__NOT_SKIPPED 0x00 ///< P0.3 pin is not skipped by the crossbar.
#define P0SKIP_B3__SKIPPED     0x08 ///< P0.3 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B4__BMASK       0x10 ///< Port 0 Bit 4 Skip                       
#define P0SKIP_B4__SHIFT       0x04 ///< Port 0 Bit 4 Skip                       
#define P0SKIP_B4__NOT_SKIPPED 0x00 ///< P0.4 pin is not skipped by the crossbar.
#define P0SKIP_B4__SKIPPED     0x10 ///< P0.4 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B5__BMASK       0x20 ///< Port 0 Bit 5 Skip                       
#define P0SKIP_B5__SHIFT       0x05 ///< Port 0 Bit 5 Skip                       
#define P0SKIP_B5__NOT_SKIPPED 0x00 ///< P0.5 pin is not skipped by the crossbar.
#define P0SKIP_B5__SKIPPED     0x20 ///< P0.5 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B6__BMASK       0x40 ///< Port 0 Bit 6 Skip                       
#define P0SKIP_B6__SHIFT       0x06 ///< Port 0 Bit 6 Skip                       
#define P0SKIP_B6__NOT_SKIPPED 0x00 ///< P0.6 pin is not skipped by the crossbar.
#define P0SKIP_B6__SKIPPED     0x40 ///< P0.6 pin is skipped by the crossbar.    
                                                                                 
#define P0SKIP_B7__BMASK       0x80 ///< Port 0 Bit 7 Skip                       
#define P0SKIP_B7__SHIFT       0x07 ///< Port 0 Bit 7 Skip                       
#define P0SKIP_B7__NOT_SKIPPED 0x00 ///< P0.7 pin is not skipped by the crossbar.
#define P0SKIP_B7__SKIPPED     0x80 ///< P0.7 pin is skipped by the crossbar.    
                                                                                 
//------------------------------------------------------------------------------
// P1 Enums (Port 1 Pin Latch @ 0x90)
//------------------------------------------------------------------------------
#define P1_B0__BMASK 0x01 ///< Port 1 Bit 0 Latch                            
#define P1_B0__SHIFT 0x00 ///< Port 1 Bit 0 Latch                            
#define P1_B0__LOW   0x00 ///< P1.0 is low. Set P1.0 to drive low.           
#define P1_B0__HIGH  0x01 ///< P1.0 is high. Set P1.0 to drive or float high.
                                                                             
#define P1_B1__BMASK 0x02 ///< Port 1 Bit 1 Latch                            
#define P1_B1__SHIFT 0x01 ///< Port 1 Bit 1 Latch                            
#define P1_B1__LOW   0x00 ///< P1.1 is low. Set P1.1 to drive low.           
#define P1_B1__HIGH  0x02 ///< P1.1 is high. Set P1.1 to drive or float high.
                                                                             
#define P1_B2__BMASK 0x04 ///< Port 1 Bit 2 Latch                            
#define P1_B2__SHIFT 0x02 ///< Port 1 Bit 2 Latch                            
#define P1_B2__LOW   0x00 ///< P1.2 is low. Set P1.2 to drive low.           
#define P1_B2__HIGH  0x04 ///< P1.2 is high. Set P1.2 to drive or float high.
                                                                             
#define P1_B3__BMASK 0x08 ///< Port 1 Bit 3 Latch                            
#define P1_B3__SHIFT 0x03 ///< Port 1 Bit 3 Latch                            
#define P1_B3__LOW   0x00 ///< P1.3 is low. Set P1.3 to drive low.           
#define P1_B3__HIGH  0x08 ///< P1.3 is high. Set P1.3 to drive or float high.
                                                                             
#define P1_B4__BMASK 0x10 ///< Port 1 Bit 4 Latch                            
#define P1_B4__SHIFT 0x04 ///< Port 1 Bit 4 Latch                            
#define P1_B4__LOW   0x00 ///< P1.4 is low. Set P1.4 to drive low.           
#define P1_B4__HIGH  0x10 ///< P1.4 is high. Set P1.4 to drive or float high.
                                                                             
#define P1_B5__BMASK 0x20 ///< Port 1 Bit 5 Latch                            
#define P1_B5__SHIFT 0x05 ///< Port 1 Bit 5 Latch                            
#define P1_B5__LOW   0x00 ///< P1.5 is low. Set P1.5 to drive low.           
#define P1_B5__HIGH  0x20 ///< P1.5 is high. Set P1.5 to drive or float high.
                                                                             
#define P1_B6__BMASK 0x40 ///< Port 1 Bit 6 Latch                            
#define P1_B6__SHIFT 0x06 ///< Port 1 Bit 6 Latch                            
#define P1_B6__LOW   0x00 ///< P1.6 is low. Set P1.6 to drive low.           
#define P1_B6__HIGH  0x40 ///< P1.6 is high. Set P1.6 to drive or float high.
                                                                             
#define P1_B7__BMASK 0x80 ///< Port 1 Bit 7 Latch                            
#define P1_B7__SHIFT 0x07 ///< Port 1 Bit 7 Latch                            
#define P1_B7__LOW   0x00 ///< P1.7 is low. Set P1.7 to drive low.           
#define P1_B7__HIGH  0x80 ///< P1.7 is high. Set P1.7 to drive or float high.
                                                                             
//------------------------------------------------------------------------------
// P1MASK Enums (Port 1 Mask @ 0xEE)
//------------------------------------------------------------------------------
#define P1MASK_B0__BMASK    0x01 ///< Port 1 Bit 0 Mask Value                           
#define P1MASK_B0__SHIFT    0x00 ///< Port 1 Bit 0 Mask Value                           
#define P1MASK_B0__IGNORED  0x00 ///< P1.0 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B0__COMPARED 0x01 ///< P1.0 pin logic value is compared to P1MAT.0.      
                                                                                        
#define P1MASK_B1__BMASK    0x02 ///< Port 1 Bit 1 Mask Value                           
#define P1MASK_B1__SHIFT    0x01 ///< Port 1 Bit 1 Mask Value                           
#define P1MASK_B1__IGNORED  0x00 ///< P1.1 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B1__COMPARED 0x02 ///< P1.1 pin logic value is compared to P1MAT.1.      
                                                                                        
#define P1MASK_B2__BMASK    0x04 ///< Port 1 Bit 2 Mask Value                           
#define P1MASK_B2__SHIFT    0x02 ///< Port 1 Bit 2 Mask Value                           
#define P1MASK_B2__IGNORED  0x00 ///< P1.2 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B2__COMPARED 0x04 ///< P1.2 pin logic value is compared to P1MAT.2.      
                                                                                        
#define P1MASK_B3__BMASK    0x08 ///< Port 1 Bit 3 Mask Value                           
#define P1MASK_B3__SHIFT    0x03 ///< Port 1 Bit 3 Mask Value                           
#define P1MASK_B3__IGNORED  0x00 ///< P1.3 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B3__COMPARED 0x08 ///< P1.3 pin logic value is compared to P1MAT.3.      
                                                                                        
#define P1MASK_B4__BMASK    0x10 ///< Port 1 Bit 4 Mask Value                           
#define P1MASK_B4__SHIFT    0x04 ///< Port 1 Bit 4 Mask Value                           
#define P1MASK_B4__IGNORED  0x00 ///< P1.4 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B4__COMPARED 0x10 ///< P1.4 pin logic value is compared to P1MAT.4.      
                                                                                        
#define P1MASK_B5__BMASK    0x20 ///< Port 1 Bit 5 Mask Value                           
#define P1MASK_B5__SHIFT    0x05 ///< Port 1 Bit 5 Mask Value                           
#define P1MASK_B5__IGNORED  0x00 ///< P1.5 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B5__COMPARED 0x20 ///< P1.5 pin logic value is compared to P1MAT.5.      
                                                                                        
#define P1MASK_B6__BMASK    0x40 ///< Port 1 Bit 6 Mask Value                           
#define P1MASK_B6__SHIFT    0x06 ///< Port 1 Bit 6 Mask Value                           
#define P1MASK_B6__IGNORED  0x00 ///< P1.6 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B6__COMPARED 0x40 ///< P1.6 pin logic value is compared to P1MAT.6.      
                                                                                        
#define P1MASK_B7__BMASK    0x80 ///< Port 1 Bit 7 Mask Value                           
#define P1MASK_B7__SHIFT    0x07 ///< Port 1 Bit 7 Mask Value                           
#define P1MASK_B7__IGNORED  0x00 ///< P1.7 pin logic value is ignored and will not cause
                                 ///< a port mismatch event.                            
#define P1MASK_B7__COMPARED 0x80 ///< P1.7 pin logic value is compared to P1MAT.7.      
                                                                                        
//------------------------------------------------------------------------------
// P1MAT Enums (Port 1 Match @ 0xED)
//------------------------------------------------------------------------------
#define P1MAT_B0__BMASK 0x01 ///< Port 1 Bit 0 Match Value                         
#define P1MAT_B0__SHIFT 0x00 ///< Port 1 Bit 0 Match Value                         
#define P1MAT_B0__LOW   0x00 ///< P1.0 pin logic value is compared with logic LOW. 
#define P1MAT_B0__HIGH  0x01 ///< P1.0 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B1__BMASK 0x02 ///< Port 1 Bit 1 Match Value                         
#define P1MAT_B1__SHIFT 0x01 ///< Port 1 Bit 1 Match Value                         
#define P1MAT_B1__LOW   0x00 ///< P1.1 pin logic value is compared with logic LOW. 
#define P1MAT_B1__HIGH  0x02 ///< P1.1 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B2__BMASK 0x04 ///< Port 1 Bit 2 Match Value                         
#define P1MAT_B2__SHIFT 0x02 ///< Port 1 Bit 2 Match Value                         
#define P1MAT_B2__LOW   0x00 ///< P1.2 pin logic value is compared with logic LOW. 
#define P1MAT_B2__HIGH  0x04 ///< P1.2 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B3__BMASK 0x08 ///< Port 1 Bit 3 Match Value                         
#define P1MAT_B3__SHIFT 0x03 ///< Port 1 Bit 3 Match Value                         
#define P1MAT_B3__LOW   0x00 ///< P1.3 pin logic value is compared with logic LOW. 
#define P1MAT_B3__HIGH  0x08 ///< P1.3 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B4__BMASK 0x10 ///< Port 1 Bit 4 Match Value                         
#define P1MAT_B4__SHIFT 0x04 ///< Port 1 Bit 4 Match Value                         
#define P1MAT_B4__LOW   0x00 ///< P1.4 pin logic value is compared with logic LOW. 
#define P1MAT_B4__HIGH  0x10 ///< P1.4 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B5__BMASK 0x20 ///< Port 1 Bit 5 Match Value                         
#define P1MAT_B5__SHIFT 0x05 ///< Port 1 Bit 5 Match Value                         
#define P1MAT_B5__LOW   0x00 ///< P1.5 pin logic value is compared with logic LOW. 
#define P1MAT_B5__HIGH  0x20 ///< P1.5 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B6__BMASK 0x40 ///< Port 1 Bit 6 Match Value                         
#define P1MAT_B6__SHIFT 0x06 ///< Port 1 Bit 6 Match Value                         
#define P1MAT_B6__LOW   0x00 ///< P1.6 pin logic value is compared with logic LOW. 
#define P1MAT_B6__HIGH  0x40 ///< P1.6 pin logic value is compared with logic HIGH.
                                                                                   
#define P1MAT_B7__BMASK 0x80 ///< Port 1 Bit 7 Match Value                         
#define P1MAT_B7__SHIFT 0x07 ///< Port 1 Bit 7 Match Value                         
#define P1MAT_B7__LOW   0x00 ///< P1.7 pin logic value is compared with logic LOW. 
#define P1MAT_B7__HIGH  0x80 ///< P1.7 pin logic value is compared with logic HIGH.
                                                                                   
//------------------------------------------------------------------------------
// P1MDIN Enums (Port 1 Input Mode @ 0xF2)
//------------------------------------------------------------------------------
#define P1MDIN_B0__BMASK   0x01 ///< Port 1 Bit 0 Input Mode                 
#define P1MDIN_B0__SHIFT   0x00 ///< Port 1 Bit 0 Input Mode                 
#define P1MDIN_B0__ANALOG  0x00 ///< P1.0 pin is configured for analog mode. 
#define P1MDIN_B0__DIGITAL 0x01 ///< P1.0 pin is configured for digital mode.
                                                                             
#define P1MDIN_B1__BMASK   0x02 ///< Port 1 Bit 1 Input Mode                 
#define P1MDIN_B1__SHIFT   0x01 ///< Port 1 Bit 1 Input Mode                 
#define P1MDIN_B1__ANALOG  0x00 ///< P1.1 pin is configured for analog mode. 
#define P1MDIN_B1__DIGITAL 0x02 ///< P1.1 pin is configured for digital mode.
                                                                             
#define P1MDIN_B2__BMASK   0x04 ///< Port 1 Bit 2 Input Mode                 
#define P1MDIN_B2__SHIFT   0x02 ///< Port 1 Bit 2 Input Mode                 
#define P1MDIN_B2__ANALOG  0x00 ///< P1.2 pin is configured for analog mode. 
#define P1MDIN_B2__DIGITAL 0x04 ///< P1.2 pin is configured for digital mode.
                                                                             
#define P1MDIN_B3__BMASK   0x08 ///< Port 1 Bit 3 Input Mode                 
#define P1MDIN_B3__SHIFT   0x03 ///< Port 1 Bit 3 Input Mode                 
#define P1MDIN_B3__ANALOG  0x00 ///< P1.3 pin is configured for analog mode. 
#define P1MDIN_B3__DIGITAL 0x08 ///< P1.3 pin is configured for digital mode.
                                                                             
#define P1MDIN_B4__BMASK   0x10 ///< Port 1 Bit 4 Input Mode                 
#define P1MDIN_B4__SHIFT   0x04 ///< Port 1 Bit 4 Input Mode                 
#define P1MDIN_B4__ANALOG  0x00 ///< P1.4 pin is configured for analog mode. 
#define P1MDIN_B4__DIGITAL 0x10 ///< P1.4 pin is configured for digital mode.
                                                                             
#define P1MDIN_B5__BMASK   0x20 ///< Port 1 Bit 5 Input Mode                 
#define P1MDIN_B5__SHIFT   0x05 ///< Port 1 Bit 5 Input Mode                 
#define P1MDIN_B5__ANALOG  0x00 ///< P1.5 pin is configured for analog mode. 
#define P1MDIN_B5__DIGITAL 0x20 ///< P1.5 pin is configured for digital mode.
                                                                             
#define P1MDIN_B6__BMASK   0x40 ///< Port 1 Bit 6 Input Mode                 
#define P1MDIN_B6__SHIFT   0x06 ///< Port 1 Bit 6 Input Mode                 
#define P1MDIN_B6__ANALOG  0x00 ///< P1.6 pin is configured for analog mode. 
#define P1MDIN_B6__DIGITAL 0x40 ///< P1.6 pin is configured for digital mode.
                                                                             
#define P1MDIN_B7__BMASK   0x80 ///< Port 1 Bit 7 Input Mode                 
#define P1MDIN_B7__SHIFT   0x07 ///< Port 1 Bit 7 Input Mode                 
#define P1MDIN_B7__ANALOG  0x00 ///< P1.7 pin is configured for analog mode. 
#define P1MDIN_B7__DIGITAL 0x80 ///< P1.7 pin is configured for digital mode.
                                                                             
//------------------------------------------------------------------------------
// P1MDOUT Enums (Port 1 Output Mode @ 0xA5)
//------------------------------------------------------------------------------
#define P1MDOUT_B0__BMASK      0x01 ///< Port 1 Bit 0 Output Mode  
#define P1MDOUT_B0__SHIFT      0x00 ///< Port 1 Bit 0 Output Mode  
#define P1MDOUT_B0__OPEN_DRAIN 0x00 ///< P1.0 output is open-drain.
#define P1MDOUT_B0__PUSH_PULL  0x01 ///< P1.0 output is push-pull. 
                                                                   
#define P1MDOUT_B1__BMASK      0x02 ///< Port 1 Bit 1 Output Mode  
#define P1MDOUT_B1__SHIFT      0x01 ///< Port 1 Bit 1 Output Mode  
#define P1MDOUT_B1__OPEN_DRAIN 0x00 ///< P1.1 output is open-drain.
#define P1MDOUT_B1__PUSH_PULL  0x02 ///< P1.1 output is push-pull. 
                                                                   
#define P1MDOUT_B2__BMASK      0x04 ///< Port 1 Bit 2 Output Mode  
#define P1MDOUT_B2__SHIFT      0x02 ///< Port 1 Bit 2 Output Mode  
#define P1MDOUT_B2__OPEN_DRAIN 0x00 ///< P1.2 output is open-drain.
#define P1MDOUT_B2__PUSH_PULL  0x04 ///< P1.2 output is push-pull. 
                                                                   
#define P1MDOUT_B3__BMASK      0x08 ///< Port 1 Bit 3 Output Mode  
#define P1MDOUT_B3__SHIFT      0x03 ///< Port 1 Bit 3 Output Mode  
#define P1MDOUT_B3__OPEN_DRAIN 0x00 ///< P1.3 output is open-drain.
#define P1MDOUT_B3__PUSH_PULL  0x08 ///< P1.3 output is push-pull. 
                                                                   
#define P1MDOUT_B4__BMASK      0x10 ///< Port 1 Bit 4 Output Mode  
#define P1MDOUT_B4__SHIFT      0x04 ///< Port 1 Bit 4 Output Mode  
#define P1MDOUT_B4__OPEN_DRAIN 0x00 ///< P1.4 output is open-drain.
#define P1MDOUT_B4__PUSH_PULL  0x10 ///< P1.4 output is push-pull. 
                                                                   
#define P1MDOUT_B5__BMASK      0x20 ///< Port 1 Bit 5 Output Mode  
#define P1MDOUT_B5__SHIFT      0x05 ///< Port 1 Bit 5 Output Mode  
#define P1MDOUT_B5__OPEN_DRAIN 0x00 ///< P1.5 output is open-drain.
#define P1MDOUT_B5__PUSH_PULL  0x20 ///< P1.5 output is push-pull. 
                                                                   
#define P1MDOUT_B6__BMASK      0x40 ///< Port 1 Bit 6 Output Mode  
#define P1MDOUT_B6__SHIFT      0x06 ///< Port 1 Bit 6 Output Mode  
#define P1MDOUT_B6__OPEN_DRAIN 0x00 ///< P1.6 output is open-drain.
#define P1MDOUT_B6__PUSH_PULL  0x40 ///< P1.6 output is push-pull. 
                                                                   
#define P1MDOUT_B7__BMASK      0x80 ///< Port 1 Bit 7 Output Mode  
#define P1MDOUT_B7__SHIFT      0x07 ///< Port 1 Bit 7 Output Mode  
#define P1MDOUT_B7__OPEN_DRAIN 0x00 ///< P1.7 output is open-drain.
#define P1MDOUT_B7__PUSH_PULL  0x80 ///< P1.7 output is push-pull. 
                                                                   
//------------------------------------------------------------------------------
// P1SKIP Enums (Port 1 Skip @ 0xD5)
//------------------------------------------------------------------------------
#define P1SKIP_B0__BMASK       0x01 ///< Port 1 Bit 0 Skip                       
#define P1SKIP_B0__SHIFT       0x00 ///< Port 1 Bit 0 Skip                       
#define P1SKIP_B0__NOT_SKIPPED 0x00 ///< P1.0 pin is not skipped by the crossbar.
#define P1SKIP_B0__SKIPPED     0x01 ///< P1.0 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B1__BMASK       0x02 ///< Port 1 Bit 1 Skip                       
#define P1SKIP_B1__SHIFT       0x01 ///< Port 1 Bit 1 Skip                       
#define P1SKIP_B1__NOT_SKIPPED 0x00 ///< P1.1 pin is not skipped by the crossbar.
#define P1SKIP_B1__SKIPPED     0x02 ///< P1.1 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B2__BMASK       0x04 ///< Port 1 Bit 2 Skip                       
#define P1SKIP_B2__SHIFT       0x02 ///< Port 1 Bit 2 Skip                       
#define P1SKIP_B2__NOT_SKIPPED 0x00 ///< P1.2 pin is not skipped by the crossbar.
#define P1SKIP_B2__SKIPPED     0x04 ///< P1.2 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B3__BMASK       0x08 ///< Port 1 Bit 3 Skip                       
#define P1SKIP_B3__SHIFT       0x03 ///< Port 1 Bit 3 Skip                       
#define P1SKIP_B3__NOT_SKIPPED 0x00 ///< P1.3 pin is not skipped by the crossbar.
#define P1SKIP_B3__SKIPPED     0x08 ///< P1.3 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B4__BMASK       0x10 ///< Port 1 Bit 4 Skip                       
#define P1SKIP_B4__SHIFT       0x04 ///< Port 1 Bit 4 Skip                       
#define P1SKIP_B4__NOT_SKIPPED 0x00 ///< P1.4 pin is not skipped by the crossbar.
#define P1SKIP_B4__SKIPPED     0x10 ///< P1.4 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B5__BMASK       0x20 ///< Port 1 Bit 5 Skip                       
#define P1SKIP_B5__SHIFT       0x05 ///< Port 1 Bit 5 Skip                       
#define P1SKIP_B5__NOT_SKIPPED 0x00 ///< P1.5 pin is not skipped by the crossbar.
#define P1SKIP_B5__SKIPPED     0x20 ///< P1.5 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B6__BMASK       0x40 ///< Port 1 Bit 6 Skip                       
#define P1SKIP_B6__SHIFT       0x06 ///< Port 1 Bit 6 Skip                       
#define P1SKIP_B6__NOT_SKIPPED 0x00 ///< P1.6 pin is not skipped by the crossbar.
#define P1SKIP_B6__SKIPPED     0x40 ///< P1.6 pin is skipped by the crossbar.    
                                                                                 
#define P1SKIP_B7__BMASK       0x80 ///< Port 1 Bit 7 Skip                       
#define P1SKIP_B7__SHIFT       0x07 ///< Port 1 Bit 7 Skip                       
#define P1SKIP_B7__NOT_SKIPPED 0x00 ///< P1.7 pin is not skipped by the crossbar.
#define P1SKIP_B7__SKIPPED     0x80 ///< P1.7 pin is skipped by the crossbar.    
                                                                                 
//------------------------------------------------------------------------------
// P2 Enums (Port 2 Pin Latch @ 0xA0)
//------------------------------------------------------------------------------
#define P2_B0__BMASK 0x01 ///< Port 2 Bit 0 Latch                            
#define P2_B0__SHIFT 0x00 ///< Port 2 Bit 0 Latch                            
#define P2_B0__LOW   0x00 ///< P2.0 is low. Set P2.0 to drive low.           
#define P2_B0__HIGH  0x01 ///< P2.0 is high. Set P2.0 to drive or float high.
                                                                             
#define P2_B1__BMASK 0x02 ///< Port 2 Bit 1 Latch                            
#define P2_B1__SHIFT 0x01 ///< Port 2 Bit 1 Latch                            
#define P2_B1__LOW   0x00 ///< P2.1 is low. Set P2.1 to drive low.           
#define P2_B1__HIGH  0x02 ///< P2.1 is high. Set P2.1 to drive or float high.
                                                                             
//------------------------------------------------------------------------------
// P2MDOUT Enums (Port 2 Output Mode @ 0xA6)
//------------------------------------------------------------------------------
#define P2MDOUT_B0__BMASK      0x01 ///< Port 2 Bit 0 Output Mode  
#define P2MDOUT_B0__SHIFT      0x00 ///< Port 2 Bit 0 Output Mode  
#define P2MDOUT_B0__OPEN_DRAIN 0x00 ///< P2.0 output is open-drain.
#define P2MDOUT_B0__PUSH_PULL  0x01 ///< P2.0 output is push-pull. 
                                                                   
#define P2MDOUT_B1__BMASK      0x02 ///< Port 2 Bit 1 Output Mode  
#define P2MDOUT_B1__SHIFT      0x01 ///< Port 2 Bit 1 Output Mode  
#define P2MDOUT_B1__OPEN_DRAIN 0x00 ///< P2.1 output is open-drain.
#define P2MDOUT_B1__PUSH_PULL  0x02 ///< P2.1 output is push-pull. 
                                                                   
//------------------------------------------------------------------------------
// RSTSRC Enums (Reset Source @ 0xEF)
//------------------------------------------------------------------------------
#define RSTSRC_PINRSF__BMASK   0x01 ///< HW Pin Reset Flag                                                    
#define RSTSRC_PINRSF__SHIFT   0x00 ///< HW Pin Reset Flag                                                    
#define RSTSRC_PINRSF__NOT_SET 0x00 ///< The /RST pin did not cause the last reset.                           
#define RSTSRC_PINRSF__SET     0x01 ///< The /RST pin caused the last reset.                                  
                                                                                                              
#define RSTSRC_PORSF__BMASK    0x02 ///< Power-On / Supply Monitor Reset Flag, and Supply Monitor Reset Enable
#define RSTSRC_PORSF__SHIFT    0x01 ///< Power-On / Supply Monitor Reset Flag, and Supply Monitor Reset Enable
#define RSTSRC_PORSF__NOT_SET  0x00 ///< A power-on or supply monitor reset did not occur.                    
#define RSTSRC_PORSF__SET      0x02 ///< A power-on or supply monitor reset occurred.                         
                                                                                                              
#define RSTSRC_MCDRSF__BMASK   0x04 ///< Missing Clock Detector Enable and Flag                               
#define RSTSRC_MCDRSF__SHIFT   0x02 ///< Missing Clock Detector Enable and Flag                               
#define RSTSRC_MCDRSF__NOT_SET 0x00 ///< A missing clock detector reset did not occur.                        
#define RSTSRC_MCDRSF__SET     0x04 ///< A missing clock detector reset occurred.                             
                                                                                                              
#define RSTSRC_WDTRSF__BMASK   0x08 ///< Watchdog Timer Reset Flag                                            
#define RSTSRC_WDTRSF__SHIFT   0x03 ///< Watchdog Timer Reset Flag                                            
#define RSTSRC_WDTRSF__NOT_SET 0x00 ///< A watchdog timer overflow reset did not occur.                       
#define RSTSRC_WDTRSF__SET     0x08 ///< A watchdog timer overflow reset occurred.                            
                                                                                                              
#define RSTSRC_SWRSF__BMASK    0x10 ///< Software Reset Force and Flag                                        
#define RSTSRC_SWRSF__SHIFT    0x04 ///< Software Reset Force and Flag                                        
#define RSTSRC_SWRSF__NOT_SET  0x00 ///< A software reset did not occur.                                      
#define RSTSRC_SWRSF__SET      0x10 ///< A software reset occurred.                                           
                                                                                                              
#define RSTSRC_C0RSEF__BMASK   0x20 ///< Comparator0 Reset Enable and Flag                                    
#define RSTSRC_C0RSEF__SHIFT   0x05 ///< Comparator0 Reset Enable and Flag                                    
#define RSTSRC_C0RSEF__NOT_SET 0x00 ///< A Comparator 0 reset did not occur.                                  
#define RSTSRC_C0RSEF__SET     0x20 ///< A Comparator 0 reset occurred.                                       
                                                                                                              
#define RSTSRC_FERROR__BMASK   0x40 ///< Flash Error Reset Flag                                               
#define RSTSRC_FERROR__SHIFT   0x06 ///< Flash Error Reset Flag                                               
#define RSTSRC_FERROR__NOT_SET 0x00 ///< A flash error reset did not occur.                                   
#define RSTSRC_FERROR__SET     0x40 ///< A flash error reset occurred.                                        
                                                                                                              
//------------------------------------------------------------------------------
// SMB0ADM Enums (SMBus 0 Slave Address Mask @ 0xD6)
//------------------------------------------------------------------------------
#define SMB0ADM_EHACK__BMASK             0x01 ///< Hardware Acknowledge Enable                     
#define SMB0ADM_EHACK__SHIFT             0x00 ///< Hardware Acknowledge Enable                     
#define SMB0ADM_EHACK__ADR_ACK_MANUAL    0x00 ///< Firmware must manually acknowledge all incoming 
                                              ///< address and data bytes.                         
#define SMB0ADM_EHACK__ADR_ACK_AUTOMATIC 0x01 ///< Automatic slave address recognition and hardware
                                              ///< acknowledge is enabled.                         
                                                                                                   
#define SMB0ADM_SLVM__FMASK              0xFE ///< SMBus Slave Address Mask                        
#define SMB0ADM_SLVM__SHIFT              0x01 ///< SMBus Slave Address Mask                        
                                                                                                   
//------------------------------------------------------------------------------
// SMB0ADR Enums (SMBus 0 Slave Address @ 0xD7)
//------------------------------------------------------------------------------
#define SMB0ADR_GC__BMASK      0x01 ///< General Call Address Enable        
#define SMB0ADR_GC__SHIFT      0x00 ///< General Call Address Enable        
#define SMB0ADR_GC__IGNORED    0x00 ///< General Call Address is ignored.   
#define SMB0ADR_GC__RECOGNIZED 0x01 ///< General Call Address is recognized.
                                                                            
#define SMB0ADR_SLV__FMASK     0xFE ///< SMBus Hardware Slave Address       
#define SMB0ADR_SLV__SHIFT     0x01 ///< SMBus Hardware Slave Address       
                                                                            
//------------------------------------------------------------------------------
// SMB0CF Enums (SMBus 0 Configuration @ 0xC1)
//------------------------------------------------------------------------------
#define SMB0CF_SMBCS__FMASK             0x03 ///< SMBus Clock Source Selection                     
#define SMB0CF_SMBCS__SHIFT             0x00 ///< SMBus Clock Source Selection                     
#define SMB0CF_SMBCS__TIMER0            0x00 ///< Timer 0 Overflow.                                
#define SMB0CF_SMBCS__TIMER1            0x01 ///< Timer 1 Overflow.                                
#define SMB0CF_SMBCS__TIMER2_HIGH       0x02 ///< Timer 2 High Byte Overflow.                      
#define SMB0CF_SMBCS__TIMER2_LOW        0x03 ///< Timer 2 Low Byte Overflow.                       
                                                                                                   
#define SMB0CF_SMBFTE__BMASK            0x04 ///< SMBus Free Timeout Detection Enable              
#define SMB0CF_SMBFTE__SHIFT            0x02 ///< SMBus Free Timeout Detection Enable              
#define SMB0CF_SMBFTE__FREE_TO_DISABLED 0x00 ///< Disable bus free timeouts.                       
#define SMB0CF_SMBFTE__FREE_TO_ENABLED  0x04 ///< Enable bus free timeouts. The bus the bus will be
                                             ///< considered free if SCL and SDA remain high for   
                                             ///< more than 10 SMBus clock source periods.         
                                                                                                   
#define SMB0CF_SMBTOE__BMASK            0x08 ///< SMBus SCL Timeout Detection Enable               
#define SMB0CF_SMBTOE__SHIFT            0x03 ///< SMBus SCL Timeout Detection Enable               
#define SMB0CF_SMBTOE__SCL_TO_DISABLED  0x00 ///< Disable SCL low timeouts.                        
#define SMB0CF_SMBTOE__SCL_TO_ENABLED   0x08 ///< Enable SCL low timeouts.                         
                                                                                                   
#define SMB0CF_EXTHOLD__BMASK           0x10 ///< SMBus Setup and Hold Time Extension Enable       
#define SMB0CF_EXTHOLD__SHIFT           0x04 ///< SMBus Setup and Hold Time Extension Enable       
#define SMB0CF_EXTHOLD__DISABLED        0x00 ///< Disable SDA extended setup and hold times.       
#define SMB0CF_EXTHOLD__ENABLED         0x10 ///< Enable SDA extended setup and hold times.        
                                                                                                   
#define SMB0CF_BUSY__BMASK              0x20 ///< SMBus Busy Indicator                             
#define SMB0CF_BUSY__SHIFT              0x05 ///< SMBus Busy Indicator                             
#define SMB0CF_BUSY__NOT_SET            0x00 ///< The bus is not busy.                             
#define SMB0CF_BUSY__SET                0x20 ///< The bus is busy and a transfer is currently in   
                                             ///< progress.                                        
                                                                                                   
#define SMB0CF_INH__BMASK               0x40 ///< SMBus Slave Inhibit                              
#define SMB0CF_INH__SHIFT               0x06 ///< SMBus Slave Inhibit                              
#define SMB0CF_INH__SLAVE_ENABLED       0x00 ///< Slave states are enabled.                        
#define SMB0CF_INH__SLAVE_DISABLED      0x40 ///< Slave states are inhibited.                      
                                                                                                   
#define SMB0CF_ENSMB__BMASK             0x80 ///< SMBus Enable                                     
#define SMB0CF_ENSMB__SHIFT             0x07 ///< SMBus Enable                                     
#define SMB0CF_ENSMB__DISABLED          0x00 ///< Disable the SMBus module.                        
#define SMB0CF_ENSMB__ENABLED           0x80 ///< Enable the SMBus module.                         
                                                                                                   
//------------------------------------------------------------------------------
// SMB0CN Enums (SMBus 0 Control @ 0xC0)
//------------------------------------------------------------------------------
#define SMB0CN_SI__BMASK           0x01 ///< SMBus Interrupt Flag                           
#define SMB0CN_SI__SHIFT           0x00 ///< SMBus Interrupt Flag                           
#define SMB0CN_SI__NOT_SET         0x00 ///<                                                
#define SMB0CN_SI__SET             0x01 ///<                                                
                                                                                            
#define SMB0CN_ACK__BMASK          0x02 ///< SMBus Acknowledge                              
#define SMB0CN_ACK__SHIFT          0x01 ///< SMBus Acknowledge                              
#define SMB0CN_ACK__NOT_SET        0x00 ///< Generate a NACK, or the response was a NACK.   
#define SMB0CN_ACK__SET            0x02 ///< Generate an ACK, or the response was an ACK.   
                                                                                            
#define SMB0CN_ARBLOST__BMASK      0x04 ///< SMBus Arbitration Lost Indicator               
#define SMB0CN_ARBLOST__SHIFT      0x02 ///< SMBus Arbitration Lost Indicator               
#define SMB0CN_ARBLOST__NOT_SET    0x00 ///< No arbitration error.                          
#define SMB0CN_ARBLOST__ERROR      0x04 ///< Arbitration error occurred.                    
                                                                                            
#define SMB0CN_ACKRQ__BMASK        0x08 ///< SMBus Acknowledge Request                      
#define SMB0CN_ACKRQ__SHIFT        0x03 ///< SMBus Acknowledge Request                      
#define SMB0CN_ACKRQ__NOT_SET      0x00 ///< No ACK requested.                              
#define SMB0CN_ACKRQ__REQUESTED    0x08 ///< ACK requested.                                 
                                                                                            
#define SMB0CN_STO__BMASK          0x10 ///< SMBus Stop Flag                                
#define SMB0CN_STO__SHIFT          0x04 ///< SMBus Stop Flag                                
#define SMB0CN_STO__NOT_SET        0x00 ///< A STOP is not pending.                         
#define SMB0CN_STO__SET            0x10 ///< Generate a STOP or a STOP is currently pending.
                                                                                            
#define SMB0CN_STA__BMASK          0x20 ///< SMBus Start Flag                               
#define SMB0CN_STA__SHIFT          0x05 ///< SMBus Start Flag                               
#define SMB0CN_STA__NOT_SET        0x00 ///< A START was not detected.                      
#define SMB0CN_STA__SET            0x20 ///< Generate a START, repeated START, or a START is
                                        ///< currently pending.                             
                                                                                            
#define SMB0CN_TXMODE__BMASK       0x40 ///< SMBus Transmit Mode Indicator                  
#define SMB0CN_TXMODE__SHIFT       0x06 ///< SMBus Transmit Mode Indicator                  
#define SMB0CN_TXMODE__RECEIVER    0x00 ///< SMBus in Receiver Mode.                        
#define SMB0CN_TXMODE__TRANSMITTER 0x40 ///< SMBus in Transmitter Mode.                     
                                                                                            
#define SMB0CN_MASTER__BMASK       0x80 ///< SMBus Master/Slave Indicator                   
#define SMB0CN_MASTER__SHIFT       0x07 ///< SMBus Master/Slave Indicator                   
#define SMB0CN_MASTER__SLAVE       0x00 ///< SMBus operating in slave mode.                 
#define SMB0CN_MASTER__MASTER      0x80 ///< SMBus operating in master mode.                
                                                                                            
//------------------------------------------------------------------------------
// SMB0DAT Enums (SMBus 0 Data @ 0xC2)
//------------------------------------------------------------------------------
#define SMB0DAT_SMB0DAT__FMASK 0xFF ///< SMBus 0 Data
#define SMB0DAT_SMB0DAT__SHIFT 0x00 ///< SMBus 0 Data
                                                     
//------------------------------------------------------------------------------
// SMB0TC Enums (SMBus 0 Timing and Pin Control @ 0xAC)
//------------------------------------------------------------------------------
#define SMB0TC_SDD__FMASK         0x03 ///< SMBus Start Detection Window                     
#define SMB0TC_SDD__SHIFT         0x00 ///< SMBus Start Detection Window                     
#define SMB0TC_SDD__NONE          0x00 ///< No additional hold time window (0-1 SYSCLK).     
#define SMB0TC_SDD__ADD_2_SYSCLKS 0x01 ///< Increase hold time window to 2-3 SYSCLKs.        
#define SMB0TC_SDD__ADD_4_SYSCLKS 0x02 ///< Increase hold time window to 4-5 SYSCLKs.        
#define SMB0TC_SDD__ADD_8_SYSCLKS 0x03 ///< Increase hold time window to 8-9 SYSCLKs.        
                                                                                             
#define SMB0TC_SWAP__BMASK        0x80 ///< SMBus Swap Pins                                  
#define SMB0TC_SWAP__SHIFT        0x07 ///< SMBus Swap Pins                                  
#define SMB0TC_SWAP__SDA_LOW_PIN  0x00 ///< SDA is mapped to the lower-numbered port pin, and
                                       ///< SCL is mapped to the higher-numbered port pin.   
#define SMB0TC_SWAP__SDA_HIGH_PIN 0x80 ///< SCL is mapped to the lower-numbered port pin, and
                                       ///< SDA is mapped to the higher-numbered port pin.   
                                                                                             
//------------------------------------------------------------------------------
// SPI0CFG Enums (SPI0 Configuration @ 0xA1)
//------------------------------------------------------------------------------
#define SPI0CFG_RXBMT__BMASK                0x01 ///< Receive Buffer Empty                              
#define SPI0CFG_RXBMT__SHIFT                0x00 ///< Receive Buffer Empty                              
#define SPI0CFG_RXBMT__NOT_SET              0x00 ///< New data is available in the receive buffer (Slave
                                                 ///< mode).                                            
#define SPI0CFG_RXBMT__SET                  0x01 ///< No new data in the receive buffer (Slave mode).   
                                                                                                        
#define SPI0CFG_SRMT__BMASK                 0x02 ///< Shift Register Empty                              
#define SPI0CFG_SRMT__SHIFT                 0x01 ///< Shift Register Empty                              
#define SPI0CFG_SRMT__NOT_SET               0x00 ///< The shift register is not empty.                  
#define SPI0CFG_SRMT__SET                   0x02 ///< The shift register is empty.                      
                                                                                                        
#define SPI0CFG_NSSIN__BMASK                0x04 ///< NSS Instantaneous Pin Input                       
#define SPI0CFG_NSSIN__SHIFT                0x02 ///< NSS Instantaneous Pin Input                       
#define SPI0CFG_NSSIN__LOW                  0x00 ///< The NSS pin is low.                               
#define SPI0CFG_NSSIN__HIGH                 0x04 ///< The NSS pin is high.                              
                                                                                                        
#define SPI0CFG_SLVSEL__BMASK               0x08 ///< Slave Selected Flag                               
#define SPI0CFG_SLVSEL__SHIFT               0x03 ///< Slave Selected Flag                               
#define SPI0CFG_SLVSEL__NOT_SELECTED        0x00 ///< The Slave is not selected (NSS is high).          
#define SPI0CFG_SLVSEL__SELECTED            0x08 ///< The Slave is selected (NSS is low).               
                                                                                                        
#define SPI0CFG_CKPOL__BMASK                0x10 ///< SPI0 Clock Polarity                               
#define SPI0CFG_CKPOL__SHIFT                0x04 ///< SPI0 Clock Polarity                               
#define SPI0CFG_CKPOL__IDLE_LOW             0x00 ///< SCK line low in idle state.                       
#define SPI0CFG_CKPOL__IDLE_HIGH            0x10 ///< SCK line high in idle state.                      
                                                                                                        
#define SPI0CFG_CKPHA__BMASK                0x20 ///< SPI0 Clock Phase                                  
#define SPI0CFG_CKPHA__SHIFT                0x05 ///< SPI0 Clock Phase                                  
#define SPI0CFG_CKPHA__DATA_CENTERED_FIRST  0x00 ///< Data centered on first edge of SCK period.        
#define SPI0CFG_CKPHA__DATA_CENTERED_SECOND 0x20 ///< Data centered on second edge of SCK period.       
                                                                                                        
#define SPI0CFG_MSTEN__BMASK                0x40 ///< Master Mode Enable                                
#define SPI0CFG_MSTEN__SHIFT                0x06 ///< Master Mode Enable                                
#define SPI0CFG_MSTEN__MASTER_DISABLED      0x00 ///< Disable master mode. Operate in slave mode.       
#define SPI0CFG_MSTEN__MASTER_ENABLED       0x40 ///< Enable master mode. Operate as a master.          
                                                                                                        
#define SPI0CFG_SPIBSY__BMASK               0x80 ///< SPI Busy                                          
#define SPI0CFG_SPIBSY__SHIFT               0x07 ///< SPI Busy                                          
#define SPI0CFG_SPIBSY__NOT_SET             0x00 ///< A SPI transfer is not in progress.                
#define SPI0CFG_SPIBSY__SET                 0x80 ///< A SPI transfer is in progress.                    
                                                                                                        
//------------------------------------------------------------------------------
// SPI0CKR Enums (SPI0 Clock Rate @ 0xA2)
//------------------------------------------------------------------------------
#define SPI0CKR_SPI0CKR__FMASK 0xFF ///< SPI0 Clock Rate
#define SPI0CKR_SPI0CKR__SHIFT 0x00 ///< SPI0 Clock Rate
                                                        
//------------------------------------------------------------------------------
// SPI0CN Enums (SPI0 Control @ 0xF8)
//------------------------------------------------------------------------------
#define SPI0CN_SPIEN__BMASK                  0x01 ///< SPI0 Enable                                       
#define SPI0CN_SPIEN__SHIFT                  0x00 ///< SPI0 Enable                                       
#define SPI0CN_SPIEN__DISABLED               0x00 ///< Disable the SPI module.                           
#define SPI0CN_SPIEN__ENABLED                0x01 ///< Enable the SPI module.                            
                                                                                                         
#define SPI0CN_TXBMT__BMASK                  0x02 ///< Transmit Buffer Empty                             
#define SPI0CN_TXBMT__SHIFT                  0x01 ///< Transmit Buffer Empty                             
#define SPI0CN_TXBMT__NOT_SET                0x00 ///< The transmit buffer is not empty.                 
#define SPI0CN_TXBMT__SET                    0x02 ///< The transmit buffer is empty.                     
                                                                                                         
#define SPI0CN_NSSMD__FMASK                  0x0C ///< Slave Select Mode                                 
#define SPI0CN_NSSMD__SHIFT                  0x02 ///< Slave Select Mode                                 
#define SPI0CN_NSSMD__3_WIRE                 0x00 ///< 3-Wire Slave or 3-Wire Master Mode. NSS signal is 
                                                  ///< not routed to a port pin.                         
#define SPI0CN_NSSMD__4_WIRE_SLAVE           0x04 ///< 4-Wire Slave or Multi-Master Mode. NSS is an input
                                                  ///< to the device.                                    
#define SPI0CN_NSSMD__4_WIRE_MASTER_NSS_LOW  0x08 ///< 4-Wire Single-Master Mode. NSS is an output and   
                                                  ///< logic low.                                        
#define SPI0CN_NSSMD__4_WIRE_MASTER_NSS_HIGH 0x0C ///< 4-Wire Single-Master Mode. NSS is an output and   
                                                  ///< logic high.                                       
                                                                                                         
#define SPI0CN_RXOVRN__BMASK                 0x10 ///< Receive Overrun Flag                              
#define SPI0CN_RXOVRN__SHIFT                 0x04 ///< Receive Overrun Flag                              
#define SPI0CN_RXOVRN__NOT_SET               0x00 ///< A receive overrun did not occur.                  
#define SPI0CN_RXOVRN__SET                   0x10 ///< A receive overrun occurred.                       
                                                                                                         
#define SPI0CN_MODF__BMASK                   0x20 ///< Mode Fault Flag                                   
#define SPI0CN_MODF__SHIFT                   0x05 ///< Mode Fault Flag                                   
#define SPI0CN_MODF__NOT_SET                 0x00 ///< A master collision did not occur.                 
#define SPI0CN_MODF__SET                     0x20 ///< A master collision occurred.                      
                                                                                                         
#define SPI0CN_WCOL__BMASK                   0x40 ///< Write Collision Flag                              
#define SPI0CN_WCOL__SHIFT                   0x06 ///< Write Collision Flag                              
#define SPI0CN_WCOL__NOT_SET                 0x00 ///< A write collision did not occur.                  
#define SPI0CN_WCOL__SET                     0x40 ///< A write collision occurred.                       
                                                                                                         
#define SPI0CN_SPIF__BMASK                   0x80 ///< SPI0 Interrupt Flag                               
#define SPI0CN_SPIF__SHIFT                   0x07 ///< SPI0 Interrupt Flag                               
#define SPI0CN_SPIF__NOT_SET                 0x00 ///< A data transfer has not completed since the last  
                                                  ///< time SPIF was cleared.                            
#define SPI0CN_SPIF__SET                     0x80 ///< A data transfer completed.                        
                                                                                                         
//------------------------------------------------------------------------------
// SPI0DAT Enums (SPI0 Data @ 0xA3)
//------------------------------------------------------------------------------
#define SPI0DAT_SPI0DAT__FMASK 0xFF ///< SPI0 Transmit and Receive Data
#define SPI0DAT_SPI0DAT__SHIFT 0x00 ///< SPI0 Transmit and Receive Data
                                                                       
//------------------------------------------------------------------------------
// TH0 Enums (Timer 0 High Byte @ 0x8C)
//------------------------------------------------------------------------------
#define TH0_TH0__FMASK 0xFF ///< Timer 0 High Byte
#define TH0_TH0__SHIFT 0x00 ///< Timer 0 High Byte
                                                  
//------------------------------------------------------------------------------
// TH1 Enums (Timer 1 High Byte @ 0x8D)
//------------------------------------------------------------------------------
#define TH1_TH1__FMASK 0xFF ///< Timer 1 High Byte
#define TH1_TH1__SHIFT 0x00 ///< Timer 1 High Byte
                                                  
//------------------------------------------------------------------------------
// TL0 Enums (Timer 0 Low Byte @ 0x8A)
//------------------------------------------------------------------------------
#define TL0_TL0__FMASK 0xFF ///< Timer 0 Low Byte
#define TL0_TL0__SHIFT 0x00 ///< Timer 0 Low Byte
                                                 
//------------------------------------------------------------------------------
// TL1 Enums (Timer 1 Low Byte @ 0x8B)
//------------------------------------------------------------------------------
#define TL1_TL1__FMASK 0xFF ///< Timer 1 Low Byte
#define TL1_TL1__SHIFT 0x00 ///< Timer 1 Low Byte
                                                 
//------------------------------------------------------------------------------
// TMR2CN Enums (Timer 2 Control @ 0xC8)
//------------------------------------------------------------------------------
#define TMR2CN_T2XCLK__BMASK          0x01 ///< Timer 2 External Clock Select                    
#define TMR2CN_T2XCLK__SHIFT          0x00 ///< Timer 2 External Clock Select                    
#define TMR2CN_T2XCLK__SYSCLK_DIV_12  0x00 ///< Timer 2 clock is the system clock divided by 12. 
#define TMR2CN_T2XCLK__EXTOSC_DIV_8   0x01 ///< Timer 2 clock is the external oscillator divided 
                                           ///< by 8 (synchronized with SYSCLK).                 
                                                                                                 
#define TMR2CN_TR2__BMASK             0x04 ///< Timer 2 Run Control                              
#define TMR2CN_TR2__SHIFT             0x02 ///< Timer 2 Run Control                              
#define TMR2CN_TR2__STOP              0x00 ///< Stop Timer 2.                                    
#define TMR2CN_TR2__RUN               0x04 ///< Start Timer 2 running.                           
                                                                                                 
#define TMR2CN_T2SPLIT__BMASK         0x08 ///< Timer 2 Split Mode Enable                        
#define TMR2CN_T2SPLIT__SHIFT         0x03 ///< Timer 2 Split Mode Enable                        
#define TMR2CN_T2SPLIT__16_BIT_RELOAD 0x00 ///< Timer 2 operates in 16-bit auto-reload mode.     
#define TMR2CN_T2SPLIT__8_BIT_RELOAD  0x08 ///< Timer 2 operates as two 8-bit auto-reload timers.
                                                                                                 
#define TMR2CN_TF2CEN__BMASK          0x10 ///< Timer 2 Capture Enable                           
#define TMR2CN_TF2CEN__SHIFT          0x04 ///< Timer 2 Capture Enable                           
#define TMR2CN_TF2CEN__DISABLED       0x00 ///< Disable capture mode.                            
#define TMR2CN_TF2CEN__ENABLED        0x10 ///< Enable capture mode.                             
                                                                                                 
#define TMR2CN_TF2LEN__BMASK          0x20 ///< Timer 2 Low Byte Interrupt Enable                
#define TMR2CN_TF2LEN__SHIFT          0x05 ///< Timer 2 Low Byte Interrupt Enable                
#define TMR2CN_TF2LEN__DISABLED       0x00 ///< Disable low byte interrupts.                     
#define TMR2CN_TF2LEN__ENABLED        0x20 ///< Enable low byte interrupts.                      
                                                                                                 
#define TMR2CN_TF2L__BMASK            0x40 ///< Timer 2 Low Byte Overflow Flag                   
#define TMR2CN_TF2L__SHIFT            0x06 ///< Timer 2 Low Byte Overflow Flag                   
#define TMR2CN_TF2L__NOT_SET          0x00 ///< Timer 2 low byte did not overflow.               
#define TMR2CN_TF2L__SET              0x40 ///< Timer 2 low byte overflowed.                     
                                                                                                 
#define TMR2CN_TF2H__BMASK            0x80 ///< Timer 2 High Byte Overflow Flag                  
#define TMR2CN_TF2H__SHIFT            0x07 ///< Timer 2 High Byte Overflow Flag                  
#define TMR2CN_TF2H__NOT_SET          0x00 ///< Timer 2 8-bit high byte or 16-bit value did not  
                                           ///< overflow.                                        
#define TMR2CN_TF2H__SET              0x80 ///< Timer 2 8-bit high byte or 16-bit value          
                                           ///< overflowed.                                      
                                                                                                 
//------------------------------------------------------------------------------
// TMR2H Enums (Timer 2 High Byte @ 0xCD)
//------------------------------------------------------------------------------
#define TMR2H_TMR2H__FMASK 0xFF ///< Timer 2 High Byte
#define TMR2H_TMR2H__SHIFT 0x00 ///< Timer 2 High Byte
                                                      
//------------------------------------------------------------------------------
// TMR2L Enums (Timer 2 Low Byte @ 0xCC)
//------------------------------------------------------------------------------
#define TMR2L_TMR2L__FMASK 0xFF ///< Timer 2 Low Byte
#define TMR2L_TMR2L__SHIFT 0x00 ///< Timer 2 Low Byte
                                                     
//------------------------------------------------------------------------------
// TMR2RLH Enums (Timer 2 Reload High Byte @ 0xCB)
//------------------------------------------------------------------------------
#define TMR2RLH_TMR2RLH__FMASK 0xFF ///< Timer 2 Reload High Byte
#define TMR2RLH_TMR2RLH__SHIFT 0x00 ///< Timer 2 Reload High Byte
                                                                 
//------------------------------------------------------------------------------
// TMR2RLL Enums (Timer 2 Reload Low Byte @ 0xCA)
//------------------------------------------------------------------------------
#define TMR2RLL_TMR2RLL__FMASK 0xFF ///< Timer 2 Reload Low Byte
#define TMR2RLL_TMR2RLL__SHIFT 0x00 ///< Timer 2 Reload Low Byte
                                                                
//------------------------------------------------------------------------------
// TMR3CN Enums (Timer 3 Control @ 0x91)
//------------------------------------------------------------------------------
#define TMR3CN_T3XCLK__BMASK          0x01 ///< Timer 3 External Clock Select                    
#define TMR3CN_T3XCLK__SHIFT          0x00 ///< Timer 3 External Clock Select                    
#define TMR3CN_T3XCLK__SYSCLK_DIV_12  0x00 ///< Timer 3 clock is the system clock divided by 12. 
#define TMR3CN_T3XCLK__EXTOSC_DIV_8   0x01 ///< Timer 3 clock is the external oscillator divided 
                                           ///< by 8 (synchronized with SYSCLK).                 
                                                                                                 
#define TMR3CN_TR3__BMASK             0x04 ///< Timer 3 Run Control                              
#define TMR3CN_TR3__SHIFT             0x02 ///< Timer 3 Run Control                              
#define TMR3CN_TR3__STOP              0x00 ///< Stop Timer 3.                                    
#define TMR3CN_TR3__RUN               0x04 ///< Start Timer 3 running.                           
                                                                                                 
#define TMR3CN_T3SPLIT__BMASK         0x08 ///< Timer 3 Split Mode Enable                        
#define TMR3CN_T3SPLIT__SHIFT         0x03 ///< Timer 3 Split Mode Enable                        
#define TMR3CN_T3SPLIT__16_BIT_RELOAD 0x00 ///< Timer 3 operates in 16-bit auto-reload mode.     
#define TMR3CN_T3SPLIT__8_BIT_RELOAD  0x08 ///< Timer 3 operates as two 8-bit auto-reload timers.
                                                                                                 
#define TMR3CN_TF3CEN__BMASK          0x10 ///< Timer 3 Capture Enable                           
#define TMR3CN_TF3CEN__SHIFT          0x04 ///< Timer 3 Capture Enable                           
#define TMR3CN_TF3CEN__DISABLED       0x00 ///< Disable capture mode.                            
#define TMR3CN_TF3CEN__ENABLED        0x10 ///< Enable capture mode.                             
                                                                                                 
#define TMR3CN_TF3LEN__BMASK          0x20 ///< Timer 3 Low Byte Interrupt Enable                
#define TMR3CN_TF3LEN__SHIFT          0x05 ///< Timer 3 Low Byte Interrupt Enable                
#define TMR3CN_TF3LEN__DISABLED       0x00 ///< Disable low byte interrupts.                     
#define TMR3CN_TF3LEN__ENABLED        0x20 ///< Enable low byte interrupts.                      
                                                                                                 
#define TMR3CN_TF3L__BMASK            0x40 ///< Timer 3 Low Byte Overflow Flag                   
#define TMR3CN_TF3L__SHIFT            0x06 ///< Timer 3 Low Byte Overflow Flag                   
#define TMR3CN_TF3L__NOT_SET          0x00 ///< Timer 3 low byte did not overflow.               
#define TMR3CN_TF3L__SET              0x40 ///< Timer 3 low byte overflowed.                     
                                                                                                 
#define TMR3CN_TF3H__BMASK            0x80 ///< Timer 3 High Byte Overflow Flag                  
#define TMR3CN_TF3H__SHIFT            0x07 ///< Timer 3 High Byte Overflow Flag                  
#define TMR3CN_TF3H__NOT_SET          0x00 ///< Timer 3 8-bit high byte or 16-bit value did not  
                                           ///< overflow.                                        
#define TMR3CN_TF3H__SET              0x80 ///< Timer 3 8-bit high byte or 16-bit value          
                                           ///< overflowed.                                      
                                                                                                 
//------------------------------------------------------------------------------
// TMR3H Enums (Timer 3 High Byte @ 0x95)
//------------------------------------------------------------------------------
#define TMR3H_TMR3H__FMASK 0xFF ///< Timer 3 High Byte
#define TMR3H_TMR3H__SHIFT 0x00 ///< Timer 3 High Byte
                                                      
//------------------------------------------------------------------------------
// TMR3L Enums (Timer 3 Low Byte @ 0x94)
//------------------------------------------------------------------------------
#define TMR3L_TMR3L__FMASK 0xFF ///< Timer 3 Low Byte
#define TMR3L_TMR3L__SHIFT 0x00 ///< Timer 3 Low Byte
                                                     
//------------------------------------------------------------------------------
// TMR3RLH Enums (Timer 3 Reload High Byte @ 0x93)
//------------------------------------------------------------------------------
#define TMR3RLH_TMR3RLH__FMASK 0xFF ///< Timer 3 Reload High Byte
#define TMR3RLH_TMR3RLH__SHIFT 0x00 ///< Timer 3 Reload High Byte
                                                                 
//------------------------------------------------------------------------------
// TMR3RLL Enums (Timer 3 Reload Low Byte @ 0x92)
//------------------------------------------------------------------------------
#define TMR3RLL_TMR3RLL__FMASK 0xFF ///< Timer 3 Reload Low Byte
#define TMR3RLL_TMR3RLL__SHIFT 0x00 ///< Timer 3 Reload Low Byte
                                                                
//------------------------------------------------------------------------------
// CKCON Enums (Clock Control @ 0x8E)
//------------------------------------------------------------------------------
#define CKCON_SCA__FMASK           0x03 ///< Timer 0/1 Prescale                             
#define CKCON_SCA__SHIFT           0x00 ///< Timer 0/1 Prescale                             
#define CKCON_SCA__SYSCLK_DIV_12   0x00 ///< System clock divided by 12.                    
#define CKCON_SCA__SYSCLK_DIV_4    0x01 ///< System clock divided by 4.                     
#define CKCON_SCA__SYSCLK_DIV_48   0x02 ///< System clock divided by 48.                    
#define CKCON_SCA__EXTOSC_DIV_8    0x03 ///< External oscillator divided by 8 (synchronized 
                                        ///< with the system clock).                        
                                                                                            
#define CKCON_T0M__BMASK           0x04 ///< Timer 0 Clock Select                           
#define CKCON_T0M__SHIFT           0x02 ///< Timer 0 Clock Select                           
#define CKCON_T0M__PRESCALE        0x00 ///< Counter/Timer 0 uses the clock defined by the  
                                        ///< prescale field, SCA.                           
#define CKCON_T0M__SYSCLK          0x04 ///< Counter/Timer 0 uses the system clock.         
                                                                                            
#define CKCON_T1M__BMASK           0x08 ///< Timer 1 Clock Select                           
#define CKCON_T1M__SHIFT           0x03 ///< Timer 1 Clock Select                           
#define CKCON_T1M__PRESCALE        0x00 ///< Timer 1 uses the clock defined by the prescale 
                                        ///< field, SCA.                                    
#define CKCON_T1M__SYSCLK          0x08 ///< Timer 1 uses the system clock.                 
                                                                                            
#define CKCON_T2ML__BMASK          0x10 ///< Timer 2 Low Byte Clock Select                  
#define CKCON_T2ML__SHIFT          0x04 ///< Timer 2 Low Byte Clock Select                  
#define CKCON_T2ML__EXTERNAL_CLOCK 0x00 ///< Timer 2 low byte uses the clock defined by the 
                                        ///< T2XCLK bit in TMR2CN.                          
#define CKCON_T2ML__SYSCLK         0x10 ///< Timer 2 low byte uses the system clock.        
                                                                                            
#define CKCON_T2MH__BMASK          0x20 ///< Timer 2 High Byte Clock Select                 
#define CKCON_T2MH__SHIFT          0x05 ///< Timer 2 High Byte Clock Select                 
#define CKCON_T2MH__EXTERNAL_CLOCK 0x00 ///< Timer 2 high byte uses the clock defined by the
                                        ///< T2XCLK bit in TMR2CN.                          
#define CKCON_T2MH__SYSCLK         0x20 ///< Timer 2 high byte uses the system clock.       
                                                                                            
#define CKCON_T3ML__BMASK          0x40 ///< Timer 3 Low Byte Clock Select                  
#define CKCON_T3ML__SHIFT          0x06 ///< Timer 3 Low Byte Clock Select                  
#define CKCON_T3ML__EXTERNAL_CLOCK 0x00 ///< Timer 3 low byte uses the clock defined by the 
                                        ///< T3XCLK bit in TMR3CN.                          
#define CKCON_T3ML__SYSCLK         0x40 ///< Timer 3 low byte uses the system clock.        
                                                                                            
#define CKCON_T3MH__BMASK          0x80 ///< Timer 3 High Byte Clock Select                 
#define CKCON_T3MH__SHIFT          0x07 ///< Timer 3 High Byte Clock Select                 
#define CKCON_T3MH__EXTERNAL_CLOCK 0x00 ///< Timer 3 high byte uses the clock defined by the
                                        ///< T3XCLK bit in TMR3CN.                          
#define CKCON_T3MH__SYSCLK         0x80 ///< Timer 3 high byte uses the system clock.       
                                                                                            
//------------------------------------------------------------------------------
// TCON Enums (Timer 0/1 Control @ 0x88)
//------------------------------------------------------------------------------
#define TCON_IT0__BMASK   0x01 ///< Interrupt 0 Type Select  
#define TCON_IT0__SHIFT   0x00 ///< Interrupt 0 Type Select  
#define TCON_IT0__LEVEL   0x00 ///< /INT0 is level triggered.
#define TCON_IT0__EDGE    0x01 ///< /INT0 is edge triggered. 
                                                             
#define TCON_IE0__BMASK   0x02 ///< External Interrupt 0     
#define TCON_IE0__SHIFT   0x01 ///< External Interrupt 0     
#define TCON_IE0__NOT_SET 0x00 ///< Edge/level not detected. 
#define TCON_IE0__SET     0x02 ///< Edge/level detected      
                                                             
#define TCON_IT1__BMASK   0x04 ///< Interrupt 1 Type Select  
#define TCON_IT1__SHIFT   0x02 ///< Interrupt 1 Type Select  
#define TCON_IT1__LEVEL   0x00 ///< /INT1 is level triggered.
#define TCON_IT1__EDGE    0x04 ///< /INT1 is edge triggered. 
                                                             
#define TCON_IE1__BMASK   0x08 ///< External Interrupt 1     
#define TCON_IE1__SHIFT   0x03 ///< External Interrupt 1     
#define TCON_IE1__NOT_SET 0x00 ///< Edge/level not detected. 
#define TCON_IE1__SET     0x08 ///< Edge/level detected      
                                                             
#define TCON_TR0__BMASK   0x10 ///< Timer 0 Run Control      
#define TCON_TR0__SHIFT   0x04 ///< Timer 0 Run Control      
#define TCON_TR0__STOP    0x00 ///< Stop Timer 0.            
#define TCON_TR0__RUN     0x10 ///< Start Timer 0 running.   
                                                             
#define TCON_TF0__BMASK   0x20 ///< Timer 0 Overflow Flag    
#define TCON_TF0__SHIFT   0x05 ///< Timer 0 Overflow Flag    
#define TCON_TF0__NOT_SET 0x00 ///< Timer 0 did not overflow.
#define TCON_TF0__SET     0x20 ///< Timer 0 overflowed.      
                                                             
#define TCON_TR1__BMASK   0x40 ///< Timer 1 Run Control      
#define TCON_TR1__SHIFT   0x06 ///< Timer 1 Run Control      
#define TCON_TR1__STOP    0x00 ///< Stop Timer 1.            
#define TCON_TR1__RUN     0x40 ///< Start Timer 1 running.   
                                                             
#define TCON_TF1__BMASK   0x80 ///< Timer 1 Overflow Flag    
#define TCON_TF1__SHIFT   0x07 ///< Timer 1 Overflow Flag    
#define TCON_TF1__NOT_SET 0x00 ///< Timer 1 did not overflow.
#define TCON_TF1__SET     0x80 ///< Timer 1 overflowed.      
                                                             
//------------------------------------------------------------------------------
// TMOD Enums (Timer 0/1 Mode @ 0x89)
//------------------------------------------------------------------------------
#define TMOD_T0M__FMASK      0x03 ///< Timer 0 Mode Select                               
#define TMOD_T0M__SHIFT      0x00 ///< Timer 0 Mode Select                               
#define TMOD_T0M__MODE0      0x00 ///< Mode 0, 13-bit Counter/Timer                      
#define TMOD_T0M__MODE1      0x01 ///< Mode 1, 16-bit Counter/Timer                      
#define TMOD_T0M__MODE2      0x02 ///< Mode 2, 8-bit Counter/Timer with Auto-Reload      
#define TMOD_T0M__MODE3      0x03 ///< Mode 3, Two 8-bit Counter/Timers                  
                                                                                         
#define TMOD_CT0__BMASK      0x04 ///< Counter/Timer 0 Select                            
#define TMOD_CT0__SHIFT      0x02 ///< Counter/Timer 0 Select                            
#define TMOD_CT0__TIMER      0x00 ///< Timer Mode. Timer 0 increments on the clock       
                                  ///< defined by T0M in the CKCON register.             
#define TMOD_CT0__COUNTER    0x04 ///< Counter Mode. Timer 0 increments on high-to-low   
                                  ///< transitions of an external pin (T0).              
                                                                                         
#define TMOD_GATE0__BMASK    0x08 ///< Timer 0 Gate Control                              
#define TMOD_GATE0__SHIFT    0x03 ///< Timer 0 Gate Control                              
#define TMOD_GATE0__DISABLED 0x00 ///< Timer 0 enabled when TR0 = 1 irrespective of /INT0
                                  ///< logic level.                                      
#define TMOD_GATE0__ENABLED  0x08 ///< Timer 0 enabled only when TR0 = 1 and /INT0 is    
                                  ///< active as defined by bit IN0PL in register IT01CF.
                                                                                         
#define TMOD_T1M__FMASK      0x30 ///< Timer 1 Mode Select                               
#define TMOD_T1M__SHIFT      0x04 ///< Timer 1 Mode Select                               
#define TMOD_T1M__MODE0      0x00 ///< Mode 0, 13-bit Counter/Timer                      
#define TMOD_T1M__MODE1      0x10 ///< Mode 1, 16-bit Counter/Timer                      
#define TMOD_T1M__MODE2      0x20 ///< Mode 2, 8-bit Counter/Timer with Auto-Reload      
#define TMOD_T1M__MODE3      0x30 ///< Mode 3, Timer 1 Inactive                          
                                                                                         
#define TMOD_CT1__BMASK      0x40 ///< Counter/Timer 1 Select                            
#define TMOD_CT1__SHIFT      0x06 ///< Counter/Timer 1 Select                            
#define TMOD_CT1__TIMER      0x00 ///< Timer Mode. Timer 1 increments on the clock       
                                  ///< defined by T1M in the CKCON register.             
#define TMOD_CT1__COUNTER    0x40 ///< Counter Mode. Timer 1 increments on high-to-low   
                                  ///< transitions of an external pin (T1).              
                                                                                         
#define TMOD_GATE1__BMASK    0x80 ///< Timer 1 Gate Control                              
#define TMOD_GATE1__SHIFT    0x07 ///< Timer 1 Gate Control                              
#define TMOD_GATE1__DISABLED 0x00 ///< Timer 1 enabled when TR1 = 1 irrespective of /INT1
                                  ///< logic level.                                      
#define TMOD_GATE1__ENABLED  0x80 ///< Timer 1 enabled only when TR1 = 1 and /INT1 is    
                                  ///< active as defined by bit IN1PL in register IT01CF.
                                                                                         
//------------------------------------------------------------------------------
// SBUF0 Enums (UART0 Serial Port Data Buffer @ 0x99)
//------------------------------------------------------------------------------
#define SBUF0_SBUF0__FMASK 0xFF ///< Serial Data Buffer
#define SBUF0_SBUF0__SHIFT 0x00 ///< Serial Data Buffer
                                                       
//------------------------------------------------------------------------------
// SCON0 Enums (UART0 Serial Port Control @ 0x98)
//------------------------------------------------------------------------------
#define SCON0_RI__BMASK             0x01 ///< Receive Interrupt Flag                           
#define SCON0_RI__SHIFT             0x00 ///< Receive Interrupt Flag                           
#define SCON0_RI__NOT_SET           0x00 ///< A byte of data has not been received by UART0.   
#define SCON0_RI__SET               0x01 ///< UART0 received a byte of data.                   
                                                                                               
#define SCON0_TI__BMASK             0x02 ///< Transmit Interrupt Flag                          
#define SCON0_TI__SHIFT             0x01 ///< Transmit Interrupt Flag                          
#define SCON0_TI__NOT_SET           0x00 ///< A byte of data has not been transmitted by UART0.
#define SCON0_TI__SET               0x02 ///< UART0 transmitted a byte of data.                
                                                                                               
#define SCON0_RB8__BMASK            0x04 ///< Ninth Receive Bit                                
#define SCON0_RB8__SHIFT            0x02 ///< Ninth Receive Bit                                
#define SCON0_RB8__CLEARED_TO_0     0x00 ///< In Mode 0, the STOP bit was 0. In Mode 1, the 9th
                                         ///< bit was 0.                                       
#define SCON0_RB8__SET_TO_1         0x04 ///< In Mode 0, the STOP bit was 1. In Mode 1, the 9th
                                         ///< bit was 1.                                       
                                                                                               
#define SCON0_TB8__BMASK            0x08 ///< Ninth Transmission Bit                           
#define SCON0_TB8__SHIFT            0x03 ///< Ninth Transmission Bit                           
#define SCON0_TB8__CLEARED_TO_0     0x00 ///< In Mode 1, set the 9th transmission bit to 0.    
#define SCON0_TB8__SET_TO_1         0x08 ///< In Mode 1, set the 9th transmission bit to 1.    
                                                                                               
#define SCON0_REN__BMASK            0x10 ///< Receive Enable                                   
#define SCON0_REN__SHIFT            0x04 ///< Receive Enable                                   
#define SCON0_REN__RECEIVE_DISABLED 0x00 ///< UART0 reception disabled.                        
#define SCON0_REN__RECEIVE_ENABLED  0x10 ///< UART0 reception enabled.                         
                                                                                               
#define SCON0_MCE__BMASK            0x20 ///< Multiprocessor Communication Enable              
#define SCON0_MCE__SHIFT            0x05 ///< Multiprocessor Communication Enable              
#define SCON0_MCE__MULTI_DISABLED   0x00 ///< Ignore level of 9th bit / Stop bit.              
#define SCON0_MCE__MULTI_ENABLED    0x20 ///< RI is set and an interrupt is generated only when
                                         ///< the stop bit is logic 1 (Mode 0) or when the 9th 
                                         ///< bit is logic 1 (Mode 1).                         
                                                                                               
#define SCON0_SMODE__BMASK          0x80 ///< Serial Port 0 Operation Mode                     
#define SCON0_SMODE__SHIFT          0x07 ///< Serial Port 0 Operation Mode                     
#define SCON0_SMODE__8_BIT          0x00 ///< 8-bit UART with Variable Baud Rate (Mode 0).     
#define SCON0_SMODE__9_BIT          0x80 ///< 9-bit UART with Variable Baud Rate (Mode 1).     
                                                                                               
//------------------------------------------------------------------------------
// VDM0CN Enums (Supply Monitor Control @ 0xFF)
//------------------------------------------------------------------------------
#define VDM0CN_VDDSTAT__BMASK  0x40 ///< Supply Status                                   
#define VDM0CN_VDDSTAT__SHIFT  0x06 ///< Supply Status                                   
#define VDM0CN_VDDSTAT__BELOW  0x00 ///< VDD is at or below the supply monitor threshold.
#define VDM0CN_VDDSTAT__ABOVE  0x40 ///< VDD is above the supply monitor threshold.      
                                                                                         
#define VDM0CN_VDMEN__BMASK    0x80 ///< Supply Monitor Enable                           
#define VDM0CN_VDMEN__SHIFT    0x07 ///< Supply Monitor Enable                           
#define VDM0CN_VDMEN__DISABLED 0x00 ///< Supply Monitor Disabled.                        
#define VDM0CN_VDMEN__ENABLED  0x80 ///< Supply Monitor Enabled.                         
                                                                                         
//------------------------------------------------------------------------------
// REF0CN Enums (Voltage Reference Control @ 0xD1)
//------------------------------------------------------------------------------
#define REF0CN_TEMPE__BMASK         0x04 ///< Temperature Sensor Enable                         
#define REF0CN_TEMPE__SHIFT         0x02 ///< Temperature Sensor Enable                         
#define REF0CN_TEMPE__TEMP_DISABLED 0x00 ///< Disable the Temperature Sensor.                   
#define REF0CN_TEMPE__TEMP_ENABLED  0x04 ///< Enable the Temperature Sensor.                    
                                                                                                
#define REF0CN_REFSL__FMASK         0x18 ///< Voltage Reference Select                          
#define REF0CN_REFSL__SHIFT         0x03 ///< Voltage Reference Select                          
#define REF0CN_REFSL__VREF_PIN      0x00 ///< The ADC0 voltage reference is the P0.0/VREF pin.  
#define REF0CN_REFSL__VDD_PIN       0x08 ///< The ADC0 voltage reference is the VDD pin.        
#define REF0CN_REFSL__INTERNAL_LDO  0x10 ///< The ADC0 voltage reference is the internal 1.8 V  
                                         ///< digital supply voltage.                           
#define REF0CN_REFSL__INTERNAL_VREF 0x18 ///< The ADC0 voltage reference is the internal voltage
                                         ///< reference.                                        
                                                                                                
#define REF0CN_GNDSL__BMASK         0x20 ///< Analog Ground Reference                           
#define REF0CN_GNDSL__SHIFT         0x05 ///< Analog Ground Reference                           
#define REF0CN_GNDSL__GND_PIN       0x00 ///< The ADC0 ground reference is the GND pin.         
#define REF0CN_GNDSL__AGND_PIN      0x20 ///< The ADC0 ground reference is the P0.1/AGND pin.   
                                                                                                
#define REF0CN_IREFLVL__BMASK       0x80 ///< Internal Voltage Reference Level                  
#define REF0CN_IREFLVL__SHIFT       0x07 ///< Internal Voltage Reference Level                  
#define REF0CN_IREFLVL__1P65        0x00 ///< The internal reference operates at 1.65 V nominal.
#define REF0CN_IREFLVL__2P4         0x80 ///< The internal reference operates at 2.4 V nominal. 
                                                                                                
//------------------------------------------------------------------------------
// REG0CN Enums (Voltage Regulator Control @ 0xC9)
//------------------------------------------------------------------------------
#define REG0CN_STOPCF__BMASK    0x08 ///< Stop Mode Configuration                           
#define REG0CN_STOPCF__SHIFT    0x03 ///< Stop Mode Configuration                           
#define REG0CN_STOPCF__ACTIVE   0x00 ///< Regulator is still active in stop mode. Any       
                                     ///< enabled reset source will reset the device.       
#define REG0CN_STOPCF__SHUTDOWN 0x08 ///< Regulator is shut down in stop mode. Only the /RST
                                     ///< pin or power cycle can reset the device.          
                                                                                            
//------------------------------------------------------------------------------
// WDTCN Enums (Watchdog Timer Control @ 0x97)
//------------------------------------------------------------------------------
#define WDTCN_WDTCN__FMASK 0xFF ///< WDT Control
#define WDTCN_WDTCN__SHIFT 0x00 ///< WDT Control
                                                
#endif // SI_C8051F850_REGISTER_ENUMS_H
//-eof--------------------------------------------------------------------------

