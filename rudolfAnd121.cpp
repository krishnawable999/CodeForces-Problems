#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> v(n);
        for(int i=0 ; i<n ; i++){
            int x;
            cin>>x;
            v[i] = x;
        }
        bool flag=true;
        for(long long int i=0 ; flag && i+2<n ; i++){
            if(v[i] < 0 ) flag=false;

            v[i+1] -= 2*v[i];
            v[i+2] -= v[i];
        }

        flag = flag && !v[n-1] && !v[n-2];

        if(flag) cout<<"YES"<<endl;
        cout<<"NO"<<endl;
    }
}