#include<iostream.h>
#include<stdio.h>
#include<string.h>
using namespace std;

void sort(char *str)
{
int length=strlen(str);
char temp;
for(int i=0; i<length; i++)
{
   for(int j=0;j<length-i-1;j++)
	{
	    if(str[j] > str[j+1])
		{
		  temp=str[j];
		  str[j]=str[j+1];
		  str[j+1]=temp;
		}
	}
		
	

}
}


void swap(char *str,char *str2 )
{
char temp[20];
   strcpy(temp,str);
   strcpy(str,str2);
   strcpy(str2,temp);

}

int main()
{

char str[10][20],str2[10][20];
int n;
cout<<"enter the number of words";
cin>>n;

cout<<"enter the word now";


for(int i=0;i<n;i++)
{
cin>>str[i];
strcpy(str2[i],str[i]);
}

for(int i=0;i<n;i++)
sort(str[i]);


char temp[20];
char temp2[20];
int k= 0;
int index = 0;
   while(k!= n)
   {
	if(strcmp(str[k],str[k+1]) == 0)
	   {
		k++;
	   }
	else
	   {
		index=k+1;
		while(index != n)
		{
		   if(strcmp(str[index],str[k]) == 0)
			{
			//swap(str[index],str[k+1]);
		        swap(str2[index],str2[k+1]);
			break;
			}
		   else
			index++;
		}


          k++;
          }
	}

cout<<"result is ="<<endl;
for(int i=0;i<n;i++)
cout<<str2[i]<<endl;


return 0;
}
