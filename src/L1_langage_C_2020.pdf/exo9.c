#include <stdio.h>
// ! not sure if that is the correct answer
/**
 * @brief Exercice 9. adr_i est un pointeur de type entier, son contenu i vaut 0x12345678. A l’aide d’une
conversion de type de pointeur, écrire un programme montrant le rangement des 4 octets en
mémoire.
 */
int main()
{
    int i = 0x12345678;
    int *adr_i;
    adr_i = &i;

    printf("Valeur de adr_i: %p, son contenu: %d\n", adr_i, *adr_i);

    for (int i = 0; i < 4; i++)
    {
        printf("%d : %d\n", i + 1, adr_i[i]);
    }

    return 0;
}