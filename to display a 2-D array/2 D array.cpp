#include<iostream>
using namespace std;
int main()
{
	int a[10][10],r,c,i,j;
	cout<<"size of an array";
	cin>>r>>c;
	cout<<"enter "<<r*c<<" elements";
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	cin>>a[i][j];
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
