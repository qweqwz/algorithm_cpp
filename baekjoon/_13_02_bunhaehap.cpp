#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

    int i;
    int sum;
    int temp;
    

    for(i=0;;i++){
        sum=i;
        temp=i;
        while(temp){
            sum+=temp%10;
            temp/=10;
        }

        if(sum==N||i==N)
        break;
    }

    if(i==N)
    cout<<0;
    else
    cout<<i;
}