#include<iostream>

using namespace std;
void bubble( int arr[], int n)
{
 int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for( j=0;j<n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
			}
	}

}

int  main()
{

    int n,arr[50];
    cout<<"enter no. of elements";
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    bubble(arr,n);
    int ele;
    cout<<"enter the element to be searched";
    cin>>ele;
    int mid,start,end;

    start = 0;
    end = n;
    mid = n/2;
    
    while(arr[mid] != ele and start < end)
    {
        if(arr[mid] > ele )
            end = mid-1;
        else
            start=mid + 1;

        mid = (start+end)/2;

        if(arr[mid] == ele)
            break;     
    }

    if(arr[mid] == ele)
        cout<<"\nfound\n";
    else
        cout<<"\nnot found\n";

return 0;
}
