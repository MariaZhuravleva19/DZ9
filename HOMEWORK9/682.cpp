#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n, znach = 1, ans = 0;

	ifstream file1("682(input).txt");
	file1 >> n;

	for (int i = 0; i < n - 1; i++)
		znach *= 10;

	int pred = znach * 10;

	for (; znach < pred; znach++)
		ans += znach;

	ofstream file2("682(output).txt");
	file2 << ans;

	file1.close();
	file2.close();
}