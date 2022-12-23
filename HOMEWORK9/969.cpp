#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n, m;

	ifstream file1("969(input).txt");
	file1 >> n >> m;

	int ans;
	ans = 2 % m;

	for (int i = 1; i <= n; ++i)
	{
		ans = (ans * ans) % m;
	}

	ofstream file2("969(output).txt");
	file2 << ans;

	file1.close();
	file2.close();
}