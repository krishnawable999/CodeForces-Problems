#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1;
        cin>>x1;
        cin>>y1;
        int x2,y2;
        cin>>x2>>y2;

        if(abs(x2-y2) == abs(x1-y1)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

    return 0;
}