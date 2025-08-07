#include "includes/parsing.h"
#include <stdio.h>
#include <stdlib.h>
 
 
int main(int argc, char *argv[]) {
    int tab[4][4];
 
    if (argc < 2) {
        printf("Error : too many arguments\n");
        return 1;
    }
 
    parseInput(argv[1], tab);
    
    for (int i = 0;i < 4; i++)
    {
        for (int j = 0; j < 4;j++)
        {
            printf("%d ",tab[i][j]);
        }
    }
    return 0;
}