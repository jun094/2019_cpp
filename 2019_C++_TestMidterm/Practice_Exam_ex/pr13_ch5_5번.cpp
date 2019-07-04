//#include<iostream>
//
//using namespace std;
//#define max_num = 10;
//
//class MyIntStack{
//	int p[10];
//	int tos;
//public:
//	MyIntStack();
//	bool push(int n);
//	bool pop(int &n);
//};
//
//MyIntStack::MyIntStack()
//{
//	tos=-1;
//}
//bool MyIntStack::push(int n)
//{
//	tos++;
//	if(tos!=10)
//	{
//		cout<<"<"<<tos<<">";
//		p[tos] = n;
//		return true;
//	}
//	else {return false;}
//}
//bool MyIntStack::pop(int &n)
//{
//	tos--;
//	if(tos==-1){return false; }
//	else 
//	{
//		cout<<"<"<<tos<<">";
//		n=p[tos];
//		return true;
//	}
//}
//int main()
//{
//	MyIntStack a;
//	for(int i=0;i<11;i++)
//	{
//		if(a.push(i)) { cout<<i<<' ';}
//		else { cout<<endl << i+1 << " 번째 stack full"<<endl;}
//	}
//
//	int n;
//	for(int i=0;i<11;i++)
//	{
//		if(a.pop(n)) cout<<n<<' ';
//		else cout<<endl<<i+1<<"번째 stack empty";
//	}
//	cout<<endl;
//	return 0;
//}