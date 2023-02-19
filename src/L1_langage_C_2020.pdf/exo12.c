#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Exercice 12. Ecrivez un programme C qui saisit 10 reels, les ranger dans un tableau. Calculez
et affichez la moyenne et l’écart-type.
 * Avec écart-type = sqrt(
    somme(
        pow(abs(xi - µ), 2)
        ) / n
    ,i = 1 ,i = n);
  * where :
  * µ: arithmetic mean
  * n: eff total
 */
int main()
{
    int taille = 4;
    double tab[taille];

    int sommeSerie = 0;

    printf("Entrer les %d éléments du tableau :\n", taille);
    for (int i = 0; i < taille; i++)
    {
        scanf("%lf", &tab[i]);
        sommeSerie += tab[i];
    }

    double moyenne = (double)sommeSerie / taille;

    int numerator = 0;
    for (int i = 0; i < taille; i++)
    {
        numerator += abs(tab[i] - moyenne) * abs(tab[i] - moyenne);
    }

    double ecartType = (double)numerator / taille;

    printf("La moyenne du tableau est %f et l'écart-type est %f.\n", moyenne, ecartType);

    return 0;
}