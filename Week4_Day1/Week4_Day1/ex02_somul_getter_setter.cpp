#include<iostream>

using namespace std;

int g_cicleCount = 0;

class Circle{

private: // 안방화장실 -> 안쓰면 pivate으로 간주
		 // 데이터 보호,은닉 -> Circle a(10,30,50) 이렇게 선언하면 10,30,50 으로 죽을때 까지 고정됨 -> 데이터 변경이 불가능함
		 // 그럼 콘솔창에서 좌표랑 반지름 변경하고 싶을땐 어떡하라고????
		 // 이럴때 쓰는 방식이 getter/setter 개념

	float r; 
	int x,y; 
	int num;

public :
	Circle();
	Circle(int _x, int _y, float _r);
	~Circle(); // 소멸자 ( 객체가 죽을 때 생성됨 -> 변수(함수)가 생성되고 종료되는 순서를 알 수 있다 )

	void draw();



	//  <<데이터 보호>> --> 없어도 되지만, 유지/보수를 위한 코딩스킬

	// accessor(접근하다) = getter = query   
	// ex) private로 선언했지만 알고 싶을떄 --> 내가 접근만 가능한것 'get' 키워드로 시작하는것
	float getR()	{ return r; }
	float getX()	{ return x; }
	float getY()	{ return y; }

	// mutator(변하다) = setter
	// ex) private로 선언했지만 반지름을 제외한 좌표값을 변경하고 싶을때   --> 내가 변경도 가능한 것 'set' 키워드로 시작하는것
	void setX(int _x)	// 리턴값이 보통 void
	{ 
		if(_x<-100) _x = -100; // x좌표 최대,최소값 설정 --> '구조적 예외처리'
		if(_x>100) _x = 100; // x에 그냥 값을 주는것보다 이런식으로 나의 의도를 담아서 다른 사람에게 줄 수 있다. 
		x = _x;  // x값을 새로운 값으로 변경
	}
	void setY(int _y)	{ y = _y; }  // y값을 새로운 값으로 변경

	// Circle a(10,30,50)로 딱 박아서 줄 수 있지만, 
	// 위에 처럼 x,y,r에  나의 의도를 담아서 남한테 내 코드를 줄 수 있기때문에 사용한다. 
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

Circle:: ~Circle() // 소멸자 -> 인자, 리턴값이 존재하지 않는다.
{
	cout<< "Circle " <<num << " is dying .." << endl; // 죽는 순서는 랜덤하게

	g_cicleCount --; // 죽을때마다 circlecount를 날린다.
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

	func(); // 소멸자에 의해 순서는 d가 죽을꺼고 다음에 a,b,c가 만들어지고 죽는다 (죽는순서는 랜덤)
	cout<<"count:" << g_cicleCount << endl;

	a.draw();
	b.draw();
	c.draw();

	return 0;
}