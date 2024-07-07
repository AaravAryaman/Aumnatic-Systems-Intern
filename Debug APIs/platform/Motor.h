/*
 PlutoX API V.1.0
 */


#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum motor {

    M1 = 0,
    M2,
    M3,
    M4,
    M7,
    M8,
    M6,
    M5

} motor_e;

class Motor_P {

public:

    void init(motor_e motor);
    void set(motor_e motor, int16_t pwmValue);

};

extern Motor_P Motor;

#ifdef __cplusplus
}
#endif

