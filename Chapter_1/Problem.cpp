#include <iostream>

int main(void){
	int result=0;
	for(int i=0;i<5;i++){
		int val;
		std::cout<<i+1<<"번째 정수 입력: ";
		std::cin>>val;
		result+=val;
	}
	std::cout<<"합계: "<<result<<std::endl;
	
	char name[100];
	char phone[100];

	std::cout<<"이름을 입력하세요: ";
	std::cin>>name;
	std::cout<<"전화번호를 입력하세요: ";
	std::cin>>phone;

	std::cout<<"이름은 "<<name<<"\n전화번호는 "<<phone<<"입니다."<<std::endl;
	int num;
	std::cout<<"구구단 할 숫자를 입력하세요: ";
	std::cin >> num;
	
	for(int i=1;i<10;i++){
		std::cout<<num<<" * "<<i<<" = "<<num*i<<std::endl;
	}

	while(1){
		int pay;
		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >>pay;

		if(pay==-1)
			break;
		std::cout<<"이번 달 급여 : "<<50+pay*0.12<<"만원"<<std::endl;
	}

	return 0;
}

