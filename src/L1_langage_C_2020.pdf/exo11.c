#include <stdio.h>

/**
 * @brief Exercice 11. Ecrire un programme qui lit la dimension N d'un tableau Tab du type int
(dimension maximale: 50 composantes), remplit le tableau par des valeurs entrées au clavier et
affiche le tableau.
 */
int main()
{
    int N;
    printf("Entrer la taille du tableau : \n");
    scanf("%d", &N);
    if (N > 50)
    {
        N = 50;
    }

    int Tab[N];
    printf("Entrer successivement a les valeurs du tableau :\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Tab[i]);
    }

    printf("Les valeurs du tableau sont : \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", Tab[i]);
        //  printf("%p\n", Tab[i]); // note the difference
    }

    return 0;
}