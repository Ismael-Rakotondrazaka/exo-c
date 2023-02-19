#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Exercice 8. adr1 et ard2 sont des pointeurs sur des reels. Le contenu de adr1 vaut -45,78; le
contenu adr2 vaut 678,89. Ecrire un programme qui affiche les valeurs de adr1, adr2 et de leur
contenu.
 */
int main()
{
    double *adr1;
    double *adr2;
    adr1 = (double *)malloc(sizeof(double));
    adr2 = (double *)malloc(sizeof(double));
    *adr1 = -45.78;
    *adr2 = 678.89;

    printf("Valeur de adr1: %p et son contenu : %f\n", adr1, *adr1);
    printf("Valeur de adr2: %p et son contenu : %f\n", adr2, *adr2);
    return 0;
}