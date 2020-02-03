#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int T;
    int x1,y1,r1,x2,y2,r2;
    double d;
    cin >> T;
    for (int i =0; i<T; i++){

        cin>>x1>>y1>>r1>>x2>>y2>>r2;

        d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

        if(d==0){
            if(r1==r2)
            cout<<-1<<"\n";
            else
            cout<<0<<"\n";
        }
        else{
            if(d<(r1+r2)&&d>abs(r1-r2))
            cout<<2<<"\n";
            else if(d==(r1+r2)||d==abs(r1-r2))
            cout<<1<<"\n";
            else
            cout<<0<<"\n";
        }
    }
    return 0;
}