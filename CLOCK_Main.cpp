/*
		开源声明：此程序为倒计时。
				  只提供参考，可作修改。
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

#define HAOMIAO 1000

using namespace std;


void Jishi(int second){							//clock()是“返回CPU单位计时”的函数，最主要的函数，没有之一
	clock_t end;					
	end = clock() + second * HAOMIAO ; //CLOCK_PER_SEC 是一个常数，为1000
	while(clock()<end)
		NULL;
}

void Jingbao(){ 								//发出系统声音
	cout<<"\a";	
	//发出系统声音
}

void Dingshi_miao(){							//i为你所要定时的秒数
	cout<<"please input the number you want to notice after the second"<<endl;
	int i;
	cin>>i;
	
	system("cls");
	cout<<"Start clocking!"<<endl;

	for(;i>0;i--)
		{
			Jishi(1);
			cout<<i<<" ";
		}
	cout<<endl<<endl<<"--!!Done!!--"<<endl;
}

void Dingshi_fen(){								//分钟制
	cout<<"please input the number you want to notice after the minutes"<<endl;
	int i;
	cin>>i;
	
	system("cls");
	cout<<"Start clocking!"<<endl;

	for(;i>0;i--)
		{
			Jishi(1);
			cout<<i<<"";
			for(int j=59;j>0;j--)
			{
				Jishi(1);
				cout<<".";
			}
			cout<<endl;
		}
	cout<<endl<<endl<<"--!!Done!!--"<<endl;
}

void Dingshi_fen_30(){							//常用30分钟制
	cout<<"please input the number you want to notice after the minutes"<<endl;
	int i=30;
	
	system("cls");
	cout<<"Start clocking!"<<endl;

	for(;i>0;i--)
		{
			Jishi(1);
			cout<<i<<"";
			for(int j=59;j>0;j--)
			{
				Jishi(1);
				cout<<".";
			}
			cout<<endl;
		}
	cout<<endl<<endl<<"--!!Done!!--"<<endl;
}



int main(){
	while(1){

	int i = 0;
	char c;

	system("cls");
	cout<<"Run the Dingshi'form you wanna!"<<endl<<"1.Dingshi-miao  "<<endl<<"2.Dingshi-fen"<<endl<<"3.Dingshi-fen-30"<<endl<<endl;
	cin>>i;

	switch(i){
		case 1:
			Dingshi_miao();
			Jingbao();
			break;

		case 2:
			Dingshi_fen();
			Jingbao();
			break;

		case 3 :
			Dingshi_fen_30();
			Jingbao();
			break;

		default :
			cout<<"ERROR!"<<endl;
			break;
		}
		system("pause");
		cout<<"Again?(Y/N)         Other Character unless 'Y(or 'y')' will be break!"<<endl;
		
		cin>>c;
		if(c != 'Y' && c != 'y'){
			exit(0);
		}
	}
	return 0;										//主程序
}

