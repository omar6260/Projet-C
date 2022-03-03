#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int x;
    int f;
    do
    {
        printf("donnez un nombre positif pur le paramettre a\n");
        scanf("%d", & a);
    } while(a<0);
    do
    {
        printf("Donnez un nombre positif pour le paramettre B \n");
        scanf("%d", & b);
    }while(b<0);

    do
    {
        printf("Donez un nombre positif pour le paramettre C \n ");
        scanf("%d", & c);
    }while(c<0);

    printf("l'equation du second degre composant: f(x)=%dx2+%dx+%d\n", a,b,c);

    for(x=0; x<=1000; x++)
    {
        f = a*x*x + b*x + c;
        printf("Pour x=%d, f=%d\n", x,f);
    }
    return 0;
}
