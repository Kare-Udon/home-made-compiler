#pragma once
#include <string>
using namespace std;


bool IsNum(char s) {
	if (isdigit(s) != 0)
	{
		return true;
	}
}
bool IsSingleSymbol(char s){
	if ((isdigit(s) != 0) || (isalpha(s) != 0))
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool IsDualSymbol(char first,char next) {

}

void SelectWord(string word,int num) {
	if (IsNumber(word)) return;  //�ж����string�ǲ�������
	if (Issingle_symbol(word)) return; //�ж����string�ǲ��ǵ����
	if (Isdual_symbol(word)) return;//�ж����string�ǲ��Ƕ���
	if (Iskeywords(word)) return; //�ж����string�ǲ��ǹؼ��
	if (IsCorrectWord(word)) return; //�ж����string�ǲ�����ȷ������

	//�����Ǿʹ��

	cout << "ERROR  " << num << endl;
}

//boolֵ����ȷ����Ҫcout����return true������return false
bool IsNumber(string word) {
	if (true) {
		cout << endl;//�ǵ���� ��ʽ <1,digit> �� <1.2,float>
		return true;
	}
	else return false;
	
}


bool Issingle_symbol(string word) {

	if (true) {
		cout << endl;//�ǵ���� 
		return true;
	}
	else return false;
}


bool Isdual_symbol(string word) {

	if (true) {
		cout << endl;//�ǵ���� 
		return true;
	}
	else return false;
}


bool Iskeywords(string word) {

	if (true) {
		if (Istype_identifier(word)) return true;  //�ж��ǲ������� �� int char ֮���
		else {
			cout << endl;//�ǵ����
		return true;
		}
		
	}
	else return false;

}


bool IsCorrectWord(string word) {

	if (true) {
		cout << endl;//�ǵ���� 
		return true;
	}
	else return false;
}

bool Istype_identifier(string word) {

	if (true) {
		cout << endl;//�ǵ���� 
		return true;
	}
	else return false;
}