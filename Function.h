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
bool IsSingleSymbol(char s) {
	if ((isdigit(s) != 0) || (isalpha(s) != 0) )
	{
		return false;
	}
	else
	{
		return true;
	}
}


bool IsDualSymbol(char first, char next) {
	if ((first == '+') && ((next == '=') || (next == '+')))
	{
		return true;
	}
	if ((first == '-') && ((next == '=') || (next == '-')))
	{
		return true;
	}
	if ((first == '*') && (next == '='))
	{
		return true;
	}
	if ((first == '/') && (next == '='))
	{
		return true;
	}
	if ((first == '%') && (next == '='))
	{
		return true;
	}
	if ((first == '!') && (next == '='))
	{
		return true;
	}
	if ((first == '>') && (next == '=') || (next == '>'))
	{
		return true;
	}
	if ((first == '<') && (next == '=') || (next == '<'))
	{
		return true;
	}
	if ((first == '&') && (next == '=') || (next == '&'))
	{
		return true;
	}
	if ((first == '|') && (next == '=') || (next == '|'))
	{
		return true;
	}
	if ((first == '^') && (next == '='))
	{
		return true;
	}
	if ((first == '=') && (next == '='))
	{
		return true;
	}
	return false;
}



bool IsNumber(const string& word) {
	if (word.find('.') != string::npos) {
		if (word.find_last_of('.') != word.find_first_of('.')) return false;
		else if (word.find_first_of('.') == 0) return false;
		else {
			cout << "<" << word << ",float>" << endl;
			return true;
		}
		
	}
	else {
		int len = word.length();
		int count = 0;
		for (int j = 0; j < len; j++) {
			if (isdigit(word[j])) { //判断字符是否是数字
				count++;
			}
		}
		if (count == len) {
			cout << "<" << word << ",digit>" << endl;
			return true;
		}else  return false;
		
	}
	
}

bool Isdual_symbol(string word) {//先判断是不是二元符号，比如++ -- 

	int len = word.length();

	if (len == 2) {

		if (IsDualSymbol(word.at(0), word.at(1)))
		{
			cout << "<" << word << ",dual_symbol>" << endl;
			return true;
		}
		else
		{
			return false;
		}

	}
	else return false;
}
bool IsSingle_symbol(const string& word) {

	if (Isdual_symbol(word))return true;

	WordList wordList = *new WordList();

	if (word.length() == 1) {

		if (wordList.single_symbol.find(word) != wordList.single_symbol.end()) {
			cout << "<" << word << ",Single_symbol>" << endl;
			return true;
			}
		else
			return false;
	}
	
	else
		return false;
}





bool Istype_identifier(string word) {

	//在类型标识符中查找
	WordList wordList = *new WordList();
	if (wordList.type_identifier.find(word) != wordList.type_identifier.end()) {
		cout << "<" << word << ",ident>" << endl;
		return true;
	}
	else
	{
		return false;
	}
}
bool Iskeywords(string word) {
	WordList wordList = *new WordList();

	//先判断是不是类型，再判断关键字
	if (Istype_identifier(word)) {

		return true;
	}
	else if (wordList.keywords.find(word) != wordList.keywords.end()) {
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
	bool all = true;
	if (word.at(0) == '_ ' || islower(word.at(0))) {
		for (int j = 1; j < word.length(); j++) {
		if (word.at(j) == '_ '  ){ all = true; }//判断是不是下划线以及数字、字母    这里判断不是
		else if(islower(word.at(j))){ all = true; }
		else if(isdigit(word.at(j))) { all = true; }
		else {	
			all = false;
			break;
		}
	}
	}
	else {	//判断是不是下划线以及数字、字母    这里判断不是
		all = false;
		
	}
	
	if (all) {
		cout << "<" << word << ",id>" << endl;
	}
	return all;
}



void SelectWord(string word, int num) {

	if (IsNumber(word)) return;  //判断这个string是不是数字

//	if (Isdual_symbol(word)) return;//判断这个string是不是多符号
	if (IsSingle_symbol(word)) return;//判断这个string是不是单符号

	if (Iskeywords(word)) return;///判断这个string是不是关键词
	if (IsCorrectWord(word)) return;//判断这个string是不是正确的命名

	cout << "<ERROR," << num <<"> "<< endl;
	
}