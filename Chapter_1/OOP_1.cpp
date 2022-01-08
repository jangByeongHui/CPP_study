#include <iostream>
#include <cstring>

using namespace std;
typedef struct{
	int id;
	int balance;
	char name[100];
} Account;

Account members[100];
int numOfmembers=0;

void show_menu(void)
{

	cout<<"-----Menu-----"<<endl;
	cout<<"1. 계좌개설"<<endl;
	cout<<"2. 입 금"<<endl;
	cout<<"3. 출 금"<<endl;
	cout<<"4.계좌정보 전체 출력"<<endl;
	cout<<"5. 프로그램 종료"<<endl;
}
void make_account(void)
{
	int id;
	int balance;
	char name[100];

	cout<<"[계좌 개설]"<<endl;
	cout<<"계좌 ID: ";cin>>id;
	cout<<"이름: ";cin>>name;
	cout<<"입금액: ";cin>>balance;
	cout<<endl;

	members[numOfmembers].id=id;
	members[numOfmembers].balance=balance;
	strcpy(members[numOfmembers].name,name);
	numOfmembers++;
}

void DepositMoney(void)
{
	int id;
	int money;
	int success=0;

	cout<<"[입 금]"<<endl;
	cout<<"계좌ID: ";cin>>id;
	cout<<"입금액: ";cin>>money;

	for(int i=0;i<numOfmembers;i++){
		if(members[i].id==id){
			members[i].balance+=money;
			success=1;
			break;
		}
	}

	if(success){
		cout<<"입금 완료"<<endl;
	}else{
		cout<<"입금 실패"<<endl;
	}
}

void WithrawMoney(void)
{
	 int id;
        int money;
        int success=0;

        cout<<"[출 금]"<<endl;
        cout<<"계좌ID: ";cin>>id;
        cout<<"출금액: ";cin>>money;

        for(int i=0;i<numOfmembers;i++){
                if(members[i].id==id){
                        members[i].balance-=money;
                        success=1;
                        break;
                }
        }

        if(success){
                cout<<"출금 완료"<<endl;
        }else{
                cout<<"출금 실패"<<endl;
        }
}

void showAllInfo(void){
	for(int i=0;i<numOfmembers;i++){
		cout<<"계좌ID: "<<members[i].id<<endl;
		cout<<"이름: "<<members[i].name<<endl;
		cout<<"잔액: "<<members[i].balance<<endl;
	}
}
int main(void)
{
	int select;

	while(1){
		show_menu();
		cout<<"선택: ";
		cin>>select;
		cout<<endl;

		if(select==1){
			make_account();
		}
		else if(select==2){
			DepositMoney();
		}
		else if(select==3){
			WithrawMoney();
		}
		else if(select==4){
			showAllInfo();
		}
		else if(select==5){	
			return 0;
		}
		else{
			cout<<"잘못된 선택!"<<endl;
		}
	}
	return 0;
	
}
