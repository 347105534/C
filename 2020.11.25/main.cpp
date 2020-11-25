#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main(){
	string str1;
	getline(cin, str1);
	int mark=0;
	int count=0;
	int maxnum=0;
	for (size_t i = 0; i<str1.size(); ++i){
		if (isdigit(str1[i])){
			count++;
			if (count>maxnum){
				maxnum = count;
				mark = i - maxnum;
			}
		}
		if (!isdigit(str1[i])){
			count = 0;
		}
	}
	for (int m = mark+1; m<=mark + maxnum; m++){
		cout << str1[m];
	}
	system("pause");
}