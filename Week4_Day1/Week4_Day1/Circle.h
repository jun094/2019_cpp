//헤더파일 이름은 class명과 동일하게 (약속)
// #pragma once
#ifndef _CIRCLE_H_  // 2. 또 정의되어 있다면 endif로 점프" (이름은 "_class명_H_" 로 약속)
#define _CIRCLE_H_  // 1. "_CIRCLE_H_ 이 정의되어 있지 않다면(ifndef).. define해라" 

class Circle{

private:  // 안방화장실 ( 가장 강력 ) -> 클래스 내에서만 사용
	float r; 
	int x,y; 
	int num;

public : // 공중 화장실
	Circle();
	Circle(int _x, int _y, float _r);
	~Circle(); // < 소멸자 >
			   // 생성자 메모리가 해제될 때 -> return 0을 만날때 메모리 해제
			   // default 생성자 처럼 안만들면 기본 생성됨 / 강제로 반드시 호출됨
			   // 한 클래스에 오직 한개 
			   // 용도 : 동적 메모리로 강제로 할당되면 반드시 메모리를 해주어야함 -> 소멸자가 메모리를 해제시켜줌

	void draw();


	float getR()	{ return r; }
	float getX()	{ return x; }
	float getY()	{ return y; }

	void setX(int _x)	
	{ 
		if(_x<-100) _x = -100;
		if(_x>100) _x = 100; 
		x = _x; 
	}
	void setY(int _y)	{ y = _y; }
};

#endif