#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Random{

private:
	int m_left,m_right; //범위에는 접근하지 못하도록 private에 써주었다. 

public:

	Random(); //기본생성자
	Random(int left,int right);
	~Random(); //소멸자

	int next();
	int nextInRange(int left,int right);


	//getter
	//만약, 사용자가 범위를 알고싶을 경우를 대비해 만들어보았다.
	int getL()	{ return m_left; }
	int getR()	{ return m_right; }

	//setter
	//만약, 범위 입력이 가능하다면 음수와 32767이상을 쓰지 않도록 하였다. 
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
	int n = (rand()%(right-left))+left; // ex)(2,4) : 4보다 작을려면 5의 나머지들 --> 그 나머지들 중에서 2보다 클려면 +2를 해주면된다. 

	return n;
}


int main()
{
	srand((unsigned)time(0));

	Random r;

	//RAND_MAX = 32767
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;

	for(int i=0;i<10;i++)
	{
		int n= r.next();
		cout<<n<<' ';
	}

	cout << endl << endl << "-- 2에서" << "4까지의 랜덤 정수 10 개 --" << endl;

	for(int i=0; i<10; i++)
	{
		int n = r.nextInRange(2,4);
		cout << n << ' ';
	}
	cout << endl;


	return 0;
}