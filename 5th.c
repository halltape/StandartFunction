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


    int flag = 0;

    int N1 = strlen(str1);
    int N2 = strlen(str2);

    for(int i = 0; i < N1-1; i++){
        if(str1[i] == str2[i] - 32 || str1[i] == str2[i]){
        flag = 5;
        } else flag = 1;
    }

    if (N1 != N2){flag = 1;}

    if(flag == 5){printf("yes");
    } else printf("no");

    return 0;
}