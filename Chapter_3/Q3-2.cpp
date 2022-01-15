#include <iostream>
using namespace std;

class Calculator
{

	private:
		int Add_count;
		int Div_count;
		int Min_count;
		int Mul_count;
	public:
		void init()
		{
			Add_count=0;
			Div_count=0;
			Min_count=0;
			Mul_count=0;
		}
		float Add(float A,float B)
		{
			Add_count++;
			return A+B;
		}

		float Div(float A,float B)
		{
			Div_count++;
			return A/B;
		}

		float Min(float A,float B)
		{
			Min_count++;
			return A-B;
		}

		float Mul(float A,float B)
		{
			Mul_count++;
			return A*B;
		}

		void ShowOpCount()
		{
			cout<<"덧셈: "<<Add_count<<" 뺄셈: "<<Min_count<<" 곱셈: "<<Mul_count<<" 나눗셈: "<<Div_count<<endl<<endl;  
		}
};

int main(void)
{
	Calculator cal;
	cal.init();
	cout<<"3.2 + 2.4 = "<<cal.Add(3.2,2.4)<<endl;
	cout<<"3.5 / 1.7 = "<<cal.Div(3.5,1.7)<<endl;
	cout<<"2.2 - 1.5 = "<<cal.Min(2.2,1.5)<<endl;
	cout<<"4.9 / 1.2 = "<<cal.Div(4.9,1.2)<<endl;
	cal.ShowOpCount();
	return 0;
}
