#include "mbed.h"

DigitalOut red(LED1);

int main() {
    while(1) {
        red = 1;
        wait(0.5);
        red = 0;
        wait(0.5);
    }
}
