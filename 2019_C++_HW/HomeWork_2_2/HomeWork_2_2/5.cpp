#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Random{

private:
	int m_left,m_right; //�������� �������� ���ϵ��� private�� ���־���. 

public:

	Random(); //�⺻������
	Random(int left,int right);
	~Random(); //�Ҹ���

	int next();
	int nextInRange(int left,int right);


	//getter
	//����, ����ڰ� ������ �˰���� ��츦 ����� �����Ҵ�.
	int getL()	{ return m_left; }
	int getR()	{ return m_right; }

	//setter
	//����, ���� �Է��� �����ϴٸ� ������ 32767�̻��� ���� �ʵ��� �Ͽ���. 
	void setL(int left)	
	{ 
		if(left<0) left = 0;
		m_left = left; 
	}
	void setR(int right)	
	{ 
		if(right>32767) right = 0;
		m_right = right; 
	}
};

Random::Random() 
{
	m_left = 0;
	m_right = 32767;
}

Random::~Random() { }

int Random::next()
{
	int n = rand();
	return n;
}

int Random::nextInRange(int left,int right)
{
	++right;
	int n = (rand()%(right-left))+left; // ex)(2,4) : 4���� �������� 5�� �������� --> �� �������� �߿��� 2���� Ŭ���� +2�� ���ָ�ȴ�. 

	return n;
}


int main()
{
	srand((unsigned)time(0));

	Random r;

	//RAND_MAX = 32767
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;

	for(int i=0;i<10;i++)
	{
		int n= r.next();
		cout<<n<<' ';
	}

	cout << endl << endl << "-- 2����" << "4������ ���� ���� 10 �� --" << endl;

	for(int i=0; i<10; i++)
	{
		int n = r.nextInRange(2,4);
		cout << n << ' ';
	}
	cout << endl;


	return 0;
}