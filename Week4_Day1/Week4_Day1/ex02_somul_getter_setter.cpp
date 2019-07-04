#include<iostream>

using namespace std;

int g_cicleCount = 0;

class Circle{

private: // �ȹ�ȭ��� -> �Ⱦ��� pivate���� ����
		 // ������ ��ȣ,���� -> Circle a(10,30,50) �̷��� �����ϸ� 10,30,50 ���� ������ ���� ������ -> ������ ������ �Ұ�����
		 // �׷� �ܼ�â���� ��ǥ�� ������ �����ϰ� ������ ��϶��????
		 // �̷��� ���� ����� getter/setter ����

	float r; 
	int x,y; 
	int num;

public :
	Circle();
	Circle(int _x, int _y, float _r);
	~Circle(); // �Ҹ��� ( ��ü�� ���� �� ������ -> ����(�Լ�)�� �����ǰ� ����Ǵ� ������ �� �� �ִ� )

	void draw();



	//  <<������ ��ȣ>> --> ��� ������, ����/������ ���� �ڵ���ų

	// accessor(�����ϴ�) = getter = query   
	// ex) private�� ���������� �˰� ������ --> ���� ���ٸ� �����Ѱ� 'get' Ű����� �����ϴ°�
	float getR()	{ return r; }
	float getX()	{ return x; }
	float getY()	{ return y; }

	// mutator(���ϴ�) = setter
	// ex) private�� ���������� �������� ������ ��ǥ���� �����ϰ� ������   --> ���� ���浵 ������ �� 'set' Ű����� �����ϴ°�
	void setX(int _x)	// ���ϰ��� ���� void
	{ 
		if(_x<-100) _x = -100; // x��ǥ �ִ�,�ּҰ� ���� --> '������ ����ó��'
		if(_x>100) _x = 100; // x�� �׳� ���� �ִ°ͺ��� �̷������� ���� �ǵ��� ��Ƽ� �ٸ� ������� �� �� �ִ�. 
		x = _x;  // x���� ���ο� ������ ����
	}
	void setY(int _y)	{ y = _y; }  // y���� ���ο� ������ ����

	// Circle a(10,30,50)�� �� �ھƼ� �� �� ������, 
	// ���� ó�� x,y,r��  ���� �ǵ��� ��Ƽ� ������ �� �ڵ带 �� �� �ֱ⶧���� ����Ѵ�. 
};

Circle::Circle() 
{
	x=0;
	y=0;
	r=0; 

	g_cicleCount++;
	num = g_cicleCount;
}
Circle::Circle(int _x, int _y, float _r)
{
	x = _x;
	y = _y;
	r = _r;

	g_cicleCount++;
	num = g_cicleCount;
}

Circle:: ~Circle() // �Ҹ��� -> ����, ���ϰ��� �������� �ʴ´�.
{
	cout<< "Circle " <<num << " is dying .." << endl; // �״� ������ �����ϰ�

	g_cicleCount --; // ���������� circlecount�� ������.
}

void Circle::draw()
{
	cout << "Circle " << num << " [" << x << " , " << y << "] : " << r <<endl;
}

void func()
{
	Circle d;
}
int main ()
{
	Circle a(10,30,50), b;
	Circle c = Circle(10,20,40); 
	cout<<"count:" << g_cicleCount << endl;

	func(); // �Ҹ��ڿ� ���� ������ d�� �������� ������ a,b,c�� ��������� �״´� (�״¼����� ����)
	cout<<"count:" << g_cicleCount << endl;

	a.draw();
	b.draw();
	c.draw();

	return 0;
}