#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char,int> mp;

    for(int i=0 ; i<s.length() ; i++){
        mp[s[i]]++;
    }
    int dist=0;
    //int even =0 ;
    for(auto it:mp){
        dist++;
    }

    if(dist %2 != 0){
        cout<<"IGNORE HIM"<<endl;
    }
    else
    cout<<"CHAT WITH HER"<<endl;
}