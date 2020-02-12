#include <iostream>
using namespace std;
int main(){
    int N, M;
    cin>>N>>M;
    int arr[N];
    int result=M;
    int sum=0;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                sum=arr[k]+arr[j]+arr[i];
                if(sum<=M){
                    if((M-sum)<result){
                        result=M-sum;
                    }
                }
            }
        }
    }
    cout<<M-result;
    return 0;
}