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
	//cin.get();//从流里读并取走一个字符
	//cin.getline();//从流中读取字符，知道行尾或指定的分隔符
	//cin.ignore(); //从流中读取并舍弃指定数量的字符
	//cout.put();//将字符写到流中
	//cout.flush();//将流中缓存内容全部输出

	cin.get();


	return 0;
}