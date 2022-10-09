#include<iostream>
//#include<conio.h>
using namespace std;
 main()
{
    int arr[50],size,insert,i,poss;	
	cout<<"enter total no of array";
	cin>>size;
	cout<<"enter array elements:\n";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element to be insrt :";
	cin>>insert;
	cout<<"enter possition or index number ";
	cin>>poss;
	for(i=size;i>poss;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[poss]=insert;
	cout<<"new array is :\n";
	for(i=0;i<size+1;i++)
	{
		cout<<arr[i]<<"   ";
		//getch();
		
	}

}
