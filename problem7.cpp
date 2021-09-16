//10001st prime

#include <iostream> 
#include <vector>
using namespace std;

int main() 
{ 

    
    vector<int> stored;

    int n = 9999;
    int k =0; 
    int start = 5;
    while(1){
        int cand1 = start, cand2= start+2;
        bool c1=true, c2=true;
        for(int i = 0; i<stored.size() && (c1 || c2);i++){
            if (cand1%stored[i]==0 && c1){
                c1 = false;
            }

            if (cand2%stored[i]==0 && c2){
                c2 = false;
            }
        }

        if(c1){
            stored.push_back(cand1);
            k++;
        }

        if(k==n){
            cout<<cand1<<endl;
            break;
        }

        if(c2){
            stored.push_back(cand2);
            k++;
        }

        if(k==n){
            cout<<cand2<<endl;
            break;
        }
        start = start+6;
        
    }
    return 0; 
}