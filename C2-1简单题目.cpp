#include <iostream>
using namespace std;

int main()
{

	int n;
	cin >> n;
	int sum = 0, temp;
	int first;
	cin >> first;
	sum += first;
	n--;
	int max = first, min = first;
	while (n--){
		cin >> temp;
		sum += temp;
		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
	}
	cout << sum << " " << min << " " << max;
	return 0;
 } 
