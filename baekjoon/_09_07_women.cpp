#include <iostream>
using namespace std;
int main(){
    int T;
    int k, n;
    cin>>T;
    int people[15][15];


    for (int i=0; i<15; i++){
        people[0][i]=i;
        people[i][0]=0;
    }

    for (int i=1; i<15; i++){
        for (int j=1; j<15; j++){
            people[i][j]=people[i-1][j]+people[i][j-1];
        }
    }

    while(T--){
        cin>>k;
        cin>>n;
        cout<<people[k][n]<<"\n";
    }
    return 0;
}
