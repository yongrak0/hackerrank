

#include <bits/stdc++.h>
#include "ConsoleApplication1.h"
#include "Util.h"
using namespace std;



/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(vector<int> ar) {
	/*
	 * Write your code here.
	 */
	if (ar.empty())
		return 0;

	int nRetVal = 0;
	for (int i = 0; i < (int)ar.size(); i++)
	{
		nRetVal += ar[i];
	}
	return nRetVal;

}

int simpleArraySumMain()
{
	//ofstream fout(getenv("OUTPUT_PATH"));
	//auto res = getenv("OUTPUT_PATH");
	//ofstream fout(res);

	int ar_count;
	cin >> ar_count;
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //before carrige return charecter, ignore everything. 

	string ar_temp_temp;
	getline(cin, ar_temp_temp);

	vector<string> ar_temp = split_string(ar_temp_temp);

	vector<int> ar(ar_count);

	for (int ar_itr = 0; ar_itr < ar_count; ar_itr++) {
		int ar_item = stoi(ar_temp[ar_itr]);

		ar[ar_itr] = ar_item;
	}

	int result = simpleArraySum(ar);

	//fout << result << "\n";
	cout << result << "\n";
	//fout.close();

	return 0;
}


