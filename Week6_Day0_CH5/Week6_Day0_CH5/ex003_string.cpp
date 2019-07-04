#include<iostream>

using namespace std;

class String{
private:
	char *strData; // ���ڿ� ���� ����
	int len;
public:
	String(){
		cout<<"default ������ ȣ��"<<endl;
		strData = NULL; //ó������ ���������
		len = 0;
	}
	String(const char *str){
		cout<<"String(const char *str) ������ ȣ��"<<endl;

		//strData = str; //����) �̷��� �ϸ� ���� ���簡 ��!!
		len = strlen(str);
		strData = new char[len+1]; // str�� �����Ҵ����� ( �ι��� �����̹Ƿ� +1 ���� )
		cout<<"StrData �Ҵ� :"<< (void*)strData <<endl;
		strcpy(strData,str); // ���� ����!!!!
	}
	String(String &rhs){
		cout<<"String(String &rhs) ������ ȣ��"<<endl;


		len = rhs.len; // ���� ����
		//strData = rhs.strData; // ������ �ְ� ���� ���簡��
		// ����,,, rhs�� �ٽ� ���ο� �����Ҵ�..??
		strData = new char[rhs.len+1]; // ����� len�� rhs�� len�̹Ƿ� �翬�� rhs.len
		cout<<"StrData �Ҵ� :"<< (void*)strData <<endl;
		strcpy(strData,rhs.strData); 
	}

	~String(){
		cout<<"�Ҹ��� ȣ��"<<endl;
		
		delete [] strData;
		cout<<"StrData ������ :"<< (void*)strData <<endl;
		strData = NULL; // ���������� delete���ְ� null�� �ʱ�ȭ ���ش�.
	}

	char *GetStrData() const {
		return strData;
	}
	int GetLen() const{
		return len;
	}
};
int main(){
	String s1("�ȳ�");
	String s2(s1); // ���������
	// �����غ��� s2�� �����ڰ� ������ �ȵǴ°� �� �� ����
	// �̰� ���� �� ���� �����°��� ������ ��.

	cout<<s1.GetStrData()<<endl;
	cout<<s2.GetStrData()<<endl;
	return 0;
}