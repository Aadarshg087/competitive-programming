#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Trie
{

    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode('\0');
    }

    bool patternMatching(TrieNode *root, string pattern)
    {
        if (pattern.size() == 0)
        {
            return true;
        }

        int index = pattern[0] - 'a';
        TrieNode *child;
        bool ans;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
            ans = patternMatching(root, pattern.substr(1));
        }
        else
        {
            return false;
        }

        return ans;
    }

    bool patternMatching(vector<int> vect, string pattern)
    {
        patternMatching(root, pattern);
    }
};

class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        isTerminal = false;
    }
};

int main()
{

    return 0;
}