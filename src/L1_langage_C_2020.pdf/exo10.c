#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Exercice 10. Saisir un texte. Ranger les caractères en mémoire. Lire le contenu de la mémoire
et y compter le nombre d’espaces et de lettres e.
 */
int main()
{
    int longueur;
    printf("Entrer le nombre de caractères à saisir :\n");
    scanf("%d", &longueur);

    char *tete = (char *)malloc(longueur * sizeof(char));

    printf("Entrer successivement les %d caractères : \n", longueur);
    int i = 0, longueurE = 0, longueurEspace = 0;
    while (i < longueur)
    {
        //! fflush(stdin) is not working here, IDK why
        // fflush(stdin);
        while (getchar() != '\n')
            ;

        *(tete + i) = getchar(); // ! IDK how to use scanf here

        if (*(tete + i) == 'e')
        {
            longueurE++;
        }
        else if (*(tete + i) == ' ')
        {
            longueurEspace++;
        }
        i++;
    }

    printf("Vous avez écrit : ");
    for (int i = 0; i < longueur; i++)
    {
        printf("%c", *(tete + i));
    }

    printf(" dont %d lettres e et %d espaces.\n", longueurE, longueurEspace);

    return 0;
}