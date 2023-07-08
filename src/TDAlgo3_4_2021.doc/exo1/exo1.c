#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f = fopen("./input.txt", "r");
    char content;

    if (f == NULL)
    {
        return 1;
    }

    int count = 0;
    while ((content = fgetc(f)) != EOF)
    {
        count++;
    }

    printf("%d elements", count);
    fclose(f);
    return 0;
}
