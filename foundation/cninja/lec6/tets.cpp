#include <iostream>
using namespace std;

int main() {
	char c;
	int ch,dig,spac;
	int count = 0;
	c = cin.get();
	ch=0;
	dig=0;
	spac=0;
	while (c != '$') {
		count++;
		c = cin.get();
		if ( c>=97 && c<=122 ){
			ch++;
		}
		if ( c>=48 && c<=57 ){
			dig++;
		}
		if ( c==32 || c==10 || ch==9 ){
			spac++;
		}

	}
	cout << ch << " " << dig <<" " << spac;
}

