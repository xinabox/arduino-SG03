#include <xSG03.h>
#include <xCore.h>

xSG03 SG03;

void setup()
{
    Serial.begin(115200);
    Wire.begin();
    SG03.begin();
}

void loop()
{
    Serial.println(SG03.read());
    delay(300);
}