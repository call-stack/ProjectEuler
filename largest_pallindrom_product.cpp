#include <iostream> 
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool isPallindrom(int tmp){
    string str= to_string(tmp);  
    string tmp1 = str;
    reverse(tmp1.begin(), tmp1.end());

    return tmp1 == str;
}



 
int main() 
{ 


    int max_possible = 0;
    int ti, tj;
    for(int i=1;i<1000;i++){
        for(int j=i+1; j<1000;j++){
            int tmp = i*j;
            if(isPallindrom(tmp) && tmp>max_possible) {
                max_possible = tmp;
                ti = i;
                tj =j;
            }
        }
    }

    cout<<max_possible<<" "<<ti<<""<<tj;
 
    return max_possible; 
}