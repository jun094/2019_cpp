//#include<iostream>
//
//using namespace std;
//
//class Circle
//{
//public:
//	int m_a;
//	void setRadius(int a)
//	{
//		this->m_a = a;
//	};
//};
//int main()
//{
//	int n=1;
//	/* int &refn
//	   refn = n    이렇게 선언하면 오류 !!! -> 참조변수는 선언과 동시에 초기화
//	   */
//	int &refn = n; // n의 별명 , 별도의 공간x, n=refn임
//
//	Circle circle;
//	Circle &refc = circle; // circle의 별명 , 별도의 공간x, circle=refc임 
//	
//	refn = 3; // n,refn = 3
//	n = 5;  // n,refn = 5
//
//	//포인터로 착각하고 refc->setRadius(30); 로 하면 안됨!!
//	refc.setRadius(30);
//	
//
//	//참조변수는 배열 x !!
//	//int arr[10];
//	//int &refarr = arr;
//
//
//	return 0;
//}