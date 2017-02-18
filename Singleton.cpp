#include <iostream>

using namespace std;

class Singleton
{
private:
	static bool instanceFlag;
	static Singleton *single;
	int a;
	Singleton()
	{
		a=5;	
	}
	public:
	
	static Singleton* getInstance();
	void method();
	~Singleton()
	{
		cout<< "Singleton silindi."<<endl;
		instanceFlag=false;
	}
	
};

	bool Singleton::instanceFlag=false;
	Singleton* Singleton::single=NULL;
	Singleton* Singleton::getInstance()
	{
		if(!instanceFlag)
		{
			single=new Singleton();
			instanceFlag=true;

			return single;
		}
		else{
			return single;
		}
	}

	void Singleton::method()
	{
		//a=++a;
		cout<<"Method of Singleton class"<<endl;
		//cout<<"A'nın Değeri:"<<a<<endl;
	}

	int main(int argc, char const *argv[])
	{
		Singleton *s1,*s2;
		//Singleton::getInstance()->method();
		s1=Singleton::getInstance();
		s1->method();
		//delete Singleton::getInstance();
		delete s1;
		s1->method();
		//s1.method();
		//s1->method();
		//s1=Singleton::getInstance();	
		//s1->method();
		//s1->method();
		//s2=Singleton::getInstance();
		//s2->method();


		return 0;
	}