//
// Created by Davoox on 19/12/2023.
//
#include "utile.h"

int pause(char key, int temps_init) {
    int t1, t2;
    if (key == 'p') { // Si p est frappé la pause est déclanchée
        t1=horloge();
        gotoligcol(13, 4); // Appelle une fonction qui déplace le curseur à la ligne 13 et à la colonne 4 sur la console.
        printf("\tLe jeu est en pause...\n");
        printf("\tAppuyez sur P pour reprendre...\n");

        while (_getch() != 'p') {} // Attend jusqu'à ce que la touche p soit enfoncée pour reprendre le jeu.
        printf("\033[2K"); // Efface la ligne actuelle dans la console.
        t2=horloge();
        return temps_init+(t2-t1);
    }
    else {
        return temps_init;
    }
}
