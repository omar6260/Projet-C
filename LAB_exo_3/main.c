#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[100];
    int nombre;
    int i;

    printf("Entrez le nombre a convertir :\n");
    scanf("%d", & nombre);
    for(i=0;nombre>0; i++)
    {
        tab[i]= nombre%2;
        nombre = nombre/2;
    }
    printf("\n le nombre binaire est =");
    for(i=i-1; i>=0; i--)
    {
        printf("%d", tab[i]);
    }

    return 0;
}
