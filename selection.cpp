#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n,flag;
    cout<<"enter no. of words";
    cin>>n;
    char **arr = new char*[n];
    for(int i=0;i<n;i++)
        arr[i]  = new char[50];
     for(int i=0;i<n;i++)
        cin >> arr[i];    
    int min;
    char temp[50];

    for(int i=0;i<n-1;i++){
        min = i;
        for(int j = i+1 ;j < n;j++){
            if(strcmp( arr[j], arr[min]) < 0){
                min = j;
                flag = 1;
                }
            }
        if(flag){
            strcpy( temp , arr[i]);
            strcpy( arr[i], arr[min]);
            strcpy(arr[min],temp);
            }
        }
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    
return 0;
}
