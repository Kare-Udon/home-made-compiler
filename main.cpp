#include <iostream>
#include<fstream>
#include "Function.h"
#include <list>
using namespace std;




int main() {
    
	ifstream fin("in.txt");
    char buf[1024] = { 0 }; 
    int num = 0;
    string line[1024];
    while (fin >> buf)
    {
        line[num] = buf;
      //  cout << line[num] << endl;//ÿһ�ε�buf�ǿո��س���������ɫ�ַ����ֿ���Ԫ��
        num++;
    }
    //������������ļ��У�ÿ�οո�֮���Ԫ��
    
    list <string> line2;
    for (int j = 0; j <= num; j++)
    {
        int length = line[j].length();
        int i = 0;
        while (i < length)
        {
            if (IsNum(line[j][i])) { //�ж��ǲ������� ���� 12 1 1234
                string s;
                int same_i = i;
                while (IsNum(line[j][same_i]))
                {
                    s.push_back(line[j][same_i]);
                    same_i++;
                    if (same_i >= length) //���ⳤ�ȳ������г̶�
                        break;
                }

                line2.push_back(s);
                i=same_i;
                continue;
            }
            else if (IsSingleSymbol(line[j][i])) {//�ж��ǲ��Ƿ���
                string s;
                s.push_back(line[j][i]);
                if (IsSingleSymbol(line[j][i + 1]))//�ж��ǲ��Ƕ�Ԫ������� ++ --
                {
                    s.push_back(line[j][i+1]);
                }
                line2.push_back(s);
                i += 2;
                continue;
            }
            else { //ʣ������ַ��� һֱ������������
                string s;
                int same_i = i;
                while (same_i<length|| IsSingleSymbol(line[j][same_i]))//�ж���һ���ǲ��Ƿ���
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

    

    for (list<string>::iterator it=line2.begin();it!=line2.end();it++)
    {
        cout << *it << endl;
    }
}