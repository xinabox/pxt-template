#ifndef xChip_h
#define xChip_h
#include "pxt.h"
//#include "MicroBitI2C.h"
#include "Pin.h"
#include "I2C.h"
#ifndef byte
typedef uint8_t byte;
#endif

#define APDS9960_I2C_ADDR 0x72
class myClass
{
public:
    myClass();
    int begin(int var);
    uint8_t readDeviceID(uint8_t deviceAddress, uint8_t deviceIDReg);
};
#endif
