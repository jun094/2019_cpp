//#include<iostream>
//
//using namespace std;
//
//int g_cicleCount = 0;
//
//class Circle{
//	float r; 
//	// float r=0; // �̰� �ȵ� !!! 
//				 //class�ȿ� ������ �� ������ ����Ŵ�~ �ǹ����� �����! �� �ƴϹǷ� �޸𸮰� ���µ� ���� ���� �� �� ����. (2017���ʹ� ���ư�)
//
//	int x,y; 
//	int num;
//public :
//	Circle();
//	Circle(int _x, int _y, float _r);
//	void draw();
//};
//
//// ���� ���� �ϰ� �Ʒ����� ��ü �κ�
//
////�������� �������� ���� �����ڸ� ������ --> ������ ������ ����ü�� �ٸ��� ����
//Circle::Circle() //default �����ڸ� �������� ���ڰ� ���� "Circle a;" �̰� ������ ��������
//{
//	x=0;
//	y=0;
//	r=0; // �ʱ�ȭ ��
//
//	g_cicleCount++;
//	num = g_cicleCount;
//}
//Circle::Circle(int _x, int _y, float _r)
//{
//	x = _x;
//	y = _y;
//	r = _r;
//
//	g_cicleCount++;
//	num = g_cicleCount;
//}
//void Circle::draw()
//{
//	cout << "Circle " << num << " [" << x << " , " << y << "] : " << r <<endl;
//}
//
//int main ()
//{
//	Circle a(10,30,50), b;
//	/*
//	Circle a(10,30,50); 
//	Circle b; 
//	// �̰Ŷ� ���� �ǹ��̴�. 
//	*/
//	Circle c = Circle(10,20,40); // �̷��� ǥ�⵵ �����ϴ�.
//
//	a.draw();
//	b.draw();
//	c.draw();
//
//	return 0;
//}