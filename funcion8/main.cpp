#include <iostream>

using namespace std;
int func8(int a, int b){
	cout << "Los valores son :" << endl;
	cout << "x= " << a << endl;
	cout << "y= " << b << endl;
	int * c = &a;
	int * d = &b ;
	int e = *d;
	int f= *c;
	cout << "Los valores invertidos seran:" << endl;
	cout << "x= " << e << endl;
	cout << "y= " << f<< endl;
}

int main() {
	func8(3,6);
}
