#ifndef xOC01_h
#define xOC01_h

#include "xCore.h"


class xSG03 : public xCoreClass
{
public:
	xSG03();

	void begin();
	uint16_t read();

private:
	uint8_t ADC_I2C_ADDRESS;
};

#endif
