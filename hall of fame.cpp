#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0,flag=0;
        for(int i=0;i<n-1;i++){
            if(s[i]== 'L' && s[i+1] == 'R'){
                ans=i+1;
                flag=1;
                break;
            }
            else if(s[i] == 'R' && s[i+1] == 'L'){
                ans=i+1;
                flag=2;
            }
        }
        if(flag==2)
        cout<<0<<endl;
        else if(flag == 1){
            cout<<ans<<endl;
        }
        else 
        cout<<-1<<endl;
    }
}