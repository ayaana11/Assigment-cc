#include<iostream>
using namespace std;
class qwerty
{
public: 
void input()
{       
	string s1,s2;
	cout<<"string copy :\n";
	cout<<"enter string to coppy : s1:";
	getline(cin,s1);
	s2=s1;
  cout<<"s1="<<s1<<endl;
  cout<<"s2="<<s2;
}
};
main()
{
	qwerty obj;
	obj.input();
	
}
