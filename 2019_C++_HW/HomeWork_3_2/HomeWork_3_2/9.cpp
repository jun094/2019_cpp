#include<iostream>
#include<cassert>
#include"string"

using namespace std;

class Circle{
private:
	int m_radius;
	string m_name;

public: 
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager{
private:
	Circle *m_p;
	int m_size;

public:
	CircleManager(void);
	CircleManager(int size);
	~CircleManager();

	void searchByName(string findName);
	void searchByArea(int minArea);
	void setName(string meberName,int radius,int index);
};


void Circle::setCircle(string name, int radius)
{
	m_name = name;
	m_radius = radius;
}
double Circle::getArea() { return m_radius*m_radius*3.14; }
string Circle::getName() { return m_name; }


CircleManager::CircleManager(void)
{
	m_p = new Circle[10];	
}
CircleManager::CircleManager(int size)
{
	m_size=size;
	m_p = new Circle[m_size];	
}
CircleManager::~CircleManager()
{
	delete [] m_p;
}
void CircleManager::searchByName(string findName)
{
	int check=10;

	for(int i=0;i<m_size;i++)
	{
		check = (m_p+i)->getName().compare(findName);

		if(check == 0) // 찾고자하는 이름이 나타났을 때
		{
			cout<<(m_p+i)->getName()<<"의 면적은 "<<(m_p+i)->getArea()<<endl;
			break;
		}
	}
	assert(check == 0); // 찾고자하는 이름이 없을 때 죽음
}
void CircleManager::searchByArea(int minArea)
{
	int check=-1;
	cout<<minArea<<"보다 큰 원을 검색합니다"<<endl;

	for(int i=0;i<m_size;i++)
	{
		if( (m_p+i)->getArea() > minArea )
		{
			check++; // minArea보다 큰 면적이 있으면 check ++
			cout<<(m_p+i)->getName()<<"의 면적은 "<<(m_p+i)->getArea()<<", ";
		}
	}
	cout<<endl;

	assert(check>0); //check가 여전히 음수라는 것은 minArea보다 큰 면적이 없다는 뜻
}

void CircleManager::setName(string meberName,int radius,int index)
{
	(m_p+index)->setCircle(meberName,radius);
}


int main()
{
	int size; // 원의 개수
	string findName; // 검색하고자 하는 이름
	int minArea; // 최소 면적

	cout<<"원의 개수"<<" >> ";
	cin>>size;
	CircleManager *pCircleM = new CircleManager(size);


	for(int i=0;i<size;i++)
	{
		string memberName;
		int radius;

		cout<<"원 "<<i+1<<"의 이름과 반지름"<<" >> ";
		cin>>memberName>>radius;

		pCircleM->setName(memberName,radius,i);
	}


	cout<<"검색하고자 하는 원의 이름"<<" >> ";
	cin>>findName;
	pCircleM->searchByName(findName);

	cout<<"최소 면적을 정수로 입력하세요"<<" >> ";
	cin>>minArea;
	pCircleM->searchByArea(minArea);

	delete pCircleM;

	return 0;
}