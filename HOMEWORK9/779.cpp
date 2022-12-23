#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a;
	int n, t;

	ifstream file1("779(input).txt");
	file1 >> n;

	for (int i = 0; i < n; ++i)
	{
		file1 >> t;
		a.push_back(t);
	}

	ofstream file2("779(output).txt");
	file2 << a[a.size() / 2];

	file1.close();
	file2.close();

}