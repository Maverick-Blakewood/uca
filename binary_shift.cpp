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

   
    int ele;
    cout<<"enter the element to be searched";
    cin>>ele;
    int mid,start,end;

    start = 0;
    end = n;
    mid = n/2;

    if(arr[0] > arr[n-1]){
      
        while( start != end) {
          if(arr[mid] > arr[mid + 1])
            break;
         if(arr[mid] < arr[start])
                end = mid - 1;
         else
                start = mid + 1;

        
    
        mid= (start + end)/2;
    }
}
    
cout<<mid<<endl;

return 0;
}

