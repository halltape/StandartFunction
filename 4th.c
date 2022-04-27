#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[52];
    char str2[52];

    fgets (str1, 52, stdin);
    fflush(stdin);

    fgets (str2, 52, stdin);
    fflush(stdin);

    int res = strcmp(str1, str2);
    if(res == 0){
        printf("yes");
    } else printf("no");


    return 0;
}