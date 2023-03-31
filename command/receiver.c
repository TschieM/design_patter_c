#include <stdio.h>
#include "receiver.h"

void GetVersion() {
    printf("%d.%d.%d\n", 0,0,1);
}

void ToggleLED(const int n) {
    static int led = 0;
    for(int i=0; i<n; i++) {
        printf("LED status: %d\n", led);
        led = 1 - led;
    }
}