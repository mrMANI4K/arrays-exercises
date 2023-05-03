#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 200

int  i, j, tabrand[N], del, ctrl;

void delete(int del) {
    for (j=0; j<10; j++) {
        for (i=0; i<N; i++) {
            if (tabrand[i] == del) {
                tabrand[i] = tabrand[i+1];
                ctrl++;
            }
            if (ctrl == 1) {
                tabrand[i] = tabrand[i+1];
            }
        }
    }
}

int main() {
    srand(time(NULL));
    for (i=0; i<N; i++) {
        tabrand[i] = rand() % 21;
    }
    printf("voici votre tableau : \n");
    for (i=0; i<N; i++) {
        printf("%d  ", tabrand[i]);
    }
    printf("quelle est la valeur que voulez faire disparaitre ? : ");
    scanf("%d", &del);
    delete(del);
    printf("c'est fait !");
    printf("voici votre nouveau tableau : \n");
    for (i=0; i<N; i++) {
        printf("%d  ", tabrand[i]);
    }
}