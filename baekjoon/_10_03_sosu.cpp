#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int M, N;
    cin>>M>>N;
    int arr[N+1]={0,};


    arr[0]=1;
    arr[1]=1;

    for(int i=2; i<N+1; i++){
        if(arr[i]==0){
            for(int j=i*2;j<N+1;j+=i){
                arr[j]=1;
            }
        }

    }
    for(int i=M;i<N+1;i++){
        if(arr[i]==0)
        cout<<i<<" ";
    }

    return 0;
}

