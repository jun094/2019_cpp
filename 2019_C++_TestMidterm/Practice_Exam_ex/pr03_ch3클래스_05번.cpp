//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//
//using namespace std;
//
//class SelectableRandom{
//private:
//	int m_left,m_right;
//	int m_num;
//
//public:
//	SelectableRandom();
//	SelectableRandom(int left,int right);
//	~SelectableRandom();
//
//	void range1();
//	void range2();
//
//	int getNum() { return m_num; }
//};
//
//SelectableRandom::SelectableRandom()
//{
//	m_left=0;
//	m_right=0;
//}
//SelectableRandom::SelectableRandom(int left,int right)
//{
//	m_left=left;
//	m_right=right;
//}
//SelectableRandom::~SelectableRandom()
//{ }
//
//void SelectableRandom::range1()
//{
//	// 0+L+1 ~ (R-1-L-1) + L+1
//	//rand() % (b+1-a) + a
//	int n=0;
//	n = rand()%(m_right+1-m_left) + m_left ;
//	if(n%2==0){ m_num = n; }
//}
//void SelectableRandom::range2()
//{
//	// 0+L+1 ~ (R-1-L-1) + L+1
//	int n = rand()%(m_right-m_left-1) +m_left+1 ;
//	if(n%2!=0){ m_num = n; }
//}
//
//int main()
//{
//	srand(time(NULL)); //RAND_MAX = 32767
//
//	int left1,right1;
//	int left2,right2;
//	int ten=0;
//
//	cin>>left1>>right1;
//	SelectableRandom r1(left1,right1); // Â¦¼ö °´Ã¼
//	while(true)
//	{
//		if(ten == 10) {break;}
//		
//		r1.range1();
//		cout<<r1.getNum()<<" ";
//		ten++;
//	}cout<<endl; 
//	ten=0;
//
//	cin>>left2>>right2;
//	SelectableRandom r2(left2,right2); // È¦¼ö °´Ã¼
//	while(true)
//	{
//		if(ten == 10) {break;}
//		
//		r2.range2();
//		cout<<r2.getNum()<<" ";
//		ten++;
//	}cout<<endl;
//	return 0;
//}