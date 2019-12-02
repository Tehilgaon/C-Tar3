#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <functional>
using namespace std;
class Lending
{
	string id;
	string client;
	string date;
	int code;
public:
	friend istream& operator>>(istream& is, Lending& l);
	friend ostream& operator<<(ostream& os, Lending& l);
	bool operator==(const Lending& l);
	bool operator!=(const Lending& l);
	bool operator>(const Lending& l);
	bool operator>=(const Lending& l);
	bool operator<(const Lending& l);
	bool operator<=(const Lending& l);
	void set_date(string str) { date = str; }
};
