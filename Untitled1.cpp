#include<iostream>
using namespace std;
class myclass2;
class myclass1
{
	private:
		float value;
		public:
			myclass1()
			{
				value=200;
			}
			friend float addboth(myclass1,myclass2);
			friend float subboth(myclass1,myclass2);
			friend float mulboth(myclass1,myclass2);
			friend float divboth(myclass1,myclass2);		
};
class myclass2
{
	private:
		float value;
		public:
			myclass2()
			{
				value=100;
			}
			friend float addboth(myclass1,myclass2);
			friend float subboth(myclass1,myclass2);
			friend float mulboth(myclass1,myclass2);
			friend float divboth(myclass1,myclass2);
};
 main()
{
	myclass1 myclass1obj;
	myclass2 myclass2obj;
	char choice;
	cout<<"Please enter one of the operator +,-,/,* "<<" Followed by enter "<<endl;
	cin>>choice;
	if(choice=='+')
	{
		cout<<"The sum is : "<<addboth(myclass1obj,myclass2obj)<<endl;
	}
	else if(choice=='-')
	{
	cout<<"The difference is : "<<subboth(myclass1obj,myclass2obj)<<endl;	
	}
	else if(choice=='*')
	{
		cout<<"The Multiplication is : "<<mulboth(myclass1obj,myclass2obj)<<endl;
	}
	else if(choice=='/')
	{
		cout<<"The division is : "<<divboth(myclass1obj,myclass2obj)<<endl;
	}
	else 
	{
		cout<<"Enter a valid choice next time. the program is terminating"<<endl;
	}
	system("PAUSE");
}
float addboth(myclass1 object1, myclass2 object2)
{
	return(object1.value+object2.value);
}
float subboth(myclass1 object1, myclass2 object2)
{
	return(object1.value-object2.value);
}
float mulboth(myclass1 object1, myclass2 object2)
{
	return(object1.value*object2.value);
}
float divboth(myclass1 object1, myclass2 object2)
{
	return(object1.value/object2.value);
}

