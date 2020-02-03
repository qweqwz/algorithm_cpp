#include <iostream>
using namespace std;
int main(){

    int N;
    cin>>N;
    int a=N/5;
    int result=2000;
    int temp1, temp2;

    for(int i=0; i<=a;i++){
        if(i==0){
            temp1 = N;
        }
        else{
            temp1=N-5*i;
        }

        if(temp1%3==0){
            temp2 = i+ temp1/3;
            if(temp2<result){
                result=temp2;
            }
        }
    }
    if(result==2000)
    cout<<-1;
    else
    cout<<result;
    return 0;
        
}