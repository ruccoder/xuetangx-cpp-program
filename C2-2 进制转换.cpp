/*
	二进制转十进制 
*/
//#include <iostream>
//#include <cmath>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	char s[11];
//	int n[11];
//	cin >> s;
//	int i, j;
//	for (i = strlen(s)-1, j = 0; i >= 0; --i,j++){
//		n[j] = s[i]-'0';
//	}
//	int sum = 0;
//	for (j = 0; j < strlen(s); ++j){
//		sum += n[j] * pow(2, j);
//	}
//	cout << sum << endl;
//	
//	return 0;
//}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int d, sum = 0, i = 0;
	do{
		d = n % 10;
		sum += d * pow(2, i);
		n /= 10;
		++i;
	}while (n != 0);
	cout << sum << endl;
	return 0;
 } 
