#include <stdio.h>
#include <string.h>
#define MAXSIZE 30

void product();
int palindrome(char* res);

int main() {
    product();
}

void product(){
    char res[MAXSIZE];
    int max = 0;
    
    
    for(int i = 999; i >= 1; i--){
        for(int j = 999; j >= 1; j--){
            
            sprintf(res, "%d", i*j);
            
            if(palindrome(res) == 0){
                if(i*j > max){
                    max = i*j;
                }
            }
        }
    }
    
    printf("%d\n", max);
    
    return;
}

int palindrome(char* res){
    int len = strlen(res);
    
    for(int i = 0; i < len/2; i++){
        if(res[i] != res[len - i - 1]){
            return 1;
        }
    }
    
    return 0;
}
