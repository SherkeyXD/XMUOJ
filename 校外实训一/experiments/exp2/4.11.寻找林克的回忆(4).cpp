#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/ms961516792/article/details/48157141

const int oo = 0x3f3f3f3f;
const int nR = 16 * 16 * 16 + 10;
const int nC = 16 * 16 * 4;
const int MAX = nR * 4 + nC + 10;
const int delta[] = {1, 16 * 16 + 1, 16 * 16 * 2 + 1, 16 * 16 * 3 + 1};
const int head = 0;

int cnt[nC + 10], st[nC + 10];
int Left[MAX], Right[MAX], Up[MAX], Down[MAX];
int row[MAX], col[MAX];
int M, K;

struct Ans
{
	int r, c, k;
} ans[MAX];


void remove(const int &c)
{
	Left[Right[c]] = Left[c];
	Right[Left[c]] = Right[c];
	for (int i = Down[c]; i != c; i = Down[i])
		for (int j = Right[i]; j != i; j = Right[j])
		{
			Up[Down[j]] = Up[j];
			Down[Up[j]] = Down[j];
			cnt[col[j]]--;
		}
}

void resume(const int &c)
{
	for (int i = Up[c]; i != c; i = Up[i])
		for (int j = Left[i]; j != i; j = Left[j])
		{
			Down[Up[j]] = j;
			Up[Down[j]] = j;
			cnt[col[j]]++;
		}
	Left[Right[c]] = c;
	Right[Left[c]] = c;
}

bool dfs(const int &k)
{
	if (Right[head] == head)
	{
		char s[300] = {0};
		for (int i = 0; i < k; i++)
			s[ans[st[i]].r * 16 + ans[st[i]].c] = ans[st[i]].k + 'A';
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 16; j++)
				cout << s[i * 16 + j];
			cout << endl;
		}
		return true;
	}

	int s = oo, c = 0;
	for (int i = Right[head]; i != head; i = Right[i])
		if (cnt[i] < s)
		{
			s = cnt[i];
			c = i;
		}

	remove(c);
	for (int i = Down[c]; i != c; i = Down[i])
	{
		st[k] = row[i];
		for (int j = Right[i]; j != i; j = Right[j])
			remove(col[j]);
		if (dfs(k + 1))	return true;
		for (int j = Left[i]; j != i; j = Left[j])
			resume(col[j]);
	}
	resume(c);
	return false;
}

void init()
{
	Left[head] = nC;
	Right[head] = 1;
	Up[head] = Down[head] = head;
	for (int i = 1; i <= nC; i++)
	{
		Left[i] = i - 1;
		Right[i] = (i + 1) % (nC + 1);
		Up[i] = Down[i] = i;
		cnt[i] = 0;
		col[i] = i;
		row[i] = 0;
	}
	M = 0;
	K = nC;
}

int makecolhead(const int &c)
{
	K++;
	cnt[c]++;
	col[K] = c;
	row[K] = M;

	Left[K] = Right[K] = K;

	Up[K] = c;
	Down[K] = Down[c];
	Up[Down[K]] = K;
	Down[Up[K]] = K;
	return K;
}

void addcol(const int &id, const int &c)
{
	K++;
	cnt[c]++;
	col[K] = c;
	row[K] = M;

	Left[K] = id;
	Right[K] = Right[id];
	Left[Right[K]] = K;
	Right[Left[K]] = K;

	Up[K] = c;
	Down[K] = Down[c];
	Up[Down[K]] = K;
	Down[Up[K]] = K;
}

void addrow(const int &i, const int &j, const int &k)
{
	int id;
	M++;
	ans[M].r = i;
	ans[M].c = j;
	ans[M].k = k;
	id = makecolhead(16 * i + j + delta[0]);
	addcol(id, 16 * i + k + delta[1]);
	addcol(id, 16 * j + k + delta[2]);
	addcol(id, (i / 4 * 4 + j / 4) * 16 + k + delta[3]);
}

int main()
{
	char str[300];
	char s[300];
	int pos;
	bool blocks = false;
	while (~scanf("%s", str))
	{
		if (blocks)
			puts("");
		else
			blocks = true;
		init();
		pos = 0;
		for (int i = 0; i < 16; i++)
			s[pos++] = str[i];
		for (int i = 1; i < 16; i++)
		{
			scanf("%s", str);
			for (int j = 0; j < 16; j++)
				s[pos++] = str[j];
		}
		for (int i = 0; i < 16; i++)
			for (int j = 0; j < 16; j++)
				if (s[i * 16 + j] == '-')
					for (int k = 0; k < 16; k++)
						addrow(i, j, k);
				else
					addrow(i, j, s[i * 16 + j] - 'A');

		dfs(0);
	}
	return 0;
}