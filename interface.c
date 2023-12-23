//
// Created by Davoox on 15/12/2023.
//
#include "utile.h"

void clear_interface(int x,int y) {
    int i, j;
    for (i=0;i<LARGEUR;i++) {
        for (j=0;j<LONGUEUR;j++) {
            gotoligcol(i,j);
            printf(" ");
        }
        printf("\n");
    }
    gotoligcol(y,x);
}

