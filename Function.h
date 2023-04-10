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
	if (IsNumber(word)) return;  //判断这个string是不是数字
	if (Issingle_symbol(word)) return; //判断这个string是不是单符号
	if (Isdual_symbol(word)) return;//判断这个string是不是多符号
	if (Iskeywords(word)) return; //判断这个string是不是关键词
	if (IsCorrectWord(word)) return; //判断这个string是不是正确的命名

	//都不是就错的

	cout << "ERROR  " << num << endl;
}

//bool值是正确，需要cout，再return true，否则return false
bool IsNumber(string word) {
	if (true) {
		cout << endl;//记得输出 格式 <1,digit> 或 <1.2,float>
		return true;
	}
	else return false;
	
}


bool Issingle_symbol(string word) {

	if (true) {
		cout << endl;//记得输出 
		return true;
	}
	else return false;
}


bool Isdual_symbol(string word) {

	if (true) {
		cout << endl;//记得输出 
		return true;
	}
	else return false;
}


bool Iskeywords(string word) {

	if (true) {
		if (Istype_identifier(word)) return true;  //判断是不是类型 如 int char 之类的
		else {
			cout << endl;//记得输出
		return true;
		}
		
	}
	else return false;

}


bool IsCorrectWord(string word) {

	if (true) {
		cout << endl;//记得输出 
		return true;
	}
	else return false;
}

bool Istype_identifier(string word) {

	if (true) {
		cout << endl;//记得输出 
		return true;
	}
	else return false;
}