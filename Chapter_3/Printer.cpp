#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
	private:
		char string[100];
	public:
		void SetString(char * A)
		{
			strcpy(string,A);
		}

		void ShowString()
		{
			cout<<string<<endl;
		}
};

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();

	pnt.SetString("I Love C++");
	pnt.ShowString();
	return 0;
}
