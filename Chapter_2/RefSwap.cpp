#include <iostream>
using namespace std;

void SwapbyRef2(int &ref1,int &ref2){
	int temp=ref1;
	ref1=ref2;
	ref2=temp;
}

int main(void)
{
	int val1=10;
	int val2=20;

	SwapbyRef2(val1,val2);
	cout<<"Val1: "<<val1<<endl;
	cout<<"Val2: "<<val2<<endl;
	return 0;
}
