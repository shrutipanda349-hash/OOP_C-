/*WAP to define a class COMPLEX having members as real, and imag. Define a user-defined function ADDCOMPLEX () which will receive two objects as its arguments and will return aa object. Use the default constructor and parameterized constructors to initialize the data members of COMPLEX class.*/
#include<iostream>
using namespace std;

class Complex
{     private:
	int r,i;
	public:
	Complex();
	Complex(int r,int i);

	void input();
	void display();
	Complex add_complex(class Complex c1, class Complex c2);
};

   Complex::Complex(){
	   r=0;
	   i=0;
   }
   
 Complex:: Complex(int re, int im)
{
	r=re;
	i=im;
}

/*	void Complex::input()
	{
		cout<<"Enter real part:";
		cin>>r;
		cout<<"Enter imaginary part:";
                cin>>i;
	}*/

	void Complex::display()
	{
		if(i>=0)
		{
			cout<<r<<"+"<<i<<"i";
		}
		else
		{
			cout<<r<<"-"<<i<<"i";
		}

		printf("\n");
	}

	class Complex Complex::add_complex(class Complex c1,class Complex c2)
	{
	    class Complex c3; 
     	c3.i=c1.i+c2.i;
	c3.r=c1.r+c2.r;
	return c3;
}

int main()
{
	Complex c1(1,2),c3,c2(3,7);
	cout<<"TWO COMPLEX NUMBERS ARE:"<<"\n";
	c1.display();
	c2.display();
	cout<<"Addition of two complex number"<<"\n";
       c3=c3.add_complex(c1,c2);
	c3.display();
	return 0;
}






