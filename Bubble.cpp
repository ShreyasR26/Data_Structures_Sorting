#include<iostream>
using namespace std;
struct array
{
	int A[30];
	int n;
}arr;




int main()
{
	int flag=0,temp,n,i,j,A[30];
	cout<<"Size:"<<endl;
	cin>>n;
	cout<<"Array:"<<endl;
	for(int i=0;i<n;++i)
	{
		cin>>A[i];
	}
  for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( A[j] > A[j+1])
            {
                // swap the elements
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
	cout<<"Sorted Array is: "<<endl;
	for(int i=0;i<n;++i)
	cout<<A[i]<<" ";
	return 0;
}
