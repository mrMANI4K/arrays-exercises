#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 50

int  i, tabrand[N],tmp;

void invert() {
    for (i=0; i<N/2; i++) {
    int j=N-i-1;
    tmp = tabrand[i];
    tabrand[i] = tabrand[j];
    tabrand[j] = tmp;
    }
}

int main() {
    srand(time(NULL));
    for (i=0; i<N; i++) {
        tabrand[i] = rand() % 100;
    }
    printf("voici votre tableau : \n");
    for (i=0; i<N; i++) {
        printf("%d  ", tabrand[i]);
    }
    invert();
    printf("\n\ntableau inverse !");
    printf("\n\nvoici votre nouveau tableau : \n");
    for (i=0; i<N; i++) {
        printf("%d  ", tabrand[i]);
    }
}