//#include<iostream>
//
//using namespace std;
//
//// Standart Template Library (stl)
//#include<list>
//#include<vector>
//
//
//int main()
//{
//	//// list 예제
//	cout<<"<<list>>"<<endl;
//	list <int> data;		//linked list <== container class : 담을 수 있는 클래스 
//	for(int i=0;i<10;i++)
//	{
//		data.push_back(i*3);
//	}
//	
//	//방법 1
//	//list <int>::iterator it = data.begin(); // beging() 함수 : pointer의 첫번째를 가리키는 함수
//	//while(it != data.end()) // end()함수 : 마지막을 가리킴
//	//{
//	//	cout<<*it<<endl;
//	//	it ++;
//	//}
//
//	//방법 2
//	data.insert(data.begin(), 10000); // 제일 처음에 10000을 넣는다. 
//	//data.erase // 특정원소를 지울수도 있다. 
//	list <int>::iterator it;
//	for(it=data.begin(); it!=data.end(); it++)
//	{
//		//*it = (*it)*100; // 이렇게 값을 변경할 수 도 있다. 
//		cout<<*it<<endl;
//	}
//	
//	
//
//	//// 벡터 예제
//	cout<<"<<vector>>"<<endl;
//	vector<float> vec;
//	for(int i=0;i<10; i++)
//	{
//		vec.push_back(i*2);
//	}
//
//	//10번째 원소를 지우고 싶다면 ('10'이 지워졌을 것)
//	vec.erase(vec.begin()+10);
//
//
//	for(int i=0;i<vec.size(); i++)
//	{
//		cout<<vec[i]<<endl; //list와 다른점은 이렇게 index로 바로 접근할 수 있다. 
//	}
//
//	
//	return 0;
//}