#include <iostream>

using namespace std;



int get_number_between(int first_number, int last_number){


    return ((last_number-first_number)/first_number) + 1;
}





int get_sum_using_ap(int n , int first, int last){
    return ((n)*(first+last))/2;
}


int get_sum(int number){
    number--;
    int last_multiple_of_3 = number - (number%3);
    int last_multiple_of_5 = number - (number%5);
    int last_multiple_of_15 = number - (number%15);

    int multiple_of_3 = get_number_between(3, last_multiple_of_3);
    int multiple_of_5 = get_number_between(5, last_multiple_of_5);
    int multiple_of_15 = get_number_between(15, last_multiple_of_15);


    return get_sum_using_ap(multiple_of_3, 3, last_multiple_of_3) + get_sum_using_ap(multiple_of_5, 5, last_multiple_of_5) - get_sum_using_ap(multiple_of_15, 15, last_multiple_of_15);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<get_sum(n);
    return 0;
}
