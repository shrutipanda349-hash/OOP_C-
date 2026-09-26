//Write a C++ program to find area of a Tringle, Rectangle, Circle and Square using Function Overloading.
#include<iostream>
using namespace std;
float area(float b,float h)
{
	return (0.5*b*h);
}
int area(int l,int b)
{
	return (l*b);
}
float area(float r)
{ 
	return (3.14*r*r);
}
int area(int a)
{
	return (a*a);
}

int main()
{
	int a, l,b2;
	float b1,h,r;

	cout<<"Enter length and height of triangle:";
	cin>>b1>>h;
	cout<<"Enter length and breadth of rectangle:";
       cin>>l>>b2;
	cout<<"Enter radius of the circle:";
	cin>>r;
	cout<<"Enter side of square:";
	cin>>a;

  

	cout<<"Area of triangle is:"<<area(b1,h)<<"\n";
	cout<<"Area of Rectangle is:"<<area(l,b2)<<"\n";
	cout<<"Area of Circle is:"<<area(r)<<"\n";
	cout<<"Area of Square is:"<<area(a)<<"\n";

		return 0;
}




