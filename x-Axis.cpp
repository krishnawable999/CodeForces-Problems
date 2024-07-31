#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3;
        cin>> x1>>x2>>x3;
        vector<int> v;
        v.push_back(x1);
        v.push_back(x2);
        v.push_back(x3);
        sort(v.begin(), v.end());
        // cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
        int mid = v[1];
        int ans = abs(mid-x1) + abs(mid-x2) + abs(mid-x3);

        cout<<ans<<endl;
    }
}