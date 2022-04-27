#include <stdio.h>
#include <string.h>

int main ()
{
    char city1[52];
    char city2[52];

    fgets(city1, 52, stdin);
    fflush(stdin);

    fgets(city2, 52, stdin);
    fflush(stdin);

    int N1 = strlen(city1);
    int N2 = strlen(city2);

   if(city1[N1-2] - 32 == city2[0] || city2[N2-2] - 32 == city1[0]){
       printf("yes");
   } else printf("no\n");


    return 0;
}