#include <stdio.h>

void afficheSuivant(int);

/**
 * @brief Exercice7. Ecrire un programme C qui effectue les opérations :
-Déclare et saisit une variable entière appelée nombre;
- Appelle une fonction qui reçoit en argument nombre (un nombre de départ) et affiche les dix
nombres suivants.
 */
int main()
{
    int nombre;
    printf("Saisir le nombre : \n");
    scanf("%d", &nombre);

    afficheSuivant(nombre);

    return 0;
}

void afficheSuivant(int nombre)
{
    int interval = 10;
    for (int i = 1; i <= interval; i++)
    {
        printf("%d ", nombre + i);
    }
}