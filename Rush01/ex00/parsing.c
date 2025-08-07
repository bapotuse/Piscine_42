#include "includes/atoi.h"
#include <stdlib.h>
#include <stdio.h>

void parseInput(char *input, int tab[4][4])
{
    int i = 0;
    int row = 0;
    int col = 0;
 
    while (input[i] != '\0' && row < 4)
    {
        if (input[i] == ' ')
            i++;
        if (col < 4)
        {
            tab[row][col] = input[i] - '0';
            col++;
        } 
        else 
        {
            col = 0;
            if (++row < 4)
            {
                tab[row][col++] = input[i] - '0';
            }
        }
        i++;
    }
}