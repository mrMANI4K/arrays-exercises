#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 200

int main() {
  // Déclaration des tableaux
  int T[TAILLE];
  int TPLUS[TAILLE];
  int TMOINS[TAILLE];

  // Initialisation de la valeur aléatoire
  srand(time(NULL));

  // Remplissage du tableau T
  for (int i = 0; i < TAILLE; i++) {
    T[i] = rand() % 41 - 20;
  }

  // Remplissage des tableaux TPLUS et TMOINS
  int nb_plus = 0;
  int nb_moins = 0;
  for (int i = 0; i < TAILLE; i++) {
    if (T[i] > 0) {
      TPLUS[nb_plus++] = T[i];
    } else if (T[i] < 0) {
      TMOINS[nb_moins++] = T[i];
    }
  }

  // Affichage des trois tableaux
  printf("Tableau T :\n");
  for (int i = 0; i < TAILLE; i++) {
    printf("%d ", T[i]);
  }
  printf("\n\n");

  printf("Tableau TPLUS :\n");
  for (int i = 0; i < nb_plus; i++) {
    printf("%d ", TPLUS[i]);
  }
  printf("\n\n");

  printf("Tableau TMOINS :\n");
  for (int i = 0; i < nb_moins; i++) {
    printf("%d ", TMOINS[i]);
  }
  printf("\n\n");

  return 0;
}
