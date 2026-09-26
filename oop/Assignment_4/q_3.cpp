//WAP to merge the elements of two arrays using function 
#include<iostream>
using namespace std;
void merge(int a[50],int b[50],int n1,int n2)
{
	
	int i,m[50];
	for(i=0;i<n1;i++)
	{
		m[i]=a[i];
	}
	for(int j=0;j<n2;j++)
	{
		m[i]=b[j];
		i++;
	}
	m[i]='\0';
	cout<<"merged array="<<endl;
	for(int i=0;i<(n1+n2);i++)
		cout<<m[i]<<"\t"<<"\n";
}
int main()
{
	int a[50],b[50],n1=2,n2=3;
	/*cout<<"enter array size of a:";
	cin>>n1;
	cout<<"enter array size of b:";
	cin>>n2;*/
	cout<<"enter element of a:\n";
	for(int i=0;i<n1;i++)
		cin>>a[i];
	cout<<"enter elements ofb:\n";
	for(int i=0;i<n2;i++)
		cin>>b[i];
	merge(a,b,n1,n2);
	
	return 0;
}
