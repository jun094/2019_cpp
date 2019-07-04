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

		if(check == 0) // ã�����ϴ� �̸��� ��Ÿ���� ��
		{
			cout<<(m_p+i)->getName()<<"�� ������ "<<(m_p+i)->getArea()<<endl;
			break;
		}
	}
	assert(check == 0); // ã�����ϴ� �̸��� ���� �� ����
}
void CircleManager::searchByArea(int minArea)
{
	int check=-1;
	cout<<minArea<<"���� ū ���� �˻��մϴ�"<<endl;

	for(int i=0;i<m_size;i++)
	{
		if( (m_p+i)->getArea() > minArea )
		{
			check++; // minArea���� ū ������ ������ check ++
			cout<<(m_p+i)->getName()<<"�� ������ "<<(m_p+i)->getArea()<<", ";
		}
	}
	cout<<endl;

	assert(check>0); //check�� ������ ������� ���� minArea���� ū ������ ���ٴ� ��
}

void CircleManager::setName(string meberName,int radius,int index)
{
	(m_p+index)->setCircle(meberName,radius);
}


int main()
{
	int size; // ���� ����
	string findName; // �˻��ϰ��� �ϴ� �̸�
	int minArea; // �ּ� ����

	cout<<"���� ����"<<" >> ";
	cin>>size;
	CircleManager *pCircleM = new CircleManager(size);


	for(int i=0;i<size;i++)
	{
		string memberName;
		int radius;

		cout<<"�� "<<i+1<<"�� �̸��� ������"<<" >> ";
		cin>>memberName>>radius;

		pCircleM->setName(memberName,radius,i);
	}


	cout<<"�˻��ϰ��� �ϴ� ���� �̸�"<<" >> ";
	cin>>findName;
	pCircleM->searchByName(findName);

	cout<<"�ּ� ������ ������ �Է��ϼ���"<<" >> ";
	cin>>minArea;
	pCircleM->searchByArea(minArea);

	delete pCircleM;

	return 0;
}