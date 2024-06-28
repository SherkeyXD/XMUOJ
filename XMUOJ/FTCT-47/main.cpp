#include <bits/stdc++.h>
using namespace std;

struct LoopInfo
{
    string name;
    long long sum;
    long long length;
};


vector<string> split(const string &s, char delim)
{
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
    {
        elems.push_back(item);
    }
    return elems;
}

string trim(const string &s)
{
    string result = s;
    result.erase(0, result.find_first_not_of(" "));
    result.erase(result.find_last_not_of(" ") + 1);
    return result;
}

LoopInfo resolve_for_loop(string s)
{
    vector<string> parts = split(s, ' ');
    string name = trim(parts[0]);
    long long start, end, finalEnd;
    long long step = 1, length = 0, sum = 0;
    if (s.find("step") != string::npos)
    {
        step = stoi(trim(parts.back()));
        parts.pop_back();
        parts.pop_back();
    }
    if (s.find("downTo") != string::npos)
    {
        start = stoi(parts[2]);
        end = stoi(parts.back());
        step = -step;
    }
    else
    {
        vector<string> range = split(parts[2], '.');
        for (int i = 0; i < range.size(); i++)
        start = stoi(range[0]);
        end = stoi(range[2]);
    }
    if (start <= end)
        for (int i = start; i <= end; i += step)
        {
            finalEnd = i;
            length++;
        }
    else
        for (int i = start; i >= end; i += step)
        {
            finalEnd = i;
            length++;
        }
    sum = (start + finalEnd) * length / 2;
    return LoopInfo{name, sum, length};
}

int main()
{
    string tmp, line1, line2, line3;
    getline(cin, tmp);
    getline(cin, tmp);
    getline(cin, line1);
    getline(cin, line2);
    getline(cin, line3);
    getline(cin, tmp);
    getline(cin, tmp);

    LoopInfo outer = resolve_for_loop(split(split(line1, '(').back(), ')').front());
    LoopInfo inner = resolve_for_loop(split(split(line2, '(').back(), ')').front());
    string add = trim(split(line3, '=').back());

    int res;
    if (outer.name == add)
        res = outer.sum * inner.length;
    else
        res = inner.sum * outer.length;
    cout << res << endl;

    return 0;
}