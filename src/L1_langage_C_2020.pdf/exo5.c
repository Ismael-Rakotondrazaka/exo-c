#include <stdio.h>
#include <math.h>

void saisie(int *, int *, int *);
void calcul(int, int, int);

/**
 * @brief Exercice 5. Ecrire un programme C qui calcule et affiche les racines de ax2+bx+c. Pour ce
faire, effectuez les opérations suivantes :
-Déclarations des variables,
-Appel de la fonction void saisie(int *, int *, int*) qui permet de saisir la valeur de a, b, et c.
-Appel de la fonction calcul(int, int, int) qui exécute les calculs et affiche les résultats.
Note : la fonction standard sqrt(valeur) dans <math.h> renvoie la racine carrée de valeur.
 */
int main()
{
    int a, b, c;
    saisie(&a, &b, &c);
    calcul(a, b, c);

    return 0;
}

void saisie(int *a, int *b, int *c)
{
    printf("Entrer la valeur de a : ");
    scanf("%d", a);

    printf("Entrer la valeur de b : ");
    scanf("%d", b);

    printf("Entrer la valeur de c : ");
    scanf("%d", c);
}

void calcul(int a, int b, int c)
{
    int delta = (b * b) - (4 * a * c);
    if (delta < 0)
    {
        printf("Pas de solution réelle.\n");
    }
    else if (delta == 0)
    {
        double resultat = (double)-b / (2 * a);
        printf("solution réelle unique: %f\n", resultat);
    }
    else
    {
        double x1, x2;
        x1 = (-1 * b - sqrt(delta)) / (2 * a);
        x2 = (-1 * b + sqrt(delta)) / (2 * a);
        printf("Deux solutions réelles distinctes : %f et %f\n", x1, x2);
    }
}