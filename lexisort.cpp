#include<iostream>
#include<cstring>
using namespace std;

void swap(char &str1,char &str2)
{
    char temp;
    temp = str1;
    str1 = str2;
    str2 = temp;
}
int main()
{
    char str[10];
    char temp;
    cin>>str;	
	int i,flag=0;
	int length = strlen(str);	
    i=length-1;
    
	while( i > 1)
    {
        if(str[i] < str[i-1])
        {
            swap(str[i],str[i-1]);
            flag = 1;
            break;
        }
    i--;
    }
 
   if(flag == 0 )
    {
      int index=1,newindex;
      char min;
      int firstloop=0;
       while(index != length)
        {
            if( (str[index] < str[0])  )
            {
                if( firstloop > 0)
                {
                    if(str[index] > min)
                        min = str[index];
                           newindex=index;
                }
                else
                {

                    min = str[index];
                    newindex= index;
                }
            }
        index++;
        }      
     swap(str[0],str[newindex]);

    }
    for( int m = i;m < length-1 ;m++)
    {
        for(int n = i;n < length-1 ;n++)
        {
            if(str[n] < str[n+1])
                swap( str[n] , str[n+1]);  
        }
    }
    cout<<str<<endl;


return 0;
}

            	
