#include <iostream>
using namespace std;
int main(){
    int N, N_temp, a, b, c, d=300, count=0;
    cin>>N;
    N_temp = N;
    while(d!=N){
        a=N_temp/10;
        b=N_temp%10;
        c=(a+b)%10;
        d=b*10+c;
        N_temp=d;
        count++;
    }
    cout<<count<<"\n";
    return 0;
}