#include<iostream>
using namespace std; 
class traverse
{
	private:
	int arr[10], i,a;
	public:
	  void input()  
		{
	
		
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    }
    void output()
    {
    
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=(10-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
   
}
}; 
     main()
    { 
    	traverse obj;
    	obj.input();
    	obj.output();

}
