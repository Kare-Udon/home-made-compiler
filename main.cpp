#include <iostream>
#include<fstream>
#include "Function.h"
#include <list>
#include "wordlist.h"
using namespace std;




int main() {
    
	ifstream fin("in.txt");
    char buf[1024] = { 0 }; 
    int num = 0;
    string line[1024];
    while (fin >> buf)
    {
        line[num] = buf;
      //  cout << line[num] << endl;//每一次的buf是空格或回车键（即白色字符）分开的元素
        num++;
    }
    //上述操作获得文件中，每次空格之间的元素
    
    list <string> line2;
    for (int j = 0; j <= num; j++)
    {
        int length = line[j].length();
        int i = 0;
        while (i < length)
        {
            if (IsNum(line[j][i])) { //判断是不是数字 比如 12 1 1234
                string s;
                int same_i = i;
                while (IsNum(line[j][same_i])|| line[j][same_i]=='.')
                {
                    s.push_back(line[j][same_i]);
                    same_i++;
                    if (same_i >= length) //避免长度超过整行程度
                        break;
                }

                line2.push_back(s);
                i=same_i;
                continue;
            }
            else if (IsSingleSymbol(line[j][i])) {//判断是不是符号
                string s;
                s.push_back(line[j][i]);
                i++;
                if (IsDualSymbol(line[j][i-1],line[j][i]))//判断是不是二元运算符如 ++ -- ,两个参数，一个是第一位参数，一个是第二位参数
                {
                    s.push_back(line[j][i]);
                    i++;
                }
                line2.push_back(s);
                
                continue;
            }
            else { //剩余就是字符串 一直读，读到换行
                string s;
                int same_i = i;
                while (same_i<length && !IsSingleSymbol(line[j][same_i]))//判断下一个是不是符号
                {
                    s.push_back(line[j][same_i]);
                    same_i++;
                  
                }
                line2.push_back(s);
                i = same_i;
                continue;
            }
        }

    }

    WordList WL =WordList();

    int iterator_num = 1;
    for (list<string>::iterator it=line2.begin();it!=line2.end();it++)
    {
       // SelectWord(*it,iterator_num);
        iterator_num++;
        cout << *it << endl;
    }
}