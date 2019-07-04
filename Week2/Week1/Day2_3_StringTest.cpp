// 문자열
// c언어에서는 char 라는 문자 개념을 배열로 만들어 char str[] 로 억지로 늘려서 쓰는 느낌
// c++에서는 char 는 문자 데이터타입,  string이라는 문자열 데이터 타입을 사용 !!!!!!!!!!!


#include<iostream>
#include<string>

using namespace std;

int main()
{
	// ex1 ( C에서의 문자열 받기 )
	//char str1[] = "sejong";
	//char str2[7] = {'s','e','j','o','n','g','\0'};
	////char str3[7] = {'s','e','j','o','n','g'}; //배열에서는 문자열을 정의하기를 0문자를 만날떄까지 찍는다. 근데 0문자가 없으면 0만날때까지 무한히 찍힘...

	//cout << str1 << endl;
	//cout << str2 << endl;
	////cout << str3 << endl;

	//cout << "-------------------------------------------------" << endl ;


	////ex2 ( C에서의 문자열 받기 )
	//char str_a[] = "sejong";
	//char str_b[255];
	//// str_b = "sejong"  //이건 불가능 !! 선언함과 동시에 문자열을 넣어줘야 한다..!



	//cout << "-------------------------------------------------" << endl ;


	//ex3 ( c++에서 string )
	char str1[] = "sejong";
	string str2("sejong"); // c++에서는 문자열을 저장하기위해 string이라는 데이터타입(클래스)를 사용
	//string str2 = "sejong"; // 위의것과 동일한 의미
	
	
	cout << str2 << endl;

	str2 = "university"; // 이렇게 변경도 가능하다
	cout << str2 << endl;

	str2 += "college"; // 이렇게 추가도 가능하다.
	cout << str2 << endl;
	
	string str4 = str2 + str1; // 이렇게 추가도 가능하다.
	cout << str4 << endl;

	cout << "-------------------------------------------------" << endl ;

	//ex4 ( string 여러가지 특징 )
	string str3;

	str3 = string("dept") + string("software");
	str3.append("sejong"); // 붙여넣기
	cout << str3 << endl;

	string str_1 = "sejong";
	string str_2 = "sejong";

	if(str_1==str_2)
		cout<<"같다"<<endl;
	else
		cout<<"다르다"<<endl;


	cout << "-------------------------------------------------" << endl ;

	//ex5 ( 문자열 받아보기 )
	char str[100];
	cout << "문자열:";
	cin >> str;
	cout << "입력된 문자열:" << str << endl;  //단점 : 공백 포함된 문자열은 받지는 못한다.

	cout << "-------------------------------------------------" << endl ;
	// 공백 포함하여 받아보기
	char strr[100];
	cout << "문자열:";
	cin.getline(strr,100,'\n');
	cout << "입력된 문자열:" << strr << endl; 
	return 0;
}