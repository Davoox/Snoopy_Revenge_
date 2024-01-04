//
// Created by Davoox on 17/12/2023.
//

// Bibli
#include <stdio.h> 
#include <windows.h> 
#include <unistd.h> 
#include <conio.h> 
#include <time.h> 
#define NB_COLONNES 20 
#define NB_LIGNES 10
#define LONGUEUR 200 
#define LARGEUR 30 

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
