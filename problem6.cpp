//Sum square difference

#include <iostream> 

using namespace std;

int main() 
{ 
    
    int n =100;

    int sum_of_first_n = (n*(n+1))/2;
    int sum_of_squre_n = ((n)*(n+1)*(2*n+1))/6;

    int res = sum_of_first_n*sum_of_first_n-sum_of_squre_n;
    cout<< res;




 
    return 0; 
}