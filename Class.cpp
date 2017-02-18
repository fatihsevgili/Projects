#include <iostream>

using namespace std;

class Toplama
{
private:
	int a;
	int b;
public:
	Toplama()
	{
		a=0;
		b=0;
	}
	~Toplama()
	{

	}
	int topla(int,int);
	
};

int Toplama::topla(int a, int b)
{

	return a+b;
}

int main(int argc, char const *argv[])
{
	Toplama obj;
	cout<<obj.topla(12,3)<<endl;	
	return 0;
}
