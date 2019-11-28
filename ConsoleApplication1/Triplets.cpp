#include <bits/stdc++.h>
#include "ConsoleApplication1.h"
#include "Util.h"
using namespace std;



// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
	vector<int> vRetVal(2);
	int nAScore = 0;
	int nBScore = 0;
	bool bGood = true;
	if (a.size() == 3 && b.size() == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			if (a[i] < 1 || a[i] > 100)
			{
				bGood = false;
				break;
			}
			if (b[i] < 1 || b[i] > 100)
			{
				bGood = false;
				break;
			}
			if (a[i] > b[i])
				nAScore++;
			else if (a[i] < b[i])
				nBScore++;
		}
	}
	if (bGood)
	{
		vRetVal[0] = nAScore;
		vRetVal[1] = nBScore;
	}
	return vRetVal;
}

int TripletsMain()
{
	//ofstream fout(getenv("OUTPUT_PATH"));
	cout << "[Triplets quiz]" << endl;
	float fa = 0;
	fa = 1.f / 3.f;
	cout << fa << endl;
	std::cout << std::fixed << std::setprecision(2) << fa << std::endl;
	string a_temp_temp;
	getline(cin, a_temp_temp);

	
	vector<string> a_temp = split(rtrim(a_temp_temp));

	vector<int> a(3);

	for (int i = 0; i < 3; i++) {
		int a_item = stoi(a_temp[i]);

		a[i] = a_item;
	}

	string b_temp_temp;
	getline(cin, b_temp_temp);

	vector<string> b_temp = split(rtrim(b_temp_temp));

	vector<int> b(3);

	for (int i = 0; i < 3; i++) {
		int b_item = stoi(b_temp[i]);

		b[i] = b_item;
	}

	vector<int> result = compareTriplets(a, b);
	cout << "[Results]" << endl;
	for (int i = 0; i < result.size(); i++) {
		cout << result[i];

		if (i != result.size() - 1) {
			cout << " ";
		}
	}

	cout << "\n";
	cout << "[finished]" << endl;

	//fout.close();

	return 0;
}

