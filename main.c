//
// Created by Davoox on 07/12/2023.
//
#include "utile.h"

int main()
{
    printf("Bienvenue dans le jeu !\n");
    Sleep(2000);

    int choix,c, l;
    do {
        printf("\nQue voulez vous faire ?\n");
        printf("\n\t 1 - Jeu de base \n ");
        printf("\t 2 - Charger une partie \n ");
        printf("\t 3 - Mot de passe \n ");
        printf("\t 4 - Liste MDP \n ");
        printf("\t 5 - Informations du Jeu \n");
        printf("\t 6 - Quittez\n \n Votre Choix : ");
        scanf("%d", &choix);
        for (c=0; c<NB_COLONNES; c++) { //pour remettre a 0 les lvl
            for (l=0; l<NB_LIGNES; l++) {
                niv_1[l][c]=template_niv_1[l][c];
                niv_2[l][c]=template_niv_2[l][c];
                niv_3[l][c]=template_niv_3[l][c];
            }
        }
        switch (choix) {
            case 1:
                system("cls");
                lvl(niv_1, 9, 8, 9, 5, 1, 120, 0);
                break;

            case 2:
                //charger(niv, t, x, y, i, j, oiseaux, level_number);
                //niveau(lvl, x, y, j,i, level_number, t, oiseaux);
                break;

            case 3:
                system("cls");
                switch (Mot2passe()){
                    case 1:
                        lvl(niv_1, 9, 8, 5, 9, 1, 120,0);
                        break;
                    case 2:
                        lvl(niv_2,17,2,17,8,2,120,0);
                        break;
                    case 3:
                        lvl(niv_3,1,1,10,4,3, 120,0);
                        break;
                    case 0:
                        printf("mauvais mot de passe ! ");
                        break;
                    default:
                        printf("Erreur");
                        break;
                }

                break;

            case 4:
                system("cls");
                printf(" Niveau 1 : 1109 \n");
                printf(" Niveau 2 : 1311 \n");
                printf(" Niveau 3 : 420 \n");
                Sleep(3000);
                system("cls");
                break;

            case 5:
                system("cls");
                printf("Voici les touches du jeu :\n"
                       "\n"
                       "\"fleche haut\": avancer vers le haut\n"
                       "\"fleche bas\": avancer vers le bas\n"
                       "\"fleche gauche\": avancer vers la gauche\n"
                       "\"fleche droite\": avancer vers la droite\n"
                       "\n"
                       "\"p\": mettre le jeux en pause\n"
                       "\"espace\": permet de casser les blocks '9'\n"
                       "\"f\": permet de sauvegarder la partie");
                sleep(3000);
                system("cls");
                break;

            case 6:
                printf("Adieu !!");
                break;

            default :
                printf("Pas possible");
        }
    } while (choix != 6);
    return 0;
}