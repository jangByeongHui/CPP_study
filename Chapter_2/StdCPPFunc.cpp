#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
	char str[]="Result";
	char str2[30];

	strcpy(str2,str);
	printf("%s: %f \n",str,sin(0.14));
	printf("%s: %f \n",str2,abs(-1.25));
	return 0;
}
