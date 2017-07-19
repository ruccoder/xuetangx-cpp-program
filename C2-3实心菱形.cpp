/*
	¥Ú”°¡‚–Œ 
*/

#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i){
		for (int j = n - i; j > 0; --j)
			cout << " ";
		for (int k = 2 * i - 1; k > 0; --k)
			cout << "*";
		for (int j = n - i; j > 0; --j)
			cout << " ";
		cout << endl;	
	}
	int down =  n - 1;
	for (int i = 1; i <= down; ++i){
		for (int j = 1; j <= i; ++j)
			cout << " ";
		for (int k = 2 * (down - i) + 1; k > 0; --k)
			cout << "*";
		for (int j = 1; j <= i; ++j)
			cout << " ";
		cout << endl;		
	}
	cout << endl;
	return 0;
}
