#include<iostream>
using namespace std;



int main()
{
	int flag=0,temp,n,i,j,A[30],ele;
	cout<<"Size:"<<endl;
	cin>>n;
	cout<<"Array:"<<endl;
	for(int i=0;i<n;++i)
	{
		cin>>A[i];
	}
  for(i = 1; i < n; i++)
    {
     j=i-1;
     ele=A[i];
     while(A[j]>ele)
     {
     	A[j+1]=A[j];
     	j--;
	 }
	 A[j+1]=ele;
    
    }
	cout<<"Sorted Array is: "<<endl;
	for(int i=0;i<n;++i)
	cout<<A[i]<<" ";
	return 0;
}
