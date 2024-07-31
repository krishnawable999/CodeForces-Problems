#include<iostream>
using namespace std;

int main(){
    int n;
    int numfr = 3;
    cin >> n;
    int a,b,c,ans=0;
    for(int i=0 ; i<n ; i++){
        cin >>a>>b>>c;
        if((a == 1 && b == 1 && c == 1) || (a == 0 && b == 1 && c == 1) || (a == 1 && b == 0 && c == 1) || (a == 1 && b == 1 && c == 0) || (a==1 && b==1 && c==0)){
            ans+=1;
        }
    }
    cout <<ans<<endl;
}