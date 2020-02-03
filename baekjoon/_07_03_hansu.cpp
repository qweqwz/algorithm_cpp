#include <iostream>
using namespace std;
int main(){
    int N;
    int count = 0;
    cin>>N;
    for(int i=1;i<N+1;i++){
        if(i<100){
            count++;
        }
        else{
            int temp = i;
            if(((temp/100)-(temp/10)%10)==((temp/10)%10-(temp%10))){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}