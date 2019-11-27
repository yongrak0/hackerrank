#include <bits/stdc++.h>
#include "ConsoleApplication1.h"

using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

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

string ltrim(const string& str) {
	string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string& str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}

//split: delimiter로 문자열을 나눔 
vector<string> split(const string& str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}