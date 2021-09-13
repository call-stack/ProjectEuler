#include <iostream>
#include <cmath>
using namespace std;


long int largest_prime(long int n){

    
    long int value = sqrt(n);
    long int maxprime = 0;
    for(int i=3; i<=n;i++){
        while(n%i==0){
            maxprime =i;
            n = n/i;
        }
    }

    return maxprime;
}



int main(int argc, char const *argv[])
{
    
    long int n;

    cin>>n;

    cout<<largest_prime(n);

    
    return 0;
}
