#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class sub
{
	public:
void input()
		{
		string a;
		cout<<"enter upper to lower case string ";
		cin>>a;
transform(a.begin(),a.end(),a.begin(), ::toupper);
	cout<<a<<endl;
	string s;
		cout<<"enter lower to upper case stiring ";
		cin>>s;

	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s<<endl;	
}	
};
int main()
{
	 sub obj;
	 obj.input();
	
}
