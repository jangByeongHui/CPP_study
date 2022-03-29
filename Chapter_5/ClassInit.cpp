#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num1;
        int num2;
    
    public:
        SoSimple(int n1,int n2) :num1(n1),num2(n2){

        }


        void setNum1(int n){
            this->num1 = n;
        }

        void ShowSimpleData(){
            cout<<num1<<endl;
            cout<<num2<<endl;
        }
};

int main(void){
    SoSimple sim1(15,30);
    cout<<"생성 및 초기화 직전"<<endl;
    SoSimple sim2 = sim1;
    cout<<"생성 및 초기화 직후"<<endl;
    sim2.ShowSimpleData();
    return 0;
}