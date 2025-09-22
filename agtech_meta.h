#pragma once

#define agtech_pullup_default = 2490
#define AGTECH_LS_1 D7
// pin 15/black35
#define AGTECH_LS_2 G9

// pin 4/black35
#define AGTECH_LS_3 G10

// pin 16/black35
#define AGTECH_LS_4 G11

// pin 5/black35
#define AGTECH_LS_5 G12

// pin 6/black35
#define AGTECH_LS_6 G13

// pin 7/black35
#define AGTECH_LS_7 G14
#define AGTECH_LS_8 B4
#define AGTECH_LS_9 B5

// pin 20/black35
#define AGTECH_LS_10 B6
#define AGTECH_LS_11 B7
#define AGTECH_LS_12 B8

// pin 10/black35
#define AGTECH_LS_13 B9
// pin 11/black35
#define AGTECH_LS_14 E0
// pin 12/black35
#define AGTECH_LS_15 E1
// pin 23/black35
#define AGTECH_LS_16 E2


// pin 2/black35
#define AGTECH_HS_1 A9

// pin 1/black35
#define AGTECH_HS_2 A8

#define AGTECH_HS_3 D15

#define AGTECH_HS_4 D14

// pin 35/black35
#define AGTECH_IGN_1 D4

// pin 34/black35
#define AGTECH_IGN_2 D3

// pin 22/black35
#define AGTECH_IGN_3 C9
#define AGTECH_IGN_4 C8
#define AGTECH_IGN_5 C7
#define AGTECH_IGN_6 G8
#define AGTECH_IGN_7 G7
#define AGTECH_IGN_8 G6
#define AGTECH_IGN_9 G5
#define AGTECH_IGN_10 G4
#define AGTECH_IGN_11 G3
#define AGTECH_IGN_12 G2

// Analog Temp 1 = PC4
#define AGTECH_IN_ANALOG_TEMP_1 EFI_ADC_14

// IAT = Analog Temp 2 = PC5
#define AGTECH_IN_ANALOG_TEMP_2 EFI_ADC_15
#define AGTECH_IN_IAT AGTECH_IN_ANALOG_TEMP_2

// CLT = Analog Temp 3 = PB0
#define AGTECH_IN_ANALOG_TEMP_3 EFI_ADC_8
#define AGTECH_IN_CLT AGTECH_IN_ANALOG_TEMP_3

// Analog Temp 4 = PB1
#define AGTECH_IN_ANALOG_TEMP_4 EFI_ADC_9

// MAP = Analog volt 1 = PC0
#define AGTECH_IN_ANALOG_VOLT_1 EFI_ADC_10
#define AGTECH_IN_MAP AGTECH_IN_ANALOG_VOLT_1

// TPS = Analog volt 2 = PC1
#define AGTECH_IN_ANALOG_VOLT_2 EFI_ADC_11
#define AGTECH_IN_TPS AGTECH_IN_ANALOG_VOLT_2

// PC2
#define AGTECH_IN_ANALOG_VOLT_3 EFI_ADC_12
#define AGTECH_IN_TPS1_2 AGTECH_IN_ANALOG_VOLT_3

// PC3
#define AGTECH_IN_ANALOG_VOLT_4 EFI_ADC_13
#define AGTECH_IN_TPS2_1 AGTECH_IN_ANALOG_VOLT_4

// PA0
#define AGTECH_IN_ANALOG_VOLT_5 EFI_ADC_0

// PA1
#define AGTECH_IN_ANALOG_VOLT_6 EFI_ADC_1
#define AGTECH_IN_AV_6_DIGITAL Gpio::A1

// PA2
#define AGTECH_IN_ANALOG_VOLT_7 EFI_ADC_2
#define AGTECH_IN_PPS2 AGTECH_IN_ANALOG_VOLT_7

// PA3
#define AGTECH_IN_ANALOG_VOLT_8 EFI_ADC_3
#define AGTECH_IN_AV_8_DIGITAL Gpio::A3

// PA4
#define AGTECH_IN_ANALOG_VOLT_9 EFI_ADC_4
#define AGTECH_IN_PPS AGTECH_IN_ANALOG_VOLT_9

// PA5
#define AGTECH_IN_ANALOG_VOLT_10 EFI_ADC_5
#define AGTECH_IN_AV_10_DIGITAL Gpio::A5

// PA6
#define AGTECH_IN_ANALOG_VOLT_11 EFI_ADC_6
#define AGTECH_IN_AV_11_DIGITAL Gpio::A6

#define AGTECH_VR_1 Gpio::E7
#define AGTECH_VR_2 Gpio::E8

#define AGTECH_DIGITAL_1 Gpio::C6
#define AGTECH_DIGITAL_2 Gpio::E11
#define AGTECH_DIGITAL_3 Gpio::E12
#define AGTECH_DIGITAL_4 Gpio::E14
#define AGTECH_DIGITAL_5 Gpio::E13
#define AGTECH_DIGITAL_6 Gpio::E15

//void setProteusEtbIO();