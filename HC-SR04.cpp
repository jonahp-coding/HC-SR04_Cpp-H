//-----------------------------------------------------------------------------------------
// HC-SR04.cpp
//

#include "HC-SR04.h"

//-----------------------------------------------------------------------------------------
// hc_sr04::hc_sr04 (constructor)
//
hc_sr04::hc_sr04(uint8_t trig_pin, uuint8_t echo_pin) :
  trig_pin(trig_pin), echo_pin(echo_pin)
{

} // end of hc_sr04::hc_sr04 (constructor)
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// hc_sr04::init
/**
 * ???
 */

void hc_sr04::init() {

  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);

} // end of hc_sr04::init
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// hc_sr04::get_distance
/**
 * ???
 */

uint16_t hc_sr04::get_distance() {

  // Reading from Range sensor...
  // Clears the trig_pin
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  // Sets the trig_pin on HIGH state for 10 micro seconds
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  // Reads the echo_pin, returns the sound wave travel time in microseconds
  duration = pulseIn(echo_pin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;

  return distance;

} // end of hc_sr04::get_distance
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// hc_sr04::set_target_distance
/**
 * ???
 */

uint16_t hc_sr04::set_target_distance(uin16_t target_distance) {

  this->target_distance = target_distance; // this-> ???

} // end of hc_sr04::set_target_distance
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// hc_sr04::get_trig
/**
 * ???
 */

uint16_t hc_sr04::get_trig() {

  return trig_pin;

} // end of hc_sr04::get_trig
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// hc_sr04::get_echo
/**
 * ???
 */

uint16_t hc_sr04::get_echo() {

  return echo_pin;

} // end of hc_sr04::get_echo
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// hc_sr04::get_target_distance
/**
 * ???
 */

uint16_t hc_sr04::get_target_distance() {

  return target_distance;

} // end of hc_sr04::get_target_distance
//-----------------------------------------------------------------------------------------
