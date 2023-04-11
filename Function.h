#pragma once
#include <string>
using namespace std;
#include "wordlist.h"

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

	if (IsNumber(word)) return;  //判断这个string是不是数字
	if (IsSingle_symbol(word)) return;//判断这个string是不是单符号
	
	if (Iskeywords(word)) return;///判断这个string是不是关键词
	if (IsCorrectWord(word)) return;//判断这个string是不是正确的命名



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
	//先判断是不是二元符号，比如++ -- 在判断是不是一元符号如+ (
	if(Isdual_symbol(word)) {
		return true;
	}

	//缂轰釜 cout<<

    WordList wordList = *new WordList();
    return wordList.single_symbol.find(word) == wordList.single_symbol.end();

}


bool Isdual_symbol(string word) {//先判断是不是二元符号，比如++ -- 



	if (true) {

		cout << endl;//记得输出 

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