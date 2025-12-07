#include<iostream>
#include <map>
using namespace std;
int RomanToInt(string s);
int main() {
	string symbol;
	cout << "Roman : ";
     cin >> symbol;
	int sum= RomanToInt(symbol);
	 cout << sum;


}
int RomanToInt(string s) {
	int len = s.size();
	int sum = 0;
	map<char, int> symbol = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };
	for (int i = 0; i <= len-1; i++) {
		if (i < len - 1 && symbol[s[i]] < symbol[s[i + 1]]) {
			sum -= symbol[s[i]];
		}
		else {
			sum += symbol[s[i]];

		}
	}
	return sum;


}
