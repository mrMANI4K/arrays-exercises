#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 150

// Fonction qui trie un tableau d'entiers par ordre croissant
void sort(int array[], int size) {
  int i, j;
  int minIndex, temp;

  // Boucle sur tous les éléments du tableau
  for (i = 0; i < size; i++) {
    // Trouver la plus petite valeur et son indice
    minIndex = i;
    for (j = i+1; j < size; j++) {
      if (array[j] < array[minIndex]) {
        minIndex = j;
      }
    }

    // Echanger la valeur en minIndex avec celle en i
    temp = array[i];
    array[i] = array[minIndex];
    array[minIndex] = temp;
  }
}

int main() {
  int array[SIZE];
  int i;

  // Initialiser le générateur de nombres aléatoires
  srand(time(NULL));

  // Remplir le tableau avec des valeurs aléatoires
  for (i = 0; i < SIZE; i++) {
    array[i] = rand() % 100;
  }

  // Afficher le tableau avant le tri
  printf("Avant le tri :\n");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  // Trier le tableau
  sort(array, SIZE);

  // Afficher le tableau après le tri
  printf("Apres le tri :\n");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
