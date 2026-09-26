//Write a C++ program to find Volume of Cube, Cylinder, Sphere using Function Overloading
#include<iostream>
using namespace std;
int volume(int a)
{
	return(a*a*a);
}
float  volume(int r,int h)
{
	return (3.14*r*r*h);
}
float volume(float r1)
{
	return (1.33*3.14*r1*r1*r1);
}

int main()
{
	int a,r,h;
	float r1;
        cout<<"Enter radius and height of cylinder:";
	cin>>r>>h;
	cout<<"Enter radius of the sphere:";
	cin>>r1;
	cout<<"Enter side of cube:";
	cin>>a;

  

	cout<<"Volume of cube is:"<<volume(a)<<"\n";
	cout<<"Volume of Cylinder is:"<<volume(r,h)<<"\n";
	cout<<"Volume of Sphere is:"<<volume(r1)<<"\n";

		return 0;
}

