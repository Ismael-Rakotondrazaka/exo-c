#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f = fopen("./input.txt", "r");
    char lastContent[100];

    if (f == NULL)
    {
        return 1;
    }

    while (fscanf(f, "%s", &lastContent) == 1)
        ;

    printf("%s\n", lastContent);
    fclose(f);
    return 0;
}
