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

    void insertWord(TrieNode *root, string word)
    {
        // Base case
        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        insertWord(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertWord(root, word);
    }

    bool search(TrieNode *root, string word)
    {

        // Base case
        if (word.size() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode *child;
        bool ans;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
            ans = search(child, word.substr(1));
        }
        else
        {
            return false;
        }

        return ans;
    }

    bool search(string word)
    {
        return search(root, word);
    }
};

class TrieNode
{
public:
    char data;
    TrieNode **children = new TrieNode *[26];
    bool isTerminal;

    TrieNode(char data)
    {
        this->data = data;
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