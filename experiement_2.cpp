//addition of two complex numbers using constructor overloading 
#include<iostream>
class complex 
{
	int real , img;
public:
	complex()
	{
		complex(int r)
		{
			real r;
			img=i;

		}
	}
	complex(int r,int i )
	void output()
	{
		cout<<"Ans: "<<real<<" ";
	}
	friend complex_sum(complex )
};
complex_sum(complex c1,complex c2)
{
	complex c3;
	c3 real =c1.real+c2.real;
	return c3;

}
{
	complex c1;
	cout<<"Enter the value 1"<<endl;
	cout<<"enter the value 2"<<endl;
	complex c2(a);
	complex c3(a,b);
	complex c4=sum(c2,c3);
	c4 output();
}