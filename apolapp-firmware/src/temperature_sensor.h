#include <Arduino.h>
#ifndef TEMPERATURE_SENSOR_H_
#define TEMPERATURE_SENSOR_H_

namespace _10klab{
    namespace temperature{
        void initializeTempSensors();
        float readSensorTemperature(char sensor);
        
    }
}

#endif