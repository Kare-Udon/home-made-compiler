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
	if (IsSingle_symbol(word)) return;//�ж����string�ǲ��ǵ�����
	
	if (Iskeywords(word)) return;///�ж����string�ǲ��ǹؼ���
	if (IsCorrectWord(word)) return;//�ж����string�ǲ�����ȷ������



	cout << "ERROR  " << num << endl;
}


bool IsNumber(const string &word) {
    if (word.find('.') == string::npos) {
        cout << "<" << word << ",digit>" << endl;
    } else {
        cout << "<" << word << ",float>" << endl;
    }
    return true;
}


bool IsSingle_symbol(const string& word) {
	//���ж��ǲ��Ƕ�Ԫ���ţ�����++ -- ���ж��ǲ���һԪ������+ (
	if(Isdual_symbol(word)) {
		return true;
	}

	//缺个 cout<<

    WordList wordList = *new WordList();
    return wordList.single_symbol.find(word) == wordList.single_symbol.end();

}


bool Isdual_symbol(string word) {//���ж��ǲ��Ƕ�Ԫ���ţ�����++ -- 



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