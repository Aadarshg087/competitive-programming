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
    }
    bool search(TrieNode *root, string word)
    {
    }

    bool search(string word)
    {
        return search(root, word);
    }

    void removeWord(TrieNode *root, string word)
    {
        // Base Case
        if (word.size() == 0)
        {
            root->isTerminal = false;
            return;
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return;
        }

        // Recursive call
        removeWord(root, word.substr(1));

        // Remove if the node is useless
        if (child->isTerminal == false)
        {
            for (int i = 0; i < 26; i++)
            {
                if (child->children[i] != NULL)
                {
                    return;
                }
            }
            delete child;
            root->children[index] = NULL;
        }
    }

    void insertWord(string word)
    {
        insertWord(root, word);
    }

    void removeWord(string word)
    {
        removeWord(root, word);
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