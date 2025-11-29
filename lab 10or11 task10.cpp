#include<stdio.h>
#include<string.h>

int main(){
    char words[5][20];
    printf("enter words: \n");

    for(int i = 0; i < 5; i++){
        scanf("%s", words[i]);
    }

    for(int i = 0; i < 5; i++){
        int len = strlen(words[i]);
        int isPalindrome = 1;  

        for(int j = 0; j < len/2; j++){
            if(words[i][j] != words[i][len - 1 - j]){
                isPalindrome = 0;   
                break;              
            }
        }

        if(isPalindrome){
            printf("\npalindrome");
        } else {
            printf("\nnot plaindrome");
        }
    }

    return 0;
}

