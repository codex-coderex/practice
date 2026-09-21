#include <stdio.h>

int square_sum_difference();

int main(){
    int result = square_sum_difference(100);
    printf("%d", result);
}

int square_sum_difference(int size){
    int x;
    int y;
    
    for(int i = 1; i <= size; i++){
        x += i*i;
    }
    
    for(int j = 1; j <= size; j++){
        y += j;
    }
        y *= y;
    
    return y - x;
}

    
