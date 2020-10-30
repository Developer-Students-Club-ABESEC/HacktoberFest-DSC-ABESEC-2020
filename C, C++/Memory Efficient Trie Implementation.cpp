/*
We only store the nodes here that are in the trie not the null nodes which are not required.
For doing this we use map.
*/

#include<bits/stdc++.h>
using namespace std;
/* node structure of the trie */
struct trie
{
	unordered_map<char, struct trie*> m1;
	bool isend;
	trie()
	{
		isend = false;
	}
};
struct trie *root;

/*
For every word for inserting we will start from the root and check if current letter of word exists.
If it exists we will move to that node else we will create a new node with that letter.
At the end of the word we will put 'isend = true' to end letter's node
*/
void insert(string str)
{
	struct trie *curr = root;
	for (char ch : str)
	{
		if (!curr->m1.count(ch))
		{
			curr->m1[ch] = new trie();
		}
		curr = curr->m1[ch];
	}
	curr->isend = true;
}
/*
For search we will start from the root and for every letter we will check if there exists a node with
that letter. If it exists we will move to that node else we will return false i.e. the word does not exists.
If we come to last letter node in the trie then we will check if a word ends here by 'isend == true'.
*/

bool search(string str)
{
	struct trie *curr = root;
	for (char ch :  str)
	{
		if (!curr->m1[ch])
		{
			return false;
		}
		curr = curr->m1[ch];
	}
	return curr->isend;
}

void solve()
{
	int n; // Number of words in the trie
	cin >> n;
	root = new trie;
	while (n--)
	{
		string str;
		cin >> str;
		insert(str);
	}
	int q; // Number of queries to be performed
	cin >> q;
	while (q--)
	{
		string str;
		cin >> str;
		if (search(str))
		{
			cout << str << " is present" << "\n";
		}
		else
		{
			cout << str << " is not present" << "\n";
		}
	}
}

signed main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	solve();
	return 0;
}
