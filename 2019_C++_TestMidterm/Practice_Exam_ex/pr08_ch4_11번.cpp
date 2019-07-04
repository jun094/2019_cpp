//#include<iostream>
//#include<string>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//
//
//using namespace std;
//
//class Player{
//private :
//	string m_name;
//public:
//	Player()
//	{}
//	string getName() { return m_name; }
//	void setName(string name)
//	{
//		m_name=name;
//	}
//};
//
//class Game{
//private :
//	Player *p ; // player객체 2개 동적 생성
//	int rand_temp[3];
//public:
//	Game()
//	{
//		srand( (unsigned)time(0) );
//		p = new Player[2]; // 객체 배열로 2개 생성
//	}
//	string getName() { return p->getName(); }
//	void setName(string n1,string n2)
//	{
//		p->setName(n1);
//		p->setName(n2);
//	}
//	void randNum() //3개의 난수 밸생
//	{
//		for(int i=0;i<3;i++)
//		{
//			rand_temp[i] = rand()%3;
//			cout<<rand_temp[i]<<" ";
//		}cout<<endl;
//	}
//	int getRandTemp(int index)
//	{
//		return rand_temp[index];
//	}
//};
//
//int main()
//{
//	string n1,n2;
//	string enter;
//
//	cin>>n1>>n2;
//	getchar();
//
//	Game g;
//	g.setName(n1,n2);
//
//	while(true)
//	{
//		cout << g.getName() << ":<Enter>";
//		getline( cin, enter);
//
//		g.randNum();
//		if(g.getRandTemp(0)==g.getRandTemp(1))
//		{
//			if(g.getRandTemp(0)==g.getRandTemp(2))
//			{
//				cout<<"승리!!"<<endl;
//				break;
//			}
//		}
//		else
//		{
//			cout<<"아쉽군요 !!"<<endl<<endl;
//		}
//	}
//	return 0;
//}