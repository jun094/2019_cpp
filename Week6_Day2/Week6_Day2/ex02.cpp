#include<iostream>

using namespace std;

//int count =0; // count��� �������� ���̾��� -> �ٸ� Ŭ������ ��ĥ �� �� �� ����� ���� -> static

class Circle
{
private:
	static int count; // static(����) , class�ȿ� �ִ� �������� -> �׷��� count=0 �ʱ�ȭ�� ����?? �ؿ� !!

public:
	
	int m_r;
	int m_index;

	Circle(int r = 10)
	{
		count++;
		m_index=count;

		m_r=r;
	}

	void draw()
	{
		cout<<"Circle "<<m_index<<" : "<<m_r<<endl;
	}
	static int getCount() // static ������ ��ȯ�ϴ� getter��
	{
		return count; //static ������ private���� ������ main���� �����ϰ� ������.
	}
};
int Circle::count =0 ; // static�� ���� �ʱ�ȭ 


void func()
{
	static int count= 0 ; // �Լ��ӿ����� static�� �����ϴ�. 

	cout<<"func : " << count<<endl; // 10���� �������� ���� -> 0���� ����� �۵���
	count++;
}


int main()
{
	Circle a(1);
	Circle b;

	a.draw();
	b.draw();

	
	//Circle::count = 10; // �̷��� main������ static ���� ����� �����ϴ�. -> ����, static������ private���� �ϸ� ���� �Ұ���.
	cout<<Circle::getCount()<<endl;


	for(int i=0;i<10; i++)
	{
		func();
	}

	return 0;
}