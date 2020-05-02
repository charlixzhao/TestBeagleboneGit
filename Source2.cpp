/*#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
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

struct State
{
	vector<bool> m_visited;
	int m_pos = 0;
	string getKey()
	{
		string s = to_string(m_pos);
		for (auto b : m_visited)
		{
			if (b) s += "1";
			else s += "0";
		}
		return s;
	}
	bool visitedAll()
	{
		for (auto b : m_visited)
		{
			if (b == false) return false;
		}
		return true;
	}
};

class Solution
{
public:
	Solution()
	{
		int nlines = readLineNumber();
		map.resize(nlines);
		for (int i = 0; i < nlines; i++)
		{
			map[i] = readLineAndSplit();

		}
		State start;
		start.m_pos = 0;
		start.m_visited = vector<bool>(nlines, false);
		mincost = helper(start);
	}

	int helper(State state)
	{
		if (state.visitedAll())
		{
			return map[state.m_pos][0];
		}

		string s = state.getKey();
		if (table.count(s) != 0)
		{
			return table.at(s);
		}
		vector<int> res;
		for (int i = 0; i < state.m_visited.size(); i++)
		{
			if (!state.m_visited[i])
			{
				State newState = state;
				newState.m_visited[i] = true;
				newState.m_pos = i;
				res.push_back(map[state.m_pos][i] + helper(newState));
			}
		}
		int mincost = *min_element(res.begin(), res.end());
		table.insert(pair<string, int>(s, mincost));
		return mincost;

	}

	unordered_map<string, int> table;
	vector<vector<int>> map;
	int mincost = 0;
};
int main()
{
	Solution s;
	cout << s.mincost << endl;
}*/