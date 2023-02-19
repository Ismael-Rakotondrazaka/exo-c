#include <stdio.h>

/**
  Exercice 1. Ecrire un programme en langage C qui simule le fonctionnement d’une calculette. Il
  lit (saisit) deux entiers et un caractère. Si le caractère lu est ‘+’ il affiche la somme, si c’est un
  caractère ‘-’ il affiche la différence, si c’est un ‘*’ il affiche le produit, si c’est un ‘/’ il affiche le
  quotient et si c’st un ‘%’ il affiche le reste de la division entière.
 */
int main(int argc, char **argv)
{
  int nb1, nb2;
  double resultat = 0;
  char operator;
  printf("Entrer le premier entier: ");
  scanf("%d", &nb1);
  // * to empty the tampon memory
  // ! IDK when should I use it
  while (getchar() != '\n')
    ;

  printf("Entrer le second entier: ");
  scanf("%d", &nb2);
  while (getchar() != '\n')
    ;

  printf("Entrer l'operateur: ");
  scanf("%c", &operator);

  switch (operator)
  {
  case '+':
    resultat = nb1 + nb2;
    break;

  case '-':
    resultat = nb1 - nb2;
    break;

  case '*':
    resultat = nb1 * nb2;
    break;

  case '/':
    resultat = (double)nb1 / nb2;
    break;

  case '%':
    resultat = nb1 % nb2;
    break;

  default:
    printf("L'opérateur entré n'est pas valide.");
    break;
  }

  printf("%f", resultat);

  return 0;
}