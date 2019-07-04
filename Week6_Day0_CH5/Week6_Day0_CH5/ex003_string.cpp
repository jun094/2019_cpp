#include<iostream>

using namespace std;

class String{
private:
	char *strData; // 문자열 담을 공간
	int len;
public:
	String(){
		cout<<"default 생성자 호출"<<endl;
		strData = NULL; //처음에는 빈공간으로
		len = 0;
	}
	String(const char *str){
		cout<<"String(const char *str) 생성자 호출"<<endl;

		//strData = str; //주의) 이렇게 하면 얕은 복사가 됨!!
		len = strlen(str);
		strData = new char[len+1]; // str를 동적할당해줌 ( 널문자 포함이므로 +1 해줌 )
		cout<<"StrData 할당 :"<< (void*)strData <<endl;
		strcpy(strData,str); // 깊은 복사!!!!
	}
	String(String &rhs){
		cout<<"String(String &rhs) 생성자 호출"<<endl;


		len = rhs.len; // 깊음 복사
		//strData = rhs.strData; // 문제는 애가 얕은 복사가됨
		// 따라서,,, rhs도 다시 새로운 동적할당..??
		strData = new char[rhs.len+1]; // 여기는 len은 rhs의 len이므로 당연히 rhs.len
		cout<<"StrData 할당 :"<< (void*)strData <<endl;
		strcpy(strData,rhs.strData); 
	}

	~String(){
		cout<<"소멸자 호출"<<endl;
		
		delete [] strData;
		cout<<"StrData 해제됨 :"<< (void*)strData <<endl;
		strData = NULL; // 관습적으로 delete해주고 null로 초기화 해준다.
	}

	char *GetStrData() const {
		return strData;
	}
	int GetLen() const{
		return len;
	}
};
int main(){
	String s1("안녕");
	String s2(s1); // 복사생성자
	// 실행해보면 s2는 생성자가 생성이 안되는걸 볼 수 있음
	// 이걸 봤을 때 얕은 복사라는것이 추정이 됨.

	cout<<s1.GetStrData()<<endl;
	cout<<s2.GetStrData()<<endl;
	return 0;
}