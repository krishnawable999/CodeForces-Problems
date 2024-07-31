// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int n = s.length();
//         string ans;
//         for(int i=0 ; i<n ; i++){
//             if(s[i] == s[i+1]){
//                 char ch = s[i]+1;
//                 ans.push_back(ch);
//             }else{
//                 ans.push_back(s[i]);
//             }
//         }

//         cout<<ans<<endl;

//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         int n = s.length();
//         string ans;
//         bool flag=true;
//         if (n == 1) {
//           if(s[0]<'z'){
//             ans.push_back(s[0]);
//           ans.push_back(s[0] + 1); 
//           }else{
//             ans.push_back(s[0]);
//           ans.push_back(s[0] - 1); 
//           }
           
//         } else {
//             for (int i = 0; i < n; i++) {
//                 ans.push_back(s[i]);
//                 if (i < n - 1 && s[i] == s[i + 1] && flag == true) {
//                     ans.push_back(s[i] + 1);
//                     flag = false;
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int calculate(string &s){
    int n = s.size();
    if(n == 0) return 0;
    int time = 2;
    for(int i=1 ; i<n ; ++i){
        if(s[i] == s[i-1]){
            time += 1;
        }
        else{
            time+= 2;
        }
    }
    return time;
}

string solve(string &s){
    string str=s;

    int max_time = calculate(s);

    for(int i=0 ; i<=s.size() ; ++i){
        for(char c='a' ; c<='z' ; ++c){
            string news = s.substr(0,i)+c+s.substr(i);
            int new_time = calculate(news);
            if(new_time > max_time){
                max_time = new_time;
                str = news;
            }

        }
    }

    return str;
}

int main() {
    int t;
    cin>>t;
    vector<string> ans;
    while(t--){
        string s;
        cin>>s;
        ans.push_back(solve(s));
    }

    for(auto it:ans){
        cout<<it<<endl;
    }
}