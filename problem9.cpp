// Special Pythagorean triplet

#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i <= 998; i++)
    {
        for (int j = i + 1; j <= 999; j++)
        {
            int k = 1000 - i - j;
            if ((i + j + k) == 1000 && (i * i + j * j == k * k))
            {
                
                cout << i * j * k;
            }
        }
    }

    return 0;
}