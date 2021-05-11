#include <iostream>
using namespace std;

int main() {
	char c;
	int ch,dig,spac;
	c = cin.get();
	ch=0;
	dig=0;
	spac=0;
	while (c != '$') {
		if ( c>=97 && c<=122 ){
			ch++;
		}
		if ( c>=48 && c<=57 ){
			dig++;
		}
		if ( c==32 || c==10 || c==9 ){
			spac++;
		}
        
		c = cin.get();

	}
	cout << ch << " " << dig <<" " << spac;
}




