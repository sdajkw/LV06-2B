//Benjamin Jan Perhoč, 2.b

#include <iostream>
using namespace std;

//Zadatak 1
int ukupno(int a, int b, int c) {
	return a + b + c;
}
bool prolazi(int a, int b, int c) {
	return ukupno(a, b, c) >= 180 && a >= 40 && b >= 40 && c >= 40;
}
void ispisiRezultat(int a, int b, int c) {
	cout << ukupno(a, b, c);
	if (prolazi(a, b, c)) {
		cout << " FINALE";
	}
	else {
		cout << " NE";
	}
}

//Zadatak 2
bool ispravno(int h, int m, int s) {
	return h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59;
}

void ispisiDvoznamenkasto(int x) {
	if (x < 10) cout << 0;
	cout << x;
}

void ispisiVrijeme(int h, int m, int s) {
	ispisiDvoznamenkasto(h);
	cout << ":";
	ispisiDvoznamenkasto(m);
	cout << ":";
	ispisiDvoznamenkasto(s);
	cout << endl;
}

//Zadatak 3
bool prviTest(int a, int b, int c, int d) {
	return a + d == b + c;
}
bool drugiTest(int a, int b, int c, int d) {
	return a != b && a != c && a != d && b != c && b != d && c != d;
}
int zamijeni(int a, int b, int c, int d) {
	return d * 1000 + b * 100 + c * 10 + a;
}
bool treciTest(int a, int b, int c, int d) {
	return zamijeni(a, b, c, d) % 7 == 0;
}
void ispis(int k) {
	if (k == 3) cout << "SIGURAN  ";
	else cout << "NIJE SIGURAN  ";
	cout << k << " / 3 uvjeta \n";
}


int main() {
	/*int a, b, c;
	cin >> a >> b >> c;
	ispisiRezultat(a, b, c);*/

	/*int h, m, s;
	cin >> h >> m >> s;
	if (!ispravno(h, m, s))
		return 0;
	s++;
	if (s == 60) {
		s = 0;
		m++;
		if (m == 60) {
			m = 0;
			h++;
			if (h == 24) h = 0;
		}
	}
	ispisiVrijeme(h, m, s);*/

	int n; //3041 SIGURAN primjer
	cin >> n;
	if (n < 1000 || n > 9999) return 0; 

	int a = n / 1000, b = n / 100 % 10, c = n / 10 % 10, d = n % 10;
	int k = prviTest(a, b, c, d) + drugiTest(a, b, c, d) + treciTest(a, b, c, d);
	ispis(k);
}