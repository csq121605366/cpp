#include <iostream>
using namespace std;

namespace MyAloha{
	int main(){
		cout << "Aloha,World1" << endl;
		return 0;
	}
}



int main(){

	MyAloha::main();
	cout << "Aloha,World2" << endl;
	//cin.get();//���������ȡ��һ���ַ�
	//cin.getline();//�����ж�ȡ�ַ���֪����β��ָ���ķָ���
	//cin.ignore(); //�����ж�ȡ������ָ���������ַ�
	//cout.put();//���ַ�д������
	//cout.flush();//�����л�������ȫ�����

	cin.get();


	return 0;
}