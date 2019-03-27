#include <iostream>
using namespace std;
int main(int argc, char** argv)
 {
	int year,month,day;
	cout<<"請輸入您的出生年份(西元):";
	cin>>year;
	cout<<"請輸入您的出生月份:";
	cin>>month;
	cout<<"請輸入您的出生日期:";
	cin>>day;
	cout<<"您的出生年月日是"<<year<<"年"<<month<<"月"<<day<<"日";
	system("PAUSE");
	return 0;
}
