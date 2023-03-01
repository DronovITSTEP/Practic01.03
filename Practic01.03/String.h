#pragma once
#include <iostream>
using namespace std;

/*
Добавить в строковый класс функцию, которая создает строку,
содержащую пересечение двух строк, то есть общие символы для
двух строк.
Например, результатом пересечения строк «sdqcg» «rgfas34»
будет строка «sg».
Для реализации функции перегрузить оператор * (бинарное умножение).
*/
class String
{
	char* str;
public:
	String(): str {new char[50] }{}

	friend istream& operator>>(istream& in, String& s) {
		in >> s.str;
		return in;
	}
	friend ostream& operator<<(ostream& out, String& s) {
		out << s.str;
		return out;
	}

	friend char* operator*(String& s1, String& s2) {
		int size = min(strlen(s1.str), strlen(s2.str));
		char* temp = new char[size + 1];

		char* min_str, * max_str;
		if (strlen(s1.str) > strlen(s2.str)) {
			min_str = s2.str;
			max_str = s1.str;

		}
		else {
			min_str = s1.str;
			max_str = s2.str;
		}
		int j = 0;
		for (int i{ 0 }; i < size; i++) {
			if (strchr(max_str, min_str[i])) 
				if (!strchr(temp, min_str[i]))
					temp[j++] = min_str[i];
			/*if (!strchr(min_str, min_str[i]))
				if (strchr(max_str, min_str[i]))
					temp[j++] = min_str[i];*/
		}
		temp[j] = '\0';
		return temp;
	}
};

