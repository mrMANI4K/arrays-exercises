#include <stdio.h>

#define N 10 // nombre de notes dans le tableau

int main()
{
    int notes[N]; // tableau des notes
    int i; // variable d'itération
    int note; // note à chercher
    int compteur = 0; // compteur de notes

    // demande les notes à l'utilisateur et les stocke dans le tableau
    for (i = 0; i < N; i++)
    {
        printf("Entrez la note %d : ", i + 1);
        scanf("%d", &notes[i]);
    }

    // demande la note à chercher
    printf("Entrez la note a chercher : ");
    scanf("%d", &note);

    // parcourt le tableau des notes et compte les occurences de la note donnée
    for (i = 0; i < N; i++)
    {
        if (notes[i] == note)
        {
            compteur++;
        }
    }

    // affiche le résultat
    printf("La note %d apparait %d fois dans le tableau.\n", note, compteur);

    return 0;
}
