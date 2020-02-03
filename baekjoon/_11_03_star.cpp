#include <iostream>
#include <vector>
using namespace std;

void star(int n, int x, int y,vector<vector<int>> &vec){
    if(n==1){
    vec[x][y]=1;
    return;}
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i!=1||j!=1)
                star(n/3,x+i*(n/3),y+j*(n/3),vec);
        }
    }

}
int main(){
    int n;
    cin>>n;

    vector<vector<int>> vec(n,vector<int>(n,0));

    star(n, 0, 0, vec);


    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(vec[i][j]==1)
                cout<<"*";
            else
                cout<<" ";
                        
        }
        cout<<"\n";
    }

    return 0;
}