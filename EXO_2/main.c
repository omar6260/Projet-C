#include <stdio.h>
#include <stdlib.h>
int menu()
{
    int formation = 0;

    while(formation <=1 || formation >= 7)
    {
        printf("Voici nos formation que nous proposons : \n");
        printf("2: Informatique\n");
        printf("3: Management\n");
        printf("4: Santé\n");
        printf("5: Infographie\n");
        printf("Veillez choisir une formation : \n");
        scanf("%d", & formation);

    }
    return formation;
}



int main(int argc, char *agric[])
{
    switch(menu())
    {
        case 2:
            printf("Notre departement et le meilleur dans tout les domaine");
            break;
        case 3:
            printf("tout ce qui est de la santé ");
            break;
        case 4:
            printf("gusjqjdgsqdqjdqsgh");
            break;
        case 5:
            printf("gusjqjdgsqdqjdqsgh");
            break;

            return 0;
    }

}
