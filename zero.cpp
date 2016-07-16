#include<iostream>

using namespace std;

int main()
{
int matrix[10][10];
int nRows=4,nColoumns=4;
int ZRow = 0;
int ZColoumn = 0;

for(int i=0;i<nRows;i++)
{
   for(int j=0;j<nColoumns;j++)
	cin>>matrix[i][j];
}

for(int i=0 ; i < nRows ; i++)
{
    for(int j=0;j< nColoumns ; j++)
        {
	    if(matrix[i][j] == 0)
		{
		   ZRow= ZRow | (1 << i);
		   ZColoumn=ZColoumn | (1 << j);

		}
	}
}
cout<<endl;
for(int i=0;i < 4;i++)
{
   if((ZRow & ( 1 << i)) != 0)
	{
	   for(int j=0; j < nColoumns ; j++)
	    {
		matrix[i][j]  = 0 ;
	    }
	}
}
for(int i=0;i < 4;i++)
{
   if((ZColoumn & ( 1 << i)) != 0)
	{
	   for(int j=0; j < nRows ; j++)
	    {
		matrix[j][i]  = 0 ;
	    }
	}
}


for(int i=0;i<nRows;i++)
{
   for(int j=0;j < nColoumns;j++)
	cout<<matrix[i][j]<<" ";
	cout<<endl;
}

return 0;
}


