#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp; 
	
}
int main()
{
   int size=0,n,j;
   cout<<"enter size";
   cin>>n;
   int arr[50];
	for(int i=0 ;i<n;i++)
		cin>>arr[i];
   for(int i=0;i<n;i++)
        {
	    if ( arr[i] >  arr[i+1])
		{
		 swap(&arr[i],&arr[i+1]);
		    for(j = i ;j>0; j--)
			{
		     	    if(arr[j] < arr[j-1])
				swap(arr[j],arr[j-1]);
			    else
				break;
			}
		}	

	}

	for(int i=0 ;i<n;i++)
		cout<<arr[i]<<" ";
return 0;
}   
			
			


