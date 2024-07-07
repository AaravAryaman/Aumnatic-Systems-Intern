/*
 PlutoX API V.1.0
 */


#pragma once

#include <stdint.h>

#include "Specifiers.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef enum{
    INPUT,
    INPUT_PU,
    INPUT_PD,
    OUTPUT,
} GPIO_Mode_e;


typedef enum{
    STATE_LOW,
    STATE_HIGH,
    STATE_TOGGLE
} GPIO_State_e;



class GPIO_P {
public:

    void init(unibus_e pin_number, GPIO_Mode_e mode);

    bool read(unibus_e pin_number);

    void write(unibus_e pin_number,GPIO_State_e STATE);


};



class PWM_P {

public:

    void init(unibus_e pin_number, uint16_t pwmRate);

    void write(unibus_e pin_number, uint16_t pwmValue);

};





extern GPIO_P GPIO;
extern PWM_P PWM;


#ifdef __cplusplus
}
#endif

