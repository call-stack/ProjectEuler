#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    
    int first_number =1 , second_number = 2;

    int sum = 0;
    while(second_number < 4000000){

        cout<<first_number<<" "<<second_number<<"\n";
        if (second_number%2==0) sum += second_number;

        int temp = second_number;
        second_number = first_number+second_number;
        first_number = temp;
    }

    


    
    return 0;
}
