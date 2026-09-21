// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

long long gcd();
long long lcm();

int main() {
    
    int size = 25;
    long long n = 1;
    
    for(int i = 1; i <= size; i++){
        n = lcm(n, i);
    }
    
    
    /* reason for n = lcm(n,i) below
    
    we do it because the LCM of multiple numbers such as LCM(1, 2, 3) is represented as
    LCM( LCM(1,2), 3).
    
    We find the LCM of the first two pair of numbers, then use the result to find the LCM of the next two numbers meaning -> LCM(result, 3)
    
    We continuously update the result so by at the end, we get the LCM of the range of numbers.
    
    */ 
    
    printf("%lld",n);
    
}

long long gcd(long long x, long long y){
    
    while(y != 0){
        long long temp = y;
        y = x % y;
        x = temp;
    }
    
    return x;
}

long long lcm(long long x, long long y){
  long long res = (x /(gcd(x, y))) * y;
  
  return res;
}
