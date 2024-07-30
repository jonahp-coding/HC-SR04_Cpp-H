#ifndef _HC_SR04_H
#define _HC_SR04_H

#include <Arduino.h>

//-----------------------------------------------------------------------------------------
// class for the 'HC_SR04' ultrasonic range sensor
// 
// Creating object class for HC_SR04 ultrasonic range sensor
// 
// Author J.A.P

class hc_sr04 {

  public:

  hc_sr04();

  void init();

  uint16_t get_distance();

  void set_target_distance();

  uint8_t get_trig();
  
  uint8_t get_echo());

  uint16_t get_target_distance();

  virtual ~hc_sr04();

  private:

    uint8_t trig_pin;
    uint8_t echo_pin;
    uint32_t duration;
    uint16_t distance;
    uint16_t target_distance;
}

#endif _HC_SR04_H // _HC_SR04_H