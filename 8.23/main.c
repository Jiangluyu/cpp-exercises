#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int count = 0;
    char s[30][999];
    printf("Input the source text(Enter to break):\n");
    for(int i = 0; i < 30; i++){
        fgets(s[i], 999, stdin);
        count++;
        if(s[i][0] == '\n')
            break;
    }

    for(int i = 0; i < count; i++){
        char *tokenPtr = strtok(s[i], " ");
        while(tokenPtr != NULL){
            if(tokenPtr[0] == 'b')
                printf("%s\n", tokenPtr);
                tokenPtr = strtok(NULL, " ");
        }
    }

    return 0;
}