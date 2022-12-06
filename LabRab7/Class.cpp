#include "Class.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <regex>
Class::Class(string name) {
	this->name = name;
}
void Class::print() {
	cout << "�� �����: " << name << endl;
}
void Class::substr() {
	//cout << "�� 2 �� 4 ������ �������������: " << name[1] << name[2] << name[3] << endl;
	cout << "�� 2 �� 4 ������ �������������: " << name.substr(1, 3) << endl;
}
void Class::findlet() {
	int size;
	size = name.find("a");
	if (size == -1) cout << "������, ������� �� ����� �� �������� a"<< endl;
	else if (size != -1) cout << "������: " << size << endl;
}
bool Class::haveNum()
{
	regex reg("[0-9]+");
	return regex_search(name, reg);        
}
void Class::check() {
	if (name.size() >= 2 && name.size() <= 32 && name[0] == toupper(name[0]) && ! (haveNum())) cout << "���������" << endl;
	else cout << "������������ ���" << endl;
}