#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Trie
{
    TrieNode root;

public:
    Trie()
    {
        // root = new TrieNode('\0');
    }

    void insertWord(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            root->isTerminal = true;
        }

        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
        }
    }
    void insertWord(string word)
    {
        insertWord(root, word);
    };
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
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }

        isTerminal = false;
    }
};

int main()
{

    return 0;
}