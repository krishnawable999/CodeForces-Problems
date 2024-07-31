#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0 ; i<n ; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        int cnt=0;
        long long int currsum=0;
        for(int i=0;  i<n ; i++){
            currsum += v[i];
            if(2*v[i] == currsum){
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
}