#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float distance,m,ft,in,cm;
    scanf("%f",&distance);
    m=distance*1000;
    ft=distance*3280.84;
    in=distance*39370.1;
    cm=distance*100000;
    printf("%.2f m\n%.2f ft\n%.2f in\n%.2f cm",m,ft,in,cm);
    return 0;
}
