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
//	   refn = n    �̷��� �����ϸ� ���� !!! -> ���������� ����� ���ÿ� �ʱ�ȭ
//	   */
//	int &refn = n; // n�� ���� , ������ ����x, n=refn��
//
//	Circle circle;
//	Circle &refc = circle; // circle�� ���� , ������ ����x, circle=refc�� 
//	
//	refn = 3; // n,refn = 3
//	n = 5;  // n,refn = 5
//
//	//�����ͷ� �����ϰ� refc->setRadius(30); �� �ϸ� �ȵ�!!
//	refc.setRadius(30);
//	
//
//	//���������� �迭 x !!
//	//int arr[10];
//	//int &refarr = arr;
//
//
//	return 0;
//}