#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[52];
    char str2[52];
    int flag = 1;

    fgets(str1, 52, stdin);
    fflush(stdin);
    fgets(str2, 52, stdin);
    fflush(stdin);

    int N1 = strlen(str1);
    int N2 = strlen(str2);

    if(N2 > N1){
        flag = 2;
    }

    for(int i = 0; i <= N1 - 1; i++){
        for(int j = 0; j <= N2 - 1; j++){
            if(str1[i] == str2[j]){
                str2[j] = 0;
                str1[i] = 0;
            }
        }
    }

    for(int i = 0; i < N2 - 1; i++) {
        if (str2[i] != 0) {
            flag += 1;
        }
    }

    if(flag == 1){
        printf("yes");
    } else printf("no");

    return 0;
}