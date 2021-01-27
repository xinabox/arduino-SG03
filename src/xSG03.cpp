#include "xSG03.h"

xSG03::xSG03()
{
	ADC_I2C_ADDRESS = 0x55;
}

void xSG03::begin()
{
	xCore.write8(ADC_I2C_ADDRESS, 0x02, 0x80);
}
uint16_t xSG03::read()
{
	uint16_t reg = (xCore.read16(ADC_I2C_ADDRESS, 0x00) >> 2);
	uint16_t res = reg && 0x3FF;
	return res;
}

