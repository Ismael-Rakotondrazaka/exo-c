#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f = fopen("./input.txt", "r");
    char content;

    if (f == NULL)
    {
        return 1;
    }

    int n;

    printf("Enter the length:\n");
    scanf("%d", &n);

    int charactersCount = 0;
    while ((content = fgetc(f)) != EOF && charactersCount <= n)
    {
        charactersCount++;
    }

    if (charactersCount == n)
    {
        printf("The file have contain %d characters.\n", charactersCount);
    }
    else
    {
        printf("The file does not contain %d characters.\n", n);
    }

    fclose(f);
    return 0;
}
