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
//	//// list ����
//	cout<<"<<list>>"<<endl;
//	list <int> data;		//linked list <== container class : ���� �� �ִ� Ŭ���� 
//	for(int i=0;i<10;i++)
//	{
//		data.push_back(i*3);
//	}
//	
//	//��� 1
//	//list <int>::iterator it = data.begin(); // beging() �Լ� : pointer�� ù��°�� ����Ű�� �Լ�
//	//while(it != data.end()) // end()�Լ� : �������� ����Ŵ
//	//{
//	//	cout<<*it<<endl;
//	//	it ++;
//	//}
//
//	//��� 2
//	data.insert(data.begin(), 10000); // ���� ó���� 10000�� �ִ´�. 
//	//data.erase // Ư�����Ҹ� ������� �ִ�. 
//	list <int>::iterator it;
//	for(it=data.begin(); it!=data.end(); it++)
//	{
//		//*it = (*it)*100; // �̷��� ���� ������ �� �� �ִ�. 
//		cout<<*it<<endl;
//	}
//	
//	
//
//	//// ���� ����
//	cout<<"<<vector>>"<<endl;
//	vector<float> vec;
//	for(int i=0;i<10; i++)
//	{
//		vec.push_back(i*2);
//	}
//
//	//10��° ���Ҹ� ����� �ʹٸ� ('10'�� �������� ��)
//	vec.erase(vec.begin()+10);
//
//
//	for(int i=0;i<vec.size(); i++)
//	{
//		cout<<vec[i]<<endl; //list�� �ٸ����� �̷��� index�� �ٷ� ������ �� �ִ�. 
//	}
//
//	
//	return 0;
//}