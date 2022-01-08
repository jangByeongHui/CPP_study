#include <iostream>
using namespace std;

int main(void)
{
	const int num=12;
	const int *ptr=&num;
	const int **dptr=&ptr;

	cout<<"num: "<<**dptr<<endl;
}
