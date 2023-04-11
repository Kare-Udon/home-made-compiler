#pragma once

#include <string>
#include "wordlist.h"

using namespace std;
#include "wordlist.h"

bool IsNum(char s) {
	if (isdigit(s) != 0)
	{
		return true;
	}
}
bool IsSingleSymbol(char s) {
	if ((isdigit(s) != 0) || (isalpha(s) != 0))
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool IsDualSymbol(char first, char next) {

}

void SelectWord(string word, int num) {

	if (IsNumber(word)) return;  //判断这个string是不是数字

	if (Isdual_symbol(word)) return;//判断这个string是不是多符号
	if (IsSingle_symbol(word)) return;//判断这个string是不是单符号

	if (Iskeywords(word)) return;///判断这个string是不是关键词
	if (IsCorrectWord(word)) return;//判断这个string是不是正确的命名



	cout << "ERROR  " << num << endl;
}


bool IsNumber(const string& word) {
	if (word.find('.') == string::npos) {
		cout << "<" << word << ",digit>" << endl;
	}
	else {
		cout << "<" << word << ",float>" << endl;
	}
	return true;
}


bool IsSingle_symbol(const string& word) {

	WordList wordList = *new WordList();

	if (wordList.single_symbol.find(word) == wordList.single_symbol.end()) {
		cout << "<" << word << ",单符号>" << endl;
		return true;
	}
	else
		return false;
}


bool Isdual_symbol(string word) {//先判断是不是二元符号，比如++ -- 

	int len = word.length();

	if (len == 2) {

		if (IsDualSymbol(word.at(0), word.at(1)))
		{
			cout << "<" << word << ",双元符号>" << endl;
			return true;
		}
		else
		{
			return false;
		}

	}
	else return false;
}


bool Iskeywords(string word) {
	WordList wordList = *new WordList();

	//先判断是不是类型，再判断关键字
	if (Istype_identifier(word)) {

		return true;
	}
	else if (wordList.keywords.find(word) == wordList.keywords.end()) {
		cout << "<" << word << ",ident>" << endl;
		return true;
	}
	else
	{
		return false;
	}

}


bool IsCorrectWord(string word) {
	//不能数字开头，但main函数的读取已经限制了，被读取的word不会是数字开头
	//不能是关键字等，Selctword前面已经排除了


	cout << "<" << word << ",id>" << endl;
	return true;


}

bool Istype_identifier(string word) {

	//在类型标识符中查找
	WordList wordList = *new WordList();
	if (wordList.type_identifier.find(word) == wordList.type_identifier.end()) {
		cout << "<" << word << ",ident>" << endl;
		return true;
	}
	else
	{
		return false;
	}
}