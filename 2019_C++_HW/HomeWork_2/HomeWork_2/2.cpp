#include<iostream>
#include<cstring>
#include "string"

using namespace std;

//#include "Date.h"

class Date{
private :
	int y;
	int m;
	int d;
	string cDate[3];

public:
	Date();
	Date(int _y,int _m,int _d);
	Date(string _cDate);
	~Date();

	void show();

	//getter
	// private로 선언했지만 알고 싶을때 -> main문에서 접근이 가능함
	int getYear() { return y; }
	int getMonth() { return m; }
	int getDay() { return d; }

	//setter
	//여기선 사용하지 않지만 만들어줬다
	int setYear(int _y) { y = _y; }
	int setMonth(int _m) { m = _m; }
	int setDay(int _d) { d = _d; }
};

Date::Date()
{
	y=1900;
	m=01;
	d=01;
}

Date::Date(int _y,int _m,int _d)
{
	y=_y;
	m=_m;
	d=_d;
}

Date::Date(string _cDate)
{
	int count = 0 ; // cDate 배열의 index값
	int startIndex=0,finishIndex = 0; // 문자열에서 숫자가 시작하고 끝나는 문자열의 위치index값
	int len = _cDate.length(); 

	for(int i=0;i<len;i++)
	{
		if(_cDate[i] == '/') //0123/56/89
		{
			finishIndex = i; // 1945/8/15에서 '/'를 만날때 index값을 기억
			cDate[count]=_cDate.substr(startIndex,finishIndex-startIndex); // finishIndex-startIndex = '숫자' 문자열의 길이
			count++; // count[0]=년 , count[1]=월
			startIndex = i+1; // startindex는 '/' 위치index값의 다음을 가리키도록 함.
		}
		else if(i==len-1) // 문자열이 마지막 숫자를 가리킬 때
		{ //len=i=9
			finishIndex = i+1;
			cDate[count]=_cDate.substr(startIndex,finishIndex-startIndex); // count[2]=일
		}
	}

}

Date::~Date() { }

void Date::show()
{
	cout<<stoi(cDate[0])<<"년"<<stoi(cDate[1])<<"월"<<stoi(cDate[2])<<"일"<<endl;
} 

int main()
{
	Date birth(2014,3,20);
	Date independenceDay("1945/8/15");

	independenceDay.show();

	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}