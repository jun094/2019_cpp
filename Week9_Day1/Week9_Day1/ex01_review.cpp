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
//		cout<< "shape:(" << x << "," << y << ")" << color;
//	}
//};
//
//class MyReact : public MyShape // 순서 중요 !!!! : 생성자는 부모 -> 자식 ,  소멸자는 자식 -> 부모
//{
//public:
//	float w,h;
//	
//	MyReact() 
//		// 아무것도 안 써주면 이 사이에 부모 class의 기본생성자가 불린다.
//	{ 
//		w=0; h=0; // x,y,c는 부모 생성자에 있으니 자식에서는 w,h만 신경써준다
//	}
//	MyReact(float _x, float _y, float _w, float _h, string _c)
//		:MyShape(_x,_y,_c)
//	{
//		w = _w; h = _h; // x,y,c는 부모 생성자에 있으니 자식에서는 w,h만 신경써준다
//	}
//
//	// 중요 !! overriding : 이렇게 draw이름이 똑같을때는 추가, 교체가 일어난다. 
//	// overriding이라는 개념은 '그리다'라는 함수를 '교체'하는 것이다.
//	// 이 코드는 '추가'이다 !
//	// 추가 vs 교체 구분할줄 알자!
//	void draw() 
//	{ 
//		// 이건 교체
//		cout<<"shape:(" << x << "," << y << ")" << color<< "["<<w<<","<<h<<"]"<<color; '
//		
//		// 이건 추가
//		/*
//		MyShape :: draw(); // 부모함수에 있는 draw를 그리고 
//		cout<<"["<<w<<","<<h<<"]"<<color<<endl; // w,h 를 '추가'할꺼야
//		*/
//	}
//};
//
//int main()
//{
//	MyReact a;
//	a.draw();
//
//	return 0;
//}