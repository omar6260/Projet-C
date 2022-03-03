#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int somme;
    int difference;
    int produit;
    float division;
    printf("veillez saisir un nombre entier\n");
    scanf("%d",&a);
    do {
        printf("donnez un nombre different de zero\n");
        scanf("%d",&b);
    }while(b==0);
    somme = a+b;
    difference = a-b;
    produit= a*b;
    division= a/b;
    printf("la somme de %d et %d est:%d\n", a, b, somme);
    printf("la differnce de %d et %d est:%d\n", a, b, difference);
    printf("la produit de %d et %d est:%d\n", a, b, produit);
    printf("la division de %d et %d est:%.2f\n", a, b, division);


    return 0;
}
