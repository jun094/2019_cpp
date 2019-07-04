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
	// private�� ���������� �˰� ������ -> main������ ������ ������
	int getYear() { return y; }
	int getMonth() { return m; }
	int getDay() { return d; }

	//setter
	//���⼱ ������� ������ ��������
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
	int count = 0 ; // cDate �迭�� index��
	int startIndex=0,finishIndex = 0; // ���ڿ����� ���ڰ� �����ϰ� ������ ���ڿ��� ��ġindex��
	int len = _cDate.length(); 

	for(int i=0;i<len;i++)
	{
		if(_cDate[i] == '/') //0123/56/89
		{
			finishIndex = i; // 1945/8/15���� '/'�� ������ index���� ���
			cDate[count]=_cDate.substr(startIndex,finishIndex-startIndex); // finishIndex-startIndex = '����' ���ڿ��� ����
			count++; // count[0]=�� , count[1]=��
			startIndex = i+1; // startindex�� '/' ��ġindex���� ������ ����Ű���� ��.
		}
		else if(i==len-1) // ���ڿ��� ������ ���ڸ� ����ų ��
		{ //len=i=9
			finishIndex = i+1;
			cDate[count]=_cDate.substr(startIndex,finishIndex-startIndex); // count[2]=��
		}
	}

}

Date::~Date() { }

void Date::show()
{
	cout<<stoi(cDate[0])<<"��"<<stoi(cDate[1])<<"��"<<stoi(cDate[2])<<"��"<<endl;
} 

int main()
{
	Date birth(2014,3,20);
	Date independenceDay("1945/8/15");

	independenceDay.show();

	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}