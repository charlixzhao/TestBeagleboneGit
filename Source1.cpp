/*#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;
std::vector<int> readLineAndSplit()
{
	std::string s;
	std::getline(std::cin, s);
	std::stringstream ss(s);
	std::vector<int> vec;
	std::string token;
	while (std::getline(ss, token, ' '))
	{
		vec.push_back(std::stoi(token));
	}
	return vec;

}

int readLineNumber()
{
	std::string s;
	std::getline(std::cin, s);
	return std::stoi(s);
}



struct Feature
{
	int x;
	int y;
	int count = 1;
	bool operator == (const Feature& a) const
	{
		return (a.x == x) && (a.y == y);
	}
};

struct FeatureHash
{
	std::size_t operator()(const Feature& feature) const
	{
		return feature.y * 10 + feature.x;
	}
};


class Solution
{
public:
	Solution()
	{
		unordered_set<Feature, FeatureHash>* pPreviousLine = &containerOne;
		unordered_set<Feature, FeatureHash>* pCurrentLine = &containerTwo;

		readLineNumber();
		int lines = readLineNumber();
		if (lines == 0) return;

		auto firstLine = readLineAndSplit();

		for (int i = 1; i < firstLine.size() - 1; i += 2)
		{
			Feature feature = { firstLine[i], firstLine[i + 1] };
			(*pPreviousLine).insert(feature);
		}
		for (int i = 1; i < lines; i++)
		{
			auto singleline = readLineAndSplit();
			(*pCurrentLine).clear();
			for (int j = 1; j < singleline.size()-1; j += 2)
			{
				Feature feature = { singleline[j], singleline[j + 1] };
				auto it = (*pPreviousLine).find(feature);
				if (it != (*pPreviousLine).end())
				{
					feature.count = it->count + 1;
					if (feature.count > maxLength)
					{
						maxLength = feature.count;
						cout << "max is: " << maxLength << endl;
					}
				}
				(*pCurrentLine).insert(feature);
				
			}
			unordered_set<Feature, FeatureHash>* temp = pPreviousLine;
			pPreviousLine = pCurrentLine;
			pCurrentLine = temp;
		}
	}

	int maxLength = 0;
	unordered_set<Feature, FeatureHash> containerOne;
	unordered_set<Feature, FeatureHash> containerTwo;
};*/
/*
int main()
{
	Solution s;
	cout << s.maxLength << endl;
}*/