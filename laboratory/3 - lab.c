#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAXSIZE 50


int countVowels(const char* str);
int checkVowel(char c);

int main(){
    char input[MAXSIZE];

    fgets(input, MAXSIZE, stdin);
    clock_t tic = clock();

    int count = countVowels(input);
    clock_t toc = clock();
    printf("Elapsed: %.50f seconds\n", (long double)(toc - tic) / CLOCKS_PER_SEC);

    printf("The number of vowels are %d\n\n", count);
}

int countVowels(const char* str){
    int count;

    if(str[0] == '\0'){
        count = 0;
    }else
        if (checkVowel(str[0])){
            count = 1 + countVowels(&str[1]);
        }
        else{
            count = countVowels(&str[1]);
        }

    return count;
}

int checkVowel(char c){
    int flag;

    switch (c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            flag = 1;
            break;
        default:
            flag = 0;
    }

    return flag;
}
