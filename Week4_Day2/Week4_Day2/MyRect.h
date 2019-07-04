//#ifndef _MYRECT_H_ // 만약 _MYRECT_H_ 라는 파일을 본적있니? -> 없으면 define 밑으로 실행 있으면 endif 뒤로 실행
//#define _MYRECT_H_ 

#pragma once // if,define,endif를 한 줄에 가능하도록 마이크로소프트에서 만듬

class MyRect
{
private:
	int m_x,m_y; // 멤버 변들은 m_로 시작 !!!
	int m_w,m_h;
	void init(); //데이터 초기화  (보통은 pivate으로 설정)

public : 
	MyRect(); // default 생성자
	MyRect(int x, int y); // 클래스안의 변수들 -> 로컬변수들은 멤버변수와 구분지어줘야한다. 똑같이 x,y라고해도 오류는 안남
	MyRect(int x, int y, int w, int h);
	
	void draw();
	// Set Position
	void setPos(int x, int y);
};

//#endif // 본적없으면