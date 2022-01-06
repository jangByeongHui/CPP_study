#include <iostream>

int SimpleFunc(int a,int b=10){
	return a+1;
}
int SimpleFunc(void){
	return 10;
}

int main(void){
	std::cout<<SimpleFunc()<<std::endl;
	return 0;
}
