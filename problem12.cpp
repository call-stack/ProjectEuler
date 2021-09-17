// Highly divisible triangular number
#include <iostream> 

#include <cmath>

using namespace std;


int count_divisor(int n ){
    int count =0;
    for(int i=1;i<sqrt(n);i++){
        if (n%i==0) count += 2; 
    }

    return count;
}



int main() 
{ 
    
    int i =1;
    int number= 0;
    while(1){
        number += i;
        
        i++;

        if(count_divisor(number)>=500){
            cout<<number<<endl;
            break;
        }

        
        
    }   


 
    return 0; 
}