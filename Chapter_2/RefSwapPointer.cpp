#include <iostream>
using namespace std;

void SwapPointer(int *ref1,int *ref2){
	int temp=*ref1;
	*ref1=*ref2;
	*ref2=temp;
}

int main(void)
{
	int val1=10;
	int *ptr1=&val1;

	int val2=20;
	int *ptr2=&val2;

	SwapPointer(ptr1,ptr2);
	cout<<"Val1: "<<val1<<endl;
	cout<<"Val2: "<<val2<<endl;
	return 0;
}
