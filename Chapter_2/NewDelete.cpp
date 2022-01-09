#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char* MakeStrAdr(int len)
{
	//char *str=(char*)malloc(sizeof(char)*len);
	char *str=new char[len];
	return str;
}

int main(void){

	char * str=MakeStrAdr(20);
	strcpy(str,"I am so Happy!");
	cout<<str<<endl;
	int *ptr=new int;
	*ptr=20;
	cout<<*ptr<<endl;
	//free(str);
	delete []str;
	delete ptr;
	return 0;
}
