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
//	// �߿� !! overriding : �̷��� draw�̸��� �Ȱ������� �߰�, ��ü�� �Ͼ��. 
//	// overriding�̶�� ������ '�׸���'��� �Լ��� '��ü'�ϴ� ���̴�.
//	// �� �ڵ�� '�߰�'�̴� !
//	// �߰� vs ��ü �������� ����!
//	void draw() 
//	{ 
//		// �̰� ��ü
//		cout<<"shape:(" << x << "," << y << ")" << color<< "["<<w<<","<<h<<"]"<<color; 
//		
//		/*
//		// �̰� �߰�
//		MyShape :: draw(); // �θ��Լ��� �ִ� draw�� �׸��� 
//		cout<<"["<<w<<","<<h<<"]"<<color<<endl; // w,h �� '�߰�'�Ҳ���
//		*/
//	}
//};
//
//int main()
//{
//	MyRect a(10,30,100,200,"red");
//	a.draw();
//
//	MyShape b = a; // �̰Ŵ� ���簡 ���Ͼ��. ( a�� b���� �� ū�Ŵ� )
//				   // "��������ȯ(up casting)" : child�� ���� �ö󰡼� parent�� �ٲ���� ������ "������"
//	b.draw();
//
//	MyShape * p = &a; // �����͵� ���簡 �� �Ͼ. 
//	p->draw();
//
//	MyShape & r =a; // ���۷��� ���� ��뵵 �翬�� ����
//	r.draw(); 
//
//
//	////////////////////////////////////////////////////////////////////////////////////////////
//	MyShape c(20,40,"blue");
//	c.draw();
//	//MyRect d = c;		 // �̰Ŵ� ������ ����.
//						 // "������ ��ȯ(down casting)" : �������� �ݴ� 
//	//MyRect * q = &c;   // ������ ���� ������ ����.
//					     // �Ǵ� ���� ����??? �ؿ�
//
//	//MyRect *q = (MyRect*) &c; // �̰� �ȴ� --> (MyRect*) : '��������ȯ'
//	//q->draw(); // �ٵ� �̻��� �ּҰ��� ����
//	MyRect * q = (MyRect*)p;  // ���� �ִ� �����͸� �̷��� ������ ��ȯ �Ѵ�.
//	q->draw();
//	MyShape & s = (MyRect&) r; // ���� �ִ� ���۷��� ������ �������� ����
//	s.draw(); 
//
//	//���� : ������ ������ ����,  ������ �����Ͷ� ���۷����� �� ����
//
//
//	return 0;
//}