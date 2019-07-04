//#include<iostream>
//#include<string>
//using namespace std;
//
//class MyPoint{
//private:
//	float m_x,m_y;
//public:
//	MyPoint(){m_x=0;m_y=0;}
//	MyPoint(float x,float y){m_x=x;m_y=y;}
//	void print()
//	{
//		cout<<m_x<<" , "<<m_y<<endl;
//	}
//};
//
//class MyColorPoint : public MyPoint{
//private:
//	string m_color;
//public:
//	MyColorPoint(){ m_color = "red";}
//	MyColorPoint(string color){ m_color = color;}
//	MyColorPoint(float x,float y,string color)
//		: MyPoint(x,y)
//	{
//		m_color = color ; 
//	}
//	void print()
//	{
//		cout<<m_color<<" , "; MyPoint::print();
//	}
//};
//int main()
//{
//	MyColorPoint p;
//	p.print();
//	//p.colorPrint();
//
//	MyColorPoint q(1,2,"yellow");
//	//q.colorPrint();
//	q.print();
//
//	MyPoint x;
//	x.print();
//	return 0;
//}