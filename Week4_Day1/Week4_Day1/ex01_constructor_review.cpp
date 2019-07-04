//#include<iostream>
//
//using namespace std;
//
//int g_cicleCount = 0;
//
//class Circle{
//	float r; 
//	// float r=0; // 이건 안됨 !!! 
//				 //class안에 변수는 이 변수가 생길거다~ 의미이지 생겼다! 가 아니므로 메모리가 없는데 값을 넣을 수 가 없다. (2017부터는 돌아감)
//
//	int x,y; 
//	int num;
//public :
//	Circle();
//	Circle(int _x, int _y, float _r);
//	void draw();
//};
//
//// 선언만 위에 하고 아래에는 몸체 부분
//
////여러가지 가정들을 위해 생성자를 만들자 --> 생성자 없으면 구조체랑 다를게 없음
//Circle::Circle() //default 생성자를 만들어줘야 인자가 없는 "Circle a;" 이게 선언이 가능해짐
//{
//	x=0;
//	y=0;
//	r=0; // 초기화 값
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
//	// 이거랑 같은 의미이다. 
//	*/
//	Circle c = Circle(10,20,40); // 이렇게 표기도 가능하다.
//
//	a.draw();
//	b.draw();
//	c.draw();
//
//	return 0;
//}