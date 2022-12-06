#include "Settings.h"
using namespace std;
#include <iostream>

Settings::Settings(string key, int number)
{
	this->key = key;
	this->number = number;
}
void Settings::Add(string key, int number) {
	static map<string, int> map{ {"Alex", 19}, {"Dany", 18} };
	map.insert(pair<string, int>(key, number));
}
void Settings::Get(string key) {
	if (key == "Alex") {
		cout << "Alex = " << key << endl;
	}
	if (key == "Dany") {
		cout << "Dany = " << key << endl;
	}
	if (key == "Ivan") {
		cout << "Ivan = " << key << endl;
	}
}
void Settings::print(string key, int number) {
	static map<string, int> map{ {"Alex", 19}, {"Dany", 18}, {"Ivan", 20} };
	for (auto i = map.begin(); i != map.end(); i++) {
		std::cout << i->first << " = " << i->second << "\n";
	}
}

