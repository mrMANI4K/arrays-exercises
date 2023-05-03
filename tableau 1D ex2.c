#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int  N, sum=0, i;

//int main() {
//  do {
//    printf("quelle est la taille souhaitee pour le tableau ?");
//    scanf("%d", &N);
//  }while(N < 50)
//    int tab[N];
//    for (i=0; i<N; i++) {
//        printf("saisissez le i= %d element ", i);
//        scanf("%d",&tab[i]);
//        sum = sum+tab[i];
//    }
//    printf("voici votre tableau : \n");
//    for (i=0; i<N; i++) {
//       printf("%d      ", tab[i]);
//    }
//    printf("la somme de tous les elements du tableau vaut %d", sum);
//}


int main() {
    srand(time(NULL));
    do {
    printf("quelle est la taille souhaitee pour le tableau ?");
    scanf("%d", &N);
    }while(N > 50);
    int tabrand[N];
    for (i=0; i<N; i++) {
        tabrand[i] = rand() % 100;
        sum = sum+tabrand[i];
    }
    printf("voici votre tableau : \n");
    for (i=0; i<N; i++) {
        printf("%d      ", tabrand[i]);
    }
    printf("la somme de tous les elements du tableau vaut %d", sum);
}