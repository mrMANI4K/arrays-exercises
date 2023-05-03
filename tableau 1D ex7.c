#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_NOTES 10

int main()
{
    int notes[MAX_NOTES];
    int n = 0;
    int note;
    float moyenne = 0;
    float ecart_type = 0;
    float somme_carres = 0;

    // Lecture des notes saisies par l'utilisateur
    do {
        printf("Entrez une note (entre 0 et 20, ou -1 pour terminer) : ");
        scanf("%d", &note);

        // Si la note est valide, on l'ajoute au tableau
        if (note >= 0 && note <= 20) {
            notes[n] = note;
            n++;
        }

        // Si le tableau est plein, on sort de la boucle
        if (n == MAX_NOTES) {
            break;
        }
    } while (note != -1);

    // Calcul de la moyenne
    for (int i = 0; i < n; i++) {
        moyenne += notes[i];
    }
    moyenne /= n;

    // Calcul de l'écart type
    for (int i = 0; i < n; i++) {
        somme_carres += (notes[i] - moyenne) * (notes[i] - moyenne);
    }
    ecart_type = sqrt(somme_carres / n);

    // Affichage des résultats
    printf("Moyenne : %f\n", moyenne);
    printf("Ecart-type : %f\n", ecart_type);

    return 0;
}
