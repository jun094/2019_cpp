//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Hist{
//private:
//	string *m_Psen;
//public:
//	Hist()
//	{}
//	Hist(string s)
//	{
//		m_Psen = new string(s);
//	}
//	~Hist()
//	{
//		delete m_Psen;
//	}
//	void put(string add)
//	{
//		m_Psen->append(add);
//	}
//	void putc(char c)
//	{
//		*(m_Psen)+=c;
//	}
//	void print()
//	{
//		cout<<*m_Psen<<endl;
//	}
//};
//int main()
//{
//	Hist h("aa");
//
//	h.put("bbb");
//	h.putc('+');
//	h.put("ccc");
//
//	
//	h.print();
//	return 0;
//}