#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, y, m, d, year, month, date;
	string s;
	cin >> n;
	y = 2020;
	m = 12;
	d = 31;
	for (int i = 0; i < n; i++) {
		cin>>s;
		year = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 + (s[3] - '0');
		month = (s[5] - '0') * 10 + (s[6] - '0');
		date = (s[8] - '0') * 10 + (s[9] - '0');
		if (year < y || (year == y && month < m) || (year == y && month == m && date < d)) {
			y = year;
			m = month;
			d = date;
		}
	}
	cout << y << "-";
	if (m < 10) cout << "0";
	cout << m << "-";
	if (d < 10) cout << "0";
	cout << d << endl;
	return 0;
}
