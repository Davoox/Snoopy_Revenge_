//
// Created by Davoox on 12/12/2023.
//
#include "utile.h"

int horloge(){
    clock_t temps;
    temps = clock()/1000;
    return temps;
}

int temps_restant(int temps_init) {
    int temps = 60 - (horloge() - temps_init);
    return temps;
}

void timer (int temps_init) {
    gotoligcol(11,0);
    printf("Il te reste %d secondes !", temps_restant(temps_init));
}
