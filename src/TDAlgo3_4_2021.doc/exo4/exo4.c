#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f = fopen("./input.txt", "r");
    int content;

    if (f == NULL)
    {
        return 1;
    }

    int first;
    int last;

    int i = 0; // first element at i = 1
    while (fscanf(f, "%d", &content) == 1)
    {
        if (i == 0)
        {
            first = content;
        }
        else
        {
            last = content;
        }
    }

    int sum = last ? first + last : 2 * first;

    printf("sum = %d\n", sum);
    fclose(f);
    return 0;
}
