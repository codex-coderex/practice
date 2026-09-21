#include <stdio.h>
#include <string.h>
#define MAXSIZE 20


int hydroxideTester();

int main(){
    char inputChemical[MAXSIZE];

    while(inputChemical[0] != 'x'){

    scanf("%s", inputChemical);
        if(hydroxideTester(inputChemical) == 1){

            printf("pass\n\n");

        } else {

            printf("fail\n\n");

        }

    }
}


int hydroxideTester(char *inputChemical){

    int arraySize = strlen(inputChemical);
    char hydroxideChem[] = {"OH"};


    if((strcmp(&inputChemical[arraySize - 2], hydroxideChem) == 0))
    {
        return 1;
    }

}
