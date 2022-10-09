#include<iostream>
using namespace std;
class qwerty
{
public: 
void input()
{       
	string h1,h2;
	cout<<"string copy :\n";
	cout<<"enter string to coppy : h1:";
	getline(cin,h1);
	h2=h1;
  cout<<"h1="<<h1<<endl;
  cout<<"h2="<<h2;
}
};
main()
{
	qwerty obj;
	obj.input();
	
}
