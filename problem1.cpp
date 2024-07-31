#include<iostream>
using namespace std;
int main(){
	long long int test;
	cin>>test;
	while(test--)
	{
		string s;
		cin>>s;
		long long int n=s.size();
		long long int len=n-2;
		if(n<=10)
		{
			cout<<s<<endl;
		}
		else
		cout<<s[0]<<len<<s[n-1]<<endl;
	}
}
