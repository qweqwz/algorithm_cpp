#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int H, W, N,T;
    cin>>T;
    for (int i=0;i<T;i++){
        cin>>H>>W>>N;
        if(N%H!=0)
            cout<<(N%H)*100+ceil(double(N)/double(H))<<"\n";
        else
            cout<<H*100+ceil(double(N)/double(H))<<"\n";
    }
    return 0;
}