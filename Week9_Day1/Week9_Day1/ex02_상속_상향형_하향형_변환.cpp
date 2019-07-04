//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class MyShape
//{
//public:
//	float x,y;
//	string color;
//
//	MyShape()
//	{
//		x=0;y=0;color="black";
//	}
//	MyShape(float _x, float _y, string _c)
//	{
//		x=_x;y=_y;color="black";
//	}
//
//	void draw() 
//	{ 
//		cout<< "shape:(" << x << "," << y << ")" << color <<endl;
//	}
//};
//
//class MyRect : public MyShape 
//{
//public:
//	float w,h;
//	
//	MyRect() 
//	{ 
//		w=0; h=0; 
//	}
//	MyRect(float _x, float _y, float _w, float _h, string _c)
//		:MyShape(_x,_y,_c)
//	{
//		w = _w; h = _h; 
//	}
//
//	// 중요 !! overriding : 이렇게 draw이름이 똑같을때는 추가, 교체가 일어난다. 
//	// overriding이라는 개념은 '그리다'라는 함수를 '교체'하는 것이다.
//	// 이 코드는 '추가'이다 !
//	// 추가 vs 교체 구분할줄 알자!
//	void draw() 
//	{ 
//		// 이건 교체
//		cout<<"shape:(" << x << "," << y << ")" << color<< "["<<w<<","<<h<<"]"<<color; 
//		
//		/*
//		// 이건 추가
//		MyShape :: draw(); // 부모함수에 있는 draw를 그리고 
//		cout<<"["<<w<<","<<h<<"]"<<color<<endl; // w,h 를 '추가'할꺼야
//		*/
//	}
//};
//
//int main()
//{
//	MyRect a(10,30,100,200,"red");
//	a.draw();
//
//	MyShape b = a; // 이거는 복사가 잘일어난다. ( a가 b보다 더 큰거다 )
//				   // "상향형변환(up casting)" : child가 위로 올라가서 parent로 바뀌었기 때문에 "상향형"
//	b.draw();
//
//	MyShape * p = &a; // 포인터도 복사가 잘 일어남. 
//	p->draw();
//
//	MyShape & r =a; // 레퍼런스 변수 사용도 당연히 가능
//	r.draw(); 
//
//
//	////////////////////////////////////////////////////////////////////////////////////////////
//	MyShape c(20,40,"blue");
//	c.draw();
//	//MyRect d = c;		 // 이거는 오류가 난다.
//						 // "하향형 변환(down casting)" : 상향형과 반대 
//	//MyRect * q = &c;   // 포인터 역시 오류가 난다.
//					     // 되는 경우는 언제??? 밑에
//
//	//MyRect *q = (MyRect*) &c; // 이건 된다 --> (MyRect*) : '강제형변환'
//	//q->draw(); // 근데 이상한 주소값이 나옴
//	MyRect * q = (MyRect*)p;  // 위에 있는 포인터를 이렇게 강제형 변환 한다.
//	q->draw();
//	MyShape & s = (MyRect&) r; // 위에 있는 레퍼런스 변수도 하향형은 가능
//	s.draw(); 
//
//	//정리 : 상향형 언제나 가능,  하향형 포인터랑 레퍼런스일 떄 가능
//
//
//	return 0;
//}