#include "Lending.h"
#include <iostream>
using namespace std;

bool Lending::operator==(const Lending& l)
{
	if (id == l.id && client == l.client && date == l.date && code == l.code)
		return true;
	return false;
}

bool Lending::operator!=(const Lending& l)
{
	if (*this == l)
		return false;
	return true;
}

bool Lending::operator>(const Lending& l)
{
	if (!(date.substr(0, 2) > l.date.substr(0, 2)))
		if (!(date.substr(3, 2) > l.date.substr(3, 2)))
			if (!(date.substr(6, 2) > l.date.substr(6, 2)))
				if (!(id > l.id))
					if (!(code > l.code))
						return false;
	return true;
}

bool Lending::operator>=(const Lending& l)
{
	if (*this == l || *this > l)
		return true;
	return false;
}

bool Lending::operator<(const Lending& l)
{
	if (*this >= l)
		return false;
	return true;
}

bool Lending::operator<=(const Lending& l)
{
	if (*this == l || *this < l)
		return true;
	return false;
}

istream& operator>>(istream& is, Lending& l)
{
	cout << "enter id name date item ";
	is >> l.id >> l.client >> l.date >> l.code;
	return is;
}

ostream& operator<<(ostream& os, Lending& l)
{
	os << endl << "Lending details: id: " << l.id << " name: " << l.client << " date: " << l.date << " item: " << l.code << endl;
	return os;
}