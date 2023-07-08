#include <stdio.h>
#include <string.h> // used to manipulate strings

int main(int argc, char **argv)
{
    FILE *f = fopen("./input.txt", "r");

    if (f == NULL)
    {
        return 1;
    }

    int i = 0;
    int previous;
    int current;
    int isSortedAndUnique = 0;

    while (fscanf(f, "%d", &current) == 1)
    {
        if (i == 0)
        {
            previous = current;
        }
        else if (previous >= current)
        {
            isSortedAndUnique = 1;
            break;
        }
        else
        {
            previous = current;
        }

        i++;
    }

    if (isSortedAndUnique == 0)
    {
        printf("The file is sorted and with unique elements.\n");
    }
    else
    {
        printf("The file is not sorted and/or not with unique elements.\n");
    }

    fclose(f);
    return 0;
}
