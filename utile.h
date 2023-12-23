//
// Created by Davoox on 17/12/2023.
//

// Bibli
#include <stdio.h> // Fonctions standard
#include <windows.h> // Fonctions spécifiques à Windows
#include <unistd.h> // Fonctions UNIX
#include <conio.h> // Fonction pour interagire avec la console
#include <time.h> // Fonctions gestion du temps
#define NB_COLONNES 20 // constante LIGNES avec 20 valeurs
#define NB_LIGNES 10 // constante COLONNES avec 10 valeurs
#define LONGUEUR 200 // constante LONGUEUR avec 100 valeurs
#define LARGEUR 30 //  constante LARGEUR avec 30 valeurs

//Tableau
extern int template_niv_1[NB_LIGNES][NB_COLONNES];
extern int template_niv_2[NB_LIGNES][NB_COLONNES];
extern int template_niv_3[NB_LIGNES][NB_COLONNES];
extern int niv_1[NB_LIGNES][NB_COLONNES];
extern int niv_2[NB_LIGNES][NB_COLONNES];
extern int niv_3[NB_LIGNES][NB_COLONNES];


//Fonctions
void life(int pv);
void timer(int temps_init);
int temps_restant(int temps_init);
int horloge();
int Mot2passe ();
void lvl(int niv[NB_LIGNES][NB_COLONNES], int x_depart_snoopy, int y_depart_snoopy, int x_depart_ball, int y_depart_ball, int level_number, int t, int oiseaux);
void gotoligcol( int lig, int col );
int random_nb_between(int a, int b);
int clock_ball(clock_t init_ball);
int dghb();
int pause(char key, int temps_init);
void clear_interface();
void sauvegarder(int niv[NB_LIGNES][NB_COLONNES], int t, int x, int y, int i, int j, int oiseaux, int level_number);
