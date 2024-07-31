#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    char x[2][n];

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> x[i][j];
        }
    }

    int c=0;

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<n ; j++){
            if(j+2<n && i+1<2 && x[i][j]=='x' && x[i][j+2] == 'x' && x[i][j+1] == '.' && x[i+1][j+1] == '.' && x[i+1][j] == '.' && x[i+1][j+2] == '.'){
                ++c;
            }

            if(i-1 >= 0 && j+2 < n && x[i][j] == 'x' && x[i][j+2]=='x' && x[i][j+1]=='.' && x[i-1][j]=='.' && x[i-1][j+1]=='.' && x[i-1][j+2] == '.'){
                ++c;
            }
        }

    }

    cout<<c<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }

    return 0;
}