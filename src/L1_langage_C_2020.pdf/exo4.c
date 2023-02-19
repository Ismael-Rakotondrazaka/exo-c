#include <stdio.h>

int saisieEtSomme();
int saisieEtPaye(int);
int afficherCouponsRendue(int, int);

/**
 * @brief Exercice 4. Ecrire un programme en langage C qui permet de saisir en Ariary, la suite des achats
d’un client (terminée par la saisie de 0). Le programme calcule la somme que le client doit et
affiche la somme due. Puis le programme saisit la somme que le client paye, et simule la remise
de la monnaie en affichant des textes « 10000 Ariary », «5000 Ariary» et « 1000 Ariary » autant
de fois qu’il y a de coupures de chaque sorte à rendre (5 points).
 */
int main()
{
    int somme = saisieEtSomme();
    printf("Total des achats: %d Ar\n", somme);
    int paye = saisieEtPaye(somme);
    printf("Le montant payé: %d Ar\n", paye);
    int totalRendu = afficherCouponsRendue(somme, paye);
    printf("Total rendu: %d Ar\n", totalRendu);
    return 0;
}

int saisieEtSomme()
{
    int somme = 0;
    int saisie;
    printf("Saisir successivement vos achats: \n");
    while (saisie != 0)
    {
        scanf("%d", &saisie);
        somme += saisie;
    }
    return somme;
}

int saisieEtPaye(int sommeDue)
{
    int paye = 0;
    printf("Saisir le montant payé : \n");
    scanf("%d", &paye);

    while (paye < sommeDue)
    {
        printf("Le montant saisie est inférieur au montant due, réessayer : \n");
        scanf("%d", &paye);
    }
    return paye;
}

int afficherCouponsRendue(int somme, int paye)
{
    int totalRendu = 0;
    int rest = paye - somme;
    printf("Liste des coupons rendus: \n");
    while (1)
    {
        if (rest - 5000 >= 0)
        {
            printf("-> 5000 Ar\n");
            rest -= 5000;
            totalRendu += 5000;
        }
        else if (rest - 2000 >= 0)
        {
            printf("-> 2000 Ar\n");
            rest -= 2000;
            totalRendu += 2000;
        }
        else if (rest - 1000 >= 0)
        {
            printf("-> 1000 Ar\n");
            rest -= 1000;
            totalRendu += 1000;
        }
        else
        {
            break;
        }
    }
    return totalRendu;
}
