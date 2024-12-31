#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);
int lcm(int x, int y);

int main() {
    
    int size = 20;
    int n = 1;
    
    for(int i = 1; i < size; i++){
        n = lcm(n, i);
    }
    
    
    /* reason for n = lcm(n,i) below
    
    we do it because the LCM of multiple numbers such as LCM(1, 2, 3) is represented as
    LCM( LCM(1,2), 3).
    
    We find the LCM of the first two pair of numbers, then use the result to find the LCM of the next two numbers meaning -> LCM(result, 3)
    
    We continuously update the result so by at the end, we get the LCM of the range of numbers.
    
    */ 
    
    printf("%d",n);
    
}

int gcd(int x, int y){
    
    while(y != 0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    
    return x;
}

int lcm(int x, int y){
  int res = abs(x * y)/(gcd(x, y));
  
  return res;
}
