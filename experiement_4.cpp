#include<iostream>
// #include<type.h>
#include<string.h>
using namespace std;
class string
{
	char s1[25],s2[25];
public:
	string (char str1[],char s2[])
	{
		strcpy(s1,str1);
		strcpy(s2,str2);

	}
	void operator + ()
	{
		cout<<"concatenation:  "<<strcat(s1,s2);
		cout<<endl;
	}
	void operator = ()
	{
		strcpy(s1,s2);
		cout<<"string 1 "<<s1<<"string 2"<<s2<<endl;
	}
	void operator <= ()
	{
		int a=strcampi(s1,s2);
		if(a>0)
		{
			cout<<"string 1 is greater"<<endl;
		}
		else if(a==0)

		{
			cout<<"string 1 and string 1 are equal"<<endl;
		}
		else
{
			cout<<"string 2 is greater"<<endl;
		}
	}
	void length()
	{
		cout<<"length :"<<strlen(s1);

	}
	void lower()
	{
		cout<<to lower(s1);
	}
	void upper()
	{
		cout<<to upper(s1);
	}

}
int  main ()
{
	cout<<"enter strings";
	char s1[25],s2[25];
	cin>>s1>>s2;
	string a(s1,s2);
	+a;
	=a;
	<=a;
	a.length();
	a.lower();
	a.upper();

}
}