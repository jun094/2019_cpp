//#include<iostream>
//
//using namespace std;
//
//class Add {
//private:
//	int m_a,m_b;
//	int m_sum;
//public:
//	void setValue(int x,int y)
//	{
//		m_a = x; m_b = y;
//	}
//	int calculate()
//	{
//		m_sum=m_a+m_b;
//		return m_sum;
//	}
//};
//class Sub {
//private:
//	int m_a,m_b;
//	int m_sum;
//public:
//	void setValue(int x,int y)
//	{
//		m_a = x; m_b = y;
//	}
//	int calculate()
//	{
//		m_sum=m_a-m_b;
//		return m_sum;
//	}
//};
//class Mul {
//private:
//	int m_a,m_b;
//	int m_sum;
//public:
//	void setValue(int x,int y)
//	{
//		m_a = x; m_b = y;
//	}
//	int calculate()
//	{
//		m_sum=m_a*m_b;
//		return m_sum;
//	}
//};
//class Div {
//private:
//	int m_a,m_b;
//	int m_sum;
//public:
//	void setValue(int x,int y)
//	{
//		m_a = x; m_b = y;
//	}
//	int calculate()
//	{
//		m_sum=m_a/m_b;
//		return m_sum;
//	}
//};
//int main()
//{
//	int x,y;
//	char c;
//	Add a;Sub s;Mul m;Div d;
//
//	while(true)
//	{
//		cin>>x>>y>>c;
//
//		switch(c)
//		{
//		case('+'): a.setValue(x,y); cout<<a.calculate()<<endl; break;
//		case('-'): s.setValue(x,y); cout<<s.calculate()<<endl; break;
//		case('*'): m.setValue(x,y); cout<<m.calculate()<<endl; break;
//		case('/'): d.setValue(x,y); cout<<d.calculate()<<endl; break;
//		default: cout<<"unknown"<<endl; break;
//		}
//	}
//	
//	return 0;
//}