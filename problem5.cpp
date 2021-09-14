#include <iostream> 
#include <boost/integer/common_factor_ct.hpp>

using namespace std;

int gcd(int n ,int m){
    if (m==0) return n;

    return gcd(m, n%m);
}


int lcm(int a  , int b){
    return (a/gcd(a, b))*b;
}

int main() 
{ 

    int tmp =1;
    for(int i=2; i<=20;i++){
        tmp = lcm(tmp, i);

    }
    cout<<tmp;
    return 0; 
}