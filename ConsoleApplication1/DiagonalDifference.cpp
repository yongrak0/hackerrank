#include <bits/stdc++.h>
#include "ConsoleApplication1.h"
#include "Util.h"
using namespace std;


/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr)
{
	int a = 0, b = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";
			if (i == j)
			{
				a += arr[i][j];
			}

			if (i + j == arr.size() -1)
				b += arr[i][j];
		}
		cout << endl;
	}
	cout << "debug: a = " << a << ", b = " << b << endl;
	int c = a - b;
	if (c < 0)
		c *= -1;

	return c;
}

int DiagonalDifferenceMain()
{
	//ofstream fout(getenv("OUTPUT_PATH"));

	string n_temp;
	getline(cin, n_temp);

	int n = stoi(ltrim(rtrim(n_temp)));

	vector<vector<int>> arr(n);

	for (int i = 0; i < n; i++) {
		arr[i].resize(n);

		string arr_row_temp_temp;
		getline(cin, arr_row_temp_temp);

		vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

		for (int j = 0; j < n; j++) {
			int arr_row_item = stoi(arr_row_temp[j]);

			arr[i][j] = arr_row_item;
		}
	}

	int result = diagonalDifference(arr);

	cout << result << "\n";

	//fout.close();

	return 0;
}
