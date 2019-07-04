//#include<iostream>
//
//using namespace std;
//
//// <call by reference>
//// 함수인자에 참조변수를 선언한 것!!!
//void swap(int &a, int &b)
//{
//	int temp=0;
//	temp = a;
//	a=b;
//	b=temp;
//	//값에 의한 : 바뀌지 않음, 시간 오래걸림, 
//	//주소에 의한 : 바뀌긴 하지만, 긴장감 
//	
//	// 참조에 의한 : 바뀜, 값에 의한 처럼 일반 변수를 사용해서 보기도 좋음
//}
//
////	<참조 리턴>
////리턴 데이터 타입에 참조변수 사용 !! --> 이거는 그냥 p237...
//char c='a';
//
//char& find(){
//	return c; // 변수 c에 대한 참조변수를 return
//}
//int main()
//{
//	int m=2,n=4;
//	swap(m,n); // 이 부분은 값에 의한 호출과 같음.
//
//	cout<<m<<" "<<n<<endl;
//
//	char refc=find(); // refc = 'a'가 됨 
//
//
//
//	return 0;
//}