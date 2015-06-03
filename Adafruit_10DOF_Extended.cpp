#include <Adafruit_10DOF_Extended.h>

Adafruit_10DOF_Extended::Adafruit_10DOF_Extended(void):
  
{

}


/*
 * Compute orientation using gyros
 */
/*
bool Adafruit_Simple_AHRS::getGyroOrientation(sensors_vec_t* orientation, unsigned long dt)
{
  // Validate input and available sensors.
  if (orientation == NULL || _gyro == NULL) return false;

  sensors_event_t gyro_event;
  _gyro->getEvent(&gyro_event);

  float const PI_F = 3.14159265F; 

  float dRoll = gyro_event.gyro.roll;
  float dPitch = gyro_event.gyro.pitch;
  float dHeading = gyro_event.gyro.heading;

  orientation->roll += (gyro_event.gyro.roll - gyro_zero_level.roll) * 180/PI_F * dt/1000;

  orientation->pitch += (gyro_event.gyro.pitch - gyro_zero_level.pitch) * 180/PI_F * dt/1000;

  orientation->heading += (gyro_event.gyro.heading - gyro_zero_level.heading) * 180/PI_F *dt/1000;

  return true;
}
*/

/*
bool Adafruit_Simple_AHRS::getGyroZeroLevel(void)
{
  //if(zeroLevel == NULL) return false;

  float rollsum = 0;
  float pitchsum = 0;
  float headingsum = 0;

  sensors_event_t zeroEvent;

  for (short i = 0; i < 100; i++)
  {
    _gyro->getEvent(&zeroEvent);
    rollsum += zeroEvent.gyro.roll;
    pitchsum += zeroEvent.gyro.pitch;
    headingsum += zeroEvent.gyro.heading;
  }

  gyro_zero_level.roll = rollsum/100;
  gyro_zero_level.pitch = pitchsum/100;
  gyro_zero_level.heading = headingsum/100;

  return true;

}
*/