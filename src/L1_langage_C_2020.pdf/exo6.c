#include <stdio.h>

int litInt();
double facture(int);

/**
 * @brief Exercice 6. Ecrire un programme C qui calcule une facture correspondant au nombre de
photocopies effectuées par un magasin de reproduction. Il effectue les opérations suivantes :
-Déclaration des variables,
-Utilisation de la fonction int liInt(void) qui retourne le nombre de photocopies effectuées.
-Appel de la fonction double facture(int) qui reçoit en paramètre le nombre de photocopies
retourné par la fonction litInt() et calcule le montant de la facture suivant l’algorithme ci-après.
Le magasin facture à 50 Ariary les 10 premières photocopies, à 40 Ariary les 20 suivantes et à
30 Ariary au-delà.
 */
int main()
{
    int photocopie = litInt();
    double valeurFacture = facture(photocopie);
    printf("Votre facture  : %f\n", valeurFacture);
    return 0;
}

int litInt()
{
    int nombrePhotocopie;
    printf("Saisir le nombre de photocopie : ");
    scanf("%d", &nombrePhotocopie);

    while (nombrePhotocopie < 0)
    {
        printf("Saisie invalide, réessayer : ");
        scanf("%d", &nombrePhotocopie);
    }

    return nombrePhotocopie;
}

double facture(int nombrePhotocopie)
{
    int montant = 0;
    if (nombrePhotocopie >= 0 && nombrePhotocopie <= 10)
    {
        montant = nombrePhotocopie * 50;
    }
    else if (nombrePhotocopie <= 20)
    {
        montant = 10 * 50 + (nombrePhotocopie - 10) * 40;
    }
    else
    {
        montant = 10 * 50 + 20 * 40 + (nombrePhotocopie - 10 - 20) * 30;
    }
    return montant;
}
