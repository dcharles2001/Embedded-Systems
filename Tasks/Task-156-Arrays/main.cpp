#include "../lib/uopmsb/uop_msb_2_0_0.h"
#include <chrono>
#include <cstdint>
using namespace uop_msb_200;
using namespace chrono;

//Output
DigitalOut redLED(TRAF_RED1_PIN);
DigitalOut yellowLED(TRAF_YEL1_PIN);
DigitalOut greenLED(TRAF_GRN1_PIN);

//Analogue Inputs
AnalogIn ldr(AN_LDR_PIN);
Buzzer buzz;

unsigned short samples[100];

int main()
{
    // Automatic headlamp 
    while (true) {

        for (unsigned int m=0; m<100; m++) {
            unsigned short ldrVal   = ldr.read_u16();
            samples[m] = ldrVal;
            wait_us(10000);          // 10ms
        }

        // TASK a. Calculate the average value in samples

        // TASK b. Display to 1dp

        // TASK c. Switch green LED on when dark;

    }  
}


