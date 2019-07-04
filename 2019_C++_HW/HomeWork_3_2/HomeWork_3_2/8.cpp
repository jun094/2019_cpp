#include<iostream>
#include<cassert>
#include"string"

using namespace std;

class Person{
private:
	string name;
public:
	Person(void);

	Person(string name);
	~Person();

	string getName();
};

class Family{
private:
	Person *m_p; // 배열 포인터
	int m_size;
	string m_FamilyName;

public:
	Family(void);
	Family(string name, int size);
	~Family();

	void setName(int index, string name);
	void show();
};


Person::Person(void)
{
	this->name = "최준영";
}
Person::Person(string name)
{
	this->name = name;
}
Person::~Person(){}
string Person::getName() { return name; }

Family::Family(void)
{
	m_FamilyName = "최씨 집안";
	m_size=1;
	m_p = new Person[m_size];
}
Family::Family(string name, int size)
{
	m_FamilyName=name;
	m_size=size;

	m_p = new Person[m_size]; // 배열포인터 m_p가 객체배열 Person을 가리킨다.
}
Family::~Family()
{
	delete [] m_p;
}
void Family::setName(int index, string name)
{
	assert(index>=0 && index<m_size);
	m_p[index] = name;
}
void Family::show()
{
	cout<<m_FamilyName<<"가족은 다음과 같이 3명 입니다."<<endl;

	for(int i=0;i<m_size;i++)
	{
		cout << (m_p+i)->getName() << "   ";
	}
	cout<<endl;
}


int main()
{
	Family *simpson = new Family("Simpson", 3);

	simpson->setName(0,"Mr.Simpson");
	simpson->setName(1,"Mrs.Simpson");
	simpson->setName(2,"Bart Simpson");

	simpson->show();

	delete simpson;

	return 0;
}