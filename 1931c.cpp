#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector<int> &v, int n){
    int maxele = *max_element(v.begin(),v.end());
     int minele = *min_element(v.begin(), v.end());

    int i = find(v.begin(),v.end(),maxele) - v.begin();
    int j = find(v.begin(),v.end(),minele) - v.begin();

    if(j > i){
        swap(i,j);
    } 

    int cost = i-j + min(n -  i  + j,0);

    return cost;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0 ; i<n ; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }

       int ans  =  solve(v,n);
       cout<<ans<<endl;
    }
}