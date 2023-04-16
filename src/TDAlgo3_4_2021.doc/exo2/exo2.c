#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f = fopen("./input.txt", "r");
    int content;

    if (f == NULL)
    {
        return 1;
    }

    int sum = 0;
    int i = 1; // first element at i = 1
    while (fscanf(f, "%d", &content) == 1)
    {
        if (i % 2 == 0)
        {
            sum += content;
        }

        i++;
    }

    printf("sum = %d\n", sum);
    fclose(f);
    return 0;
}
