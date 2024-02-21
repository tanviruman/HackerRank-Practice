#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   char st[100];
    scanf("%[^\n]%*c", &st);
    printf("Hello, World!\n");
    printf(st);  
    return 0;
}


