//#include<iostream>
//
//using namespace std;
//
//class Ram{
//private: 
//	char mem[100*1024];
//	int size;
//public:
//	Ram();
//	~Ram();
//	char read(int address);
//	void write(int address, char value);
//};
//Ram::Ram()
//{
//	for(int i=0;i<100*1024;i++)
//	{
//		mem[i] = 0;
//	}
//}
//Ram::~Ram()
//{
//	cout<<"메모리 제거됨"<<endl;
//}
//void Ram::write(int address, char value)
//{
//	mem[address] = value;
//}
//char Ram::read(int address)
//{
//	return mem[address];
//}
//int main()
//{
//	Ram r;
//	r.write(100,20);
//	r.write(101,30);
//
//	char res = r.read(100) + r.read(101);
//	r.write(102,res);
//
//	cout<<"100번지 : "<<(int)r.read(100)<<endl;
//	cout<<"101번지 : "<<(int)r.read(101)<<endl;
//	cout<<"102번지 : "<<(int)r.read(102)<<endl;
//	return 0;
//}