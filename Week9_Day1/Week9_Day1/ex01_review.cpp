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
//class MyReact : public MyShape // ���� �߿� !!!! : �����ڴ� �θ� -> �ڽ� ,  �Ҹ��ڴ� �ڽ� -> �θ�
//{
//public:
//	float w,h;
//	
//	MyReact() 
//		// �ƹ��͵� �� ���ָ� �� ���̿� �θ� class�� �⺻�����ڰ� �Ҹ���.
//	{ 
//		w=0; h=0; // x,y,c�� �θ� �����ڿ� ������ �ڽĿ����� w,h�� �Ű���ش�
//	}
//	MyReact(float _x, float _y, float _w, float _h, string _c)
//		:MyShape(_x,_y,_c)
//	{
//		w = _w; h = _h; // x,y,c�� �θ� �����ڿ� ������ �ڽĿ����� w,h�� �Ű���ش�
//	}
//
//	// �߿� !! overriding : �̷��� draw�̸��� �Ȱ������� �߰�, ��ü�� �Ͼ��. 
//	// overriding�̶�� ������ '�׸���'��� �Լ��� '��ü'�ϴ� ���̴�.
//	// �� �ڵ�� '�߰�'�̴� !
//	// �߰� vs ��ü �������� ����!
//	void draw() 
//	{ 
//		// �̰� ��ü
//		cout<<"shape:(" << x << "," << y << ")" << color<< "["<<w<<","<<h<<"]"<<color; '
//		
//		// �̰� �߰�
//		/*
//		MyShape :: draw(); // �θ��Լ��� �ִ� draw�� �׸��� 
//		cout<<"["<<w<<","<<h<<"]"<<color<<endl; // w,h �� '�߰�'�Ҳ���
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