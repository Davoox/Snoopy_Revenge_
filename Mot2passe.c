//
// Created by Davoox on 10/12/2023.
//
#include "utile.h"

int Mot2passe() {
    int choixmdp;
    int mdp1 = 1109;
    int mdp2 = 1311;
    int mdp3 = 420;

    printf("rentrez le mot mot de passe : ");
    scanf("%d",&choixmdp);

    if (choixmdp == mdp1){
        printf("Go au niveau 1");
        Sleep(2000);
        return 1;
    }
    else if (choixmdp == mdp2){
        printf("Go au niveau 2");
        Sleep(2000);
        return 2;
    }
    else if (choixmdp == mdp3){
        printf("Go au niveau 3");
        Sleep(2000);
        return 3;
    }
    else {
        return 0;
    }

}