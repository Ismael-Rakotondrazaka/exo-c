#include <stdio.h>

/**
 * @brief Exercice 13. Ecrire un programme qui lit la dimension N d'un tableau Tab du type int
(dimension maximale: 50 composantes), remplit le tableau par des valeurs entrées au clavier et
affiche le tableau. Effacer ensuite toutes les occurrences de la valeur 0 dans le tableau Tab et
tasser les éléments restants. Afficher le tableau résultant.
 */
int main()
{
    int N;
    printf("Saisir la taille du tableau :\n");
    scanf("%d", &N);
    while (N < 0)
    {
        printf("La taille du tableau est invalid, réessayer :\n");
        scanf("%d", &N);
    }

    if (N > 50)
    {
        N = 50;
    }

    int occurrenceZero = 0;
    int tab[N];

    printf("Saisir successivement les %d éléments du tableau :\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tab[i]);
        if (tab[i] == 0)
        {
            occurrenceZero++;
        }
    }

    int nouvelleTaille = N - occurrenceZero;
    int nouveauTab[nouvelleTaille];
    for (int i = 0, j = 0; i < N; i++)
    {
        int element = tab[i];
        if (element != 0)
        {
            nouveauTab[j] = element;
            j++;
        }
    }

    printf("Les éléments du nouveau tableau : \n");
    for (int i = 0; i < nouvelleTaille; i++)
    {
        printf("%d, ", nouveauTab[i]);
    }

    return 0;
}