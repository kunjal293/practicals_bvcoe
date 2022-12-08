#include<iostream>
template<class T>
{
private:
	T num1,num2;
public:
	largest(tn1,tn2)
	{
		num1=n1;
		num2=n2;

	}
	void display()
	{
		cout<<"largest number : "<<add()<<endl;
	}
	T add()
	{
		return ((num1>=num2)?num1:num2)
	}

};
int main()
{
	largest<int>int large(2,1);
	largest<float>float large (3.2,5.6);
	cout<<"integer:" <<endl;
	int large.display();
	cout<<"float:"<<endl;
	float large.display();
}