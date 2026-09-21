#include <stdio.h>
#include <math.h>

#define true 1
#define false 0

int estimate_limit(int n);
void the_nth_prime(int n);

int main() {
   the_nth_prime(10001);
}

int estimate_limit(int n){
    
    int limit = n*(log(n) + log(log(n)));
   
    return limit;
}

//implementation of the Sieve of Eratosthenes
void the_nth_prime(int n){
    
    int upper_bound = estimate_limit(n);
  
    char sieve[upper_bound + 1];
    
    for(int i = 0; i < upper_bound; i++){
        sieve[i] = true;
    }
    
    sieve[0] = false;
    sieve[1] = false;
    
    for(int i = 2; i <= sqrt(upper_bound); i++){
       if(sieve[i]){
           for(int j = i * i; j <= upper_bound; j += i){
               sieve[j] = false;
           }
       }
    }
    
    int count = 0;
    
    for(int i = 2; i < upper_bound; i++){
        if(sieve[i] == 1){
            count++;
        } 
        if(count == n){
            printf("The %d prime is %d", count, i);
            break;
        }
    }
}
