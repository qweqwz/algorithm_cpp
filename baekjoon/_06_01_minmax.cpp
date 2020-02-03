#include <iostream>
using namespace std;
int main(){
    int N, a;
    cin>>N;
    int arr[N];
    for (int i=0;i<N;i++){
        cin>>a;
        arr[i]=a;
    }

    int max=arr[0];
    int min=arr[0];
    for (int j=0; j<N;j++){
        if (max<=arr[j]){
            max=arr[j];
        }
        if (min>=arr[j]){
            min = arr[j];
        }

    }
    cout<<min<<" "<<max;
    return 0;
}