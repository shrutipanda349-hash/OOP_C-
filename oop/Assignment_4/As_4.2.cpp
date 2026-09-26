//WAP to sort the elements of the array using bubble sort 
#include<iostream>
using namespace std;
int main(){
	int a[5];
	int temp, i,j;
	cout<<"Enter the array elements:";
	for(int i=0;i<5;i++)
{
	cin>>a[i];
} 
      cout<<"Bubble sorted array is:\n";
      for(int i=0;i<5;i++)
	{
	for(int j=0;j<5-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	}
	for(i=0;i<5;i++){
		cout<<a[i]<<"\t";
	}


return 0;
}

        


