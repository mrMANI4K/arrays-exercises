#include <stdio.h>
#include <string.h>
#define SIZE 10 // la taille du premier tableau
#define MAX_SIZE 20 // La taille maximale du tableau 


int i;

// déclaration du tableau
int tab[SIZE] = {4,5,12,15,13,10,8,9,13,14}; 

int main()
{
    // déclaration de la variable qui contiendra la valeur saisie par l'utilisateur
    int n;
    for (i=0; i<SIZE; i++)
     {
        printf("%d ", tab[i]);
     }
    // saisie de la valeur
    printf("Saisissez un entier : ");
    scanf("%d", &n);

    // on parcourt le tableau pour chercher l'entier saisi
    for (i = 0; i < SIZE; i++)
    {
        // si l'entier est trouvé
        if (tab[i] == n)
        {
            // on affiche l'indice et on termine la recherche
            printf("L'entier %d se trouve a l'indice %d du tableau\n", n, i);
        }
    }


  char array[MAX_SIZE]; // Déclaration du deuxieme tableau

  printf("Saisissez jusqu'a %d caracteres : \n", MAX_SIZE);

  // Saisie des caractères et stockage dans le tableau
  char c;
  for (i = 0; i<MAX_SIZE+1; i++){
    
    gets(&c); 
    if (strcmp(&c,"@") == 0){
        break;
    }
    array[i] = c;
  }

  // Affichage du contenu du tableau
  printf("Le contenu du tableau est : \n");
  for (int j = 0; j < i; j++) {
    printf("%c", array[j]);
  }
  printf("\n");

  // Calcul du nombre de caractères numériques, alphabétiques et autres
  int num_count = 0;
  int alpha_count = 0;
  int other_count = 0;
  for (int j = 0; j < i; j++) {
    if (array[j] >= '0' && array[j] <= '9') {
      num_count++;
    } else if ((array[j] >= 'A' && array[j] <= 'Z') || (array[j] >= 'a' && array[j] <= 'z')) {
      alpha_count++;
    } else {
      other_count++;
    }
  }

  // Affichage des résultats
  printf("Nombre de caracteres numeriques : %d\n", num_count);
  printf("Nombre de caracteres alphabetiques : %d\n", alpha_count);
  printf("Nombre de caracteres autres : %d\n", other_count-1);
    return 0;
}


