
#include "AudioTools.h"
#include "ESP_I2S.h"
#include "BluetoothA2DPSink.h"


#define I2S_LRC 33
#define I2S_BCLK 32
#define I2S_DIN 26

// #define I2S_LRC 14
// #define I2S_BCLK 27
// #define I2S_DIN 26


// I2SClass i2sCls;e
I2SStream i2s;
BluetoothA2DPSink a2dp_sink(i2s);

void setup()
{
    Serial.begin(115200);

    auto cfg = i2s.defaultConfig();
    cfg.pin_bck = I2S_BCLK;
    cfg.pin_ws = I2S_LRC;
    cfg.pin_data = I2S_DIN;
    i2s.begin(cfg);
    a2dp_sink.start("RadioBT", false);
    a2dp_sink.set_volume(64);
    Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop()
{

}