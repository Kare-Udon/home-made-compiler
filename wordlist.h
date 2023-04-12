//
// Created by Kare-Udon on 23-4-3.
//

#ifndef HOME_MADE_COMPILER_WORDLIST_H
#define HOME_MADE_COMPILER_WORDLIST_H

//HOME_MADE_COMPILER_WORDLIST_H

#include <set>
#include <string>

using namespace std;

class WordList {
public:
    set<string> plus_symbol;
    set<string> multi_symbol;
    set<string> relation_symbol;

    set<string> single_symbol;
    set<string> dual_symbol_head;        // dual-symbol like '+=', provide the first for matching
    set<string> dual_symbol;

    set<string> keywords;
    set<string> type_identifier;

    WordList() {
        plus_symbol = set<string>{
                "+", "-"
        };

        multi_symbol = set<string>{
                "*", "/"
        };

        relation_symbol = set<string>{
                "<", ">", "<=", ">=", "!=", "=="
        };

        single_symbol = set<string>{
                "=", "+", "-", "*", "/", "[", "]", "(", ")", "{", "}", ",", "#", "~", ".", "^", ";", "<", ">"
        };

        dual_symbol_head = set<string>{
                "+", "-", "*", "/", "!", ">", "<", "=", "%", "&", "|", "?", "^"
        };

        dual_symbol = set<string>{
                "==", "++", "+=", "--", "-=", "*=", "/=", "%=", "!=", ">=", "<=", "&&", "||", "<<", ">>", "&=", "|=",
                "^="
        };

        keywords = set<string>{
                "bool", "break", "case", "catch", "char", "const", "continue", "double", "do", "else", "enum", "FALSE",
                "float", "for", "if", "inline", "int", "long", "new", "nullptr", "return", "short", "signed", "struct",
                "switch", "this", "TRUE", "unsigned", "void", "while"
        };

        type_identifier = set<string>{
                "int", "char", "bool", "float", "double", "void"
        };
    }
};

#endif