#include "utile.h"
void sauvegarder(int niv[10][20], int t, int x, int y, int i, int j, int oiseaux, int level_number) {
    int c1,l1;

    FILE *fichier=fopen("MaSauvegarde.txt","w");
    fprintf(fichier, "%d\n",t);
    fprintf(fichier, "%d\n",x);
    fprintf(fichier, "%d\n",y);
    fprintf(fichier, "%d\n",i);
    fprintf(fichier, "%d\n",j);
    fprintf(fichier, "%d\n",oiseaux);
    fprintf(fichier, "%d\n",level_number);
    for (c1=0;c1<NB_LIGNES;c1++) {
        for (l1=0;l1<NB_COLONNES;l1++)
            fprintf(fichier,"%d ",niv[c1][l1]);
        fprintf(fichier,"\n");
    }
    fclose(fichier);
}

void charger(int niv[10][20], int t, int x, int y, int i, int j, int oiseaux, int level_number) {
    int c2,l2;

    FILE *fichier=fopen("Masauvegarde.txt","r");
    fscanf(fichier,"%d",&t);
    fscanf(fichier,"%d",&x);
    fscanf(fichier,"%d",&y);
    fscanf(fichier,"%d",&i);
    fscanf(fichier,"%d",&j);
    fscanf(fichier,"%d",&oiseaux);
    fscanf(fichier,"%d",&level_number);
    for (c2=0;c2<NB_LIGNES;c2++) {
        for (l2=0;l2<NB_COLONNES;l2++) {
            fscanf(fichier, "%d ", &niv[c2][l2]);
        }
        fscanf(fichier,"\n");
    }
    fclose(fichier);
}
