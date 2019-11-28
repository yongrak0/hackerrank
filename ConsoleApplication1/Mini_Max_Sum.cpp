#include <bits/stdc++.h>
#include "Util.h"
using namespace std;

/*
	input : 769082435 210437958 673982045 375809214 380564127

	210,437,958 = 1,640,793,344
	
	673,982,045 
	375,809,214 
	380,564,127 = 1,430,355,386

	769,082,435
*/

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr)
{
	unsigned long long qMin = 1000000000000llu;
	unsigned long long qMax = 0llu;
	int nMinIdx = 0;
	int nMaxIdx = 0;

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < qMin)
		{
			qMin = arr[i];
			nMinIdx = i;
		}
		if (arr[i] > qMax)
		{
			qMax = arr[i];
			nMaxIdx = i;
		}
	}
	unsigned long long qMinSum = 0;
	unsigned long long qMaxSum = 0;
	for (int i = 0; i < 5; i++)
	{
		if (i != nMinIdx)
			qMaxSum += arr[i];

		if (i != nMaxIdx)
			qMinSum += arr[i];
	}

	cout << qMinSum << " " << qMaxSum << endl;


}

int MiniMaxSumMain()
{
	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split_string(arr_temp_temp);

	vector<int> arr(5);

	for (int i = 0; i < 5; i++) {
		int arr_item = stoi(arr_temp[i]);

		arr[i] = arr_item;
	}

	miniMaxSum(arr);

	return 0;
}


