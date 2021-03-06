#include "stm32f4xx.h"
#include "usart_print.h"
#include "ADXL345.h"
#include "HMC58X3.h"
#include "ITG3200.h"
#include <math.h>
#include "Kalman.h"
#define USARTx USART1
#define PI 3.14F
#ifdef __cplusplus
extern "C"{
#endif
void IMU_Initialisation();
void kalman_initialization();
int accel_rollpitch(void *accel_object,float *roll,float *pitch);
int gyro_rollpitch(void *gyro_object,float *gyro_roll,float *gyro_pitch);
int magnet_yaw(void *magnet,float *mag_yaw);
int kalman_roll_pitch(float *final_roll,float *final_pitch);

#ifdef __cplusplus
}
#endif
