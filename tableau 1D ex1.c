#include <stdio.h>
#define N 10

int tab[N], i, indpg, indpp, pg, pp, strtctrl;

int main () {
    strtctrl = 0;

    for (i=0; i<N; i++) {
        printf("saisissez le i = %d element ", i);
        scanf("%d",&tab[i]);
        if (tab[i] < pp && strtctrl == 1) {
            pp = tab[i];
            indpp = i;
        }
        if (tab[i] > pg && strtctrl == 1) {
            pg = tab[i];
            indpg = i;
        }
        if (strtctrl == 0) {
            pp = tab[i];
            pg = tab[i];
            strtctrl++;
        }
    }
    printf("voici votre tableau : ");
    for (i=0; i<N; i++) {
        printf("%d  ", tab[i]);
    }
    printf("\n\nle plus grand nombre est %d et se trouve a l'indice %d\n\n", pg, indpg);
    printf("le plus petit nombre est %d et se trouve a l'indice %d\n\n", pp, indpp);
}