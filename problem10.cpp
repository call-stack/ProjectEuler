//Sum of 2M prime numbers

#include <iostream> 
#include <vector>
#include <bits/stdc++.h>

using namespace std;


long int get_prime_numbers(int n ){
    bool prime[n+1];

    memset(prime, true, sizeof(prime));

    for(int k = 2; k*k <= n; k++){
        if(prime[k]){
            for(int i=k*k;i<=n;i+=k)
                prime[i] = false;
        }
    }

    long int sum_n =0;
    for(int k=2;k<=n;k++){
        if(prime[k]) sum_n += k;
    }

    return sum_n;

}


int main() 
{ 
    cout<<get_prime_numbers(2000000);    
   
    return 0; 
}