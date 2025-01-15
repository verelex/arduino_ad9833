#include <SimpleAD9833.h>

const uint8_t CS_PIN1 = 10; // Chip select pin for the first AD9833
const uint8_t CS_PIN2 = 4; // Chip select pin for the second AD9833
SimpleAD9833 myWaveform1(CS_PIN1);
SimpleAD9833 myWaveform2(CS_PIN2);

void setup() {
    Serial.begin(115200);
    SPI.begin();
    myWaveform1.begin();
    myWaveform1.setWaveform(SINE, 640000); // Set waveform to sine in kHz
    myWaveform2.begin();
    myWaveform2.setWaveform(SINE, 1344000); // Set waveform to sine in kHz
}

void loop() {
    // Additional code for operation
}