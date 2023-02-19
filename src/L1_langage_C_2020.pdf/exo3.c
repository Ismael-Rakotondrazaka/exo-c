#include <stdio.h>

int saisieEtCompte(int);

/**
 * @brief Exercice 3. Ecrire un programme en langage C qui saisit une suite de caractères, compte et
affiche le nombre de lettres ‘e’ et d’espaces. Utiliser les propriétés des tampons (getchar() dans
une boucle while).
 */
int main()
{

    int nombreChar;
    printf("Entrer le nombre de caractère souhaité : ");
    scanf("%d", &nombreChar);

    int nbrE = 0, nbrEspace = 0;

    int i = 0;
    while (i < nombreChar)
    {
        while (getchar() != '\n')
            ;

        char entree = getchar();
        if (entree == 'e')
        {
            nbrE++;
        }
        else if (entree == ' ')
        {
            nbrEspace++;
        }
        i++;
    }

    printf("Nombre de e : %d\n", nbrE);
    printf("Nombre d'espace : %d\n", nbrEspace);

    return 0;
}

int saisieEtCompte(int nbrChar)
{
    int resultat = 0;

    int i = 0;
    while (i < nbrChar)
    {
        char entree = getchar();
        if (entree == 'e')
        {
        }
        i++;
    }

    return resultat;
}