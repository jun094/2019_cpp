//#include<iostream>
//
//using namespace std;
//
//class Oval {
//private:
//	int m_w,m_h;
//public:
//	Oval();
//	Oval(int w,int h);
//	~Oval();
//
//	void show();
//
//	int getW() { return m_w; }
//	int getH() { return m_h; }
//
//	void set(int w, int h) 
//	{
//		m_w = w; m_h=h;
//	}
//};
//Oval::Oval()
//{
//	m_w=0;
//	m_h=0;
//}
//Oval::Oval(int w,int h)
//{
//	m_w=w;
//	m_h=h;
//}
//Oval::~Oval()
//{
//	cout<<"oval¼Ò¸ê "<<m_w<<" "<<m_h<<endl;
//}
//void Oval::show()
//{
//	cout<<"showÇÔ¼ö :  width = "<<m_w<<" height = "<<m_h<<endl;
//}
//int main()
//{
//	Oval a, b(3,4);
//	a.set(10,20);
//	a.show();
//
//	cout<< b.getW() <<" , "<<b.getH() <<endl;
//	return 0;
//}