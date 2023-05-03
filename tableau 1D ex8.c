#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 150
#define MIN_RAND_VALUE 0
#define MAX_RAND_VALUE 50

int main(void)
{
    int i, j, n, count = 0;
    int array[MAX_SIZE];

    srand(time(NULL)); // initialisation de rand()

    // remplissage du tableau avec des valeurs aléatoires
    for (i = 0; i < MAX_SIZE; i++) {
        array[i] = rand() % (MAX_RAND_VALUE - MIN_RAND_VALUE + 1) + MIN_RAND_VALUE;
    }

    // affichage des valeurs du tableau par ligne de 10 nombres
    for (i = 0; i < MAX_SIZE; i++) {
        if (i % 10 == 0) {
            printf("\n");
        }
        printf("%d ", array[i]);
    }

    // comptage des valeurs égales à zéro dans le tableau
    for (i = 0; i < MAX_SIZE; i++) {
        if (array[i] == 0) {
            count++;
        }
    }

    printf("\n\nNombre de valeurs egales e zero : %d\n", count);

    return 0;
}
