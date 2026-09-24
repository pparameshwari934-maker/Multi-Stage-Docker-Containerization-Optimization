#include <iostream>
using namespace std ;                
int main()
{
int a [10][10],rows,cols ;
cout <<"Entet number of rows:" ;
cin>>rows ;
cout <<" Enter number of culumns :" ;
cin >>cols;
cout <<"Enter matrix elements :\n";
for(int i=0;i<rows;i++)
{
	for(int j=0;j<cols;j++)
	{
	
cin >> a [i][j];
 }
}
cout <<"n\matrix is :\n";
for (int i=0;i<rows;i++)
{
	cout<<a[i][j]<<"\t";
}
cout <<
}
return 0;
}




