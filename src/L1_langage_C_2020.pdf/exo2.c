#include <stdio.h>

/**
 * @brief Exercice 2. Ecrire un programme en langage C qui lit un caractère A, B, C, D ou E, utilisé pour
apprécier les notes des étudiants. Puis il affiche le message « excellent », « bon », « moyen »,
« médiocre » ou « mauvais », respectivement suivant le caractère lu.
 */
int main()
{
    char appreciation;
    printf("Ecriver l'appreciation :");
    scanf("%c", &appreciation);

    switch (appreciation)
    {
    case 'A':
        printf("Excellent");
        break;

    case 'B':
        printf("Bon");
        break;

    case 'C':
        printf("Moyen");
        break;

    case 'D':
        printf("Mediocre");
        break;

    case 'E':
        printf("Mauvais");
        break;

    default:
        printf("Appreciation non trouvé");
        break;
    }

    return 0;
}