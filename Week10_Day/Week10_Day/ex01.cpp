#include<iostream>

using namespace std;

// main은 고정되어있음
// 이벤트 핸들러 부분만 바뀜
// 핸들러 뼈대도 사실상 고정되어 있고 cout부분만 바뀔꺼임


void procedure(int msg) // 이벤트 핸들러 부분 -> 중요하니깐 밖에 빼놓음
						// 이부분만 계속 바뀔꺼임
{
	switch(msg)
		{
		case 1: cout<<"sejong university"<<endl; 
			break;
		case 2: cout<<"software dept"<<endl; 
			break;
		case 3: cout<<"bye"<<endl;
			exit(0);
		default :
			break;
		}
}

int main()
{
	while(true) //
	{
		int i;

		cout<<"input: ";
		cin>>i;

		//switch자리 (핸들러 자리) -> 밖에 뻄
		procedure(i);

	}

	return 0;
}

