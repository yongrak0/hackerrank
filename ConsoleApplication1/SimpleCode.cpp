#include "SimpleCode.h"
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) 
{
	string strRet;
	bool bIsAM = true;
	if (s.empty() == false)
	{
		if (s.find("AM") == string::npos)
		{
			bIsAM = false;
		}
		int nTime = stoi(s.substr(0, 2));

		if (bIsAM == false)
		{
			// afternoon
			if (nTime != 12)
				nTime += 12;
		}
		else
		{
			// morning
			if (nTime == 12)
				nTime = 0;
		}
		string hour;
		if (nTime < 10)
			hour = "0" + to_string(nTime);
		else
			hour = to_string(nTime);

		strRet = s.substr(0, 8);
		strRet.replace(0, 2, hour);
	}

	return strRet;
}

int ConvertTimeToMilitaryTime()
{
	string s;
	getline(cin, s);

	string result = timeConversion(s);

	cout << result << "\n";
	return 0;
}

int SimpleMain()
{
	ConvertTimeToMilitaryTime();
	return 0;
}