#include "pch.h"
#include "board_overrides.h"
#include "agtech_meta.h"


static void setInjectorPins() {
	engineConfiguration->injectionPins[0] = Gpio::AGTECH_LS_1;
	engineConfiguration->injectionPins[1] = Gpio::AGTECH_LS_2;
	engineConfiguration->injectionPins[2] = Gpio::AGTECH_LS_3;
	engineConfiguration->injectionPins[3] = Gpio::AGTECH_LS_4;
}

static void setIgnitionPins() {
	engineConfiguration->ignitionPins[0] = Gpio::AGTECH_IGN_2;
	engineConfiguration->ignitionPins[1] = Gpio::AGTECH_IGN_3;
	engineConfiguration->ignitionPins[2] = Gpio::AGTECH_IGN_3;
	engineConfiguration->ignitionPins[3] = Gpio::AGTECH_IGN_4;
}

static const brain_pin_e injPins[] = {
    Gpio::AGTECH_LS_1,
	Gpio::AGTECH_LS_2,
	Gpio::AGTECH_LS_3,
	Gpio::AGTECH_LS_4,
	Gpio::AGTECH_LS_5,
	Gpio::AGTECH_LS_6,
	Gpio::AGTECH_LS_7,
	Gpio::AGTECH_LS_8,
	Gpio::AGTECH_LS_9,
	Gpio::AGTECH_LS_10,
	Gpio::AGTECH_LS_11,
	Gpio::AGTECH_LS_12
};

Gpio getCommsLedPin() {
	return Gpio::D15;
}

Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}

Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}
void customBoardDefaultConfiguration() {
	engineConfiguration->vbattDividerCoeff = 6.5f;
	engineConfiguration->vbattAdcChannel = EFI_ADC_11;
	setIgnitionPins();
	setInjectorPins();
}

static Gpio OUTPUTS[] = {
    Gpio::D11, // 
    Gpio::D12, // 
    Gpio::D13, //
    Gpio::D14, //
    Gpio::E11, //
    Gpio::E12,
};

int getBoardMetaOutputsCount() {
    return efi::size(OUTPUTS);
}

Gpio* getBoardMetaOutputs() {
    return OUTPUTS;
}

void setCustomVbatt() {
	// set vbatt_divider 5.835
	// 33k / 6.8k
	engineConfiguration->vbattDividerCoeff = 10.2; // 5.835

	engineConfiguration->vbattAdcChannel = EFI_ADC_11;

}



// void setBoardDefaultConfiguration() {
// 	engineConfiguration->map.sensor.hwChannel = EFI_ADC_0;
// 	engineConfiguration->clt.adcChannel = EFI_ADC_1;
// 	engineConfiguration->iat.adcChannel = EFI_ADC_13;
// 	engineConfiguration->afr.hwChannel = EFI_ADC_14;

// 	engineConfiguration->vbattAdcChannel = EFI_ADC_12;
// 	engineConfiguration->analogInputDividerCoefficient = 10.2f;
	
// 	engineConfiguration->triggerInputPins[0] = Gpio::B1;
// 	engineConfiguration->triggerInputPins[1] = Gpio::A6;
// }


void setup_custom_board_overrides() {
	//custom_board_DefaultConfiguration = customBoardDefaultConfiguration;
	 setIgnitionPins();
	 setInjectorPins();
	 setCustomVbatt();
}
