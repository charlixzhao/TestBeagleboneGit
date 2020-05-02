#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <limits>
#include <stack>
#include <cassert>
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

std::vector<string> readLineString()
{
	std::string s;
	std::getline(std::cin, s);
	std::stringstream ss(s);
	std::vector<string> vec;
	std::string token;
	while (std::getline(ss, token, ' '))
	{
		vec.push_back(token);
	}
	return vec;
}

std::vector<double> readLineDouble()
{
	std::string s;
	std::getline(std::cin, s);
	std::stringstream ss(s);
	std::vector<double> vec;
	std::string token;
	while (std::getline(ss, token, ' '))
	{
		vec.push_back(stod(token));
	}
	return vec;
}

int readLineNumber()
{
	std::string s;
	std::getline(std::cin, s);
	return std::stoi(s);
}


#include <map>
#include <array>
#include <functional>

class Solution 
{
public:

	
};

int main()
{
	auto v = readLineDouble();
	for (auto d : v) cout << d << endl;

}

