#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#define sz 2000005
using namespace std;


// TRIE starts using pointer
#define trie_sz 26
struct node{
    bool ending;
    node *next[trie_sz];
    node()
    {
        ending = false;
        for (int i = 0; i<trie_sz; i++) next[i] = NULL;
    }
}*root;

void insert_in_trie(char *str, int len)
{
    node *cur = root;
    for (int i = 0; i<len; i++)
    {
        int now = str[i]-'a';
        if(cur->next[now]==NULL)
            cur->next[now]=new node();
        cur=cur->next[now];
    }
    cur->ending=true;
}

bool search_in_trie(char *str, int len)
{
    node *cur=root;
    for (int i = 0; i<len; i++)
    {
        int now = str[i]-'a';
        if(cur->next[now]==NULL) return false;
        cur=cur->next[now];
    }
    return cur->ending;
}

bool delete_from_trie(node *cur) // this is for memset, it should be called by delete_from_trie(root) from main
{
    for (int i = 0; i<trie_sz; i++)
        if(cur->next[i]!=NULL) delete_from_trie(cur->next[i]);
        delete(cur);
}
// TRIE ends using pointer

int main()
{
    root = new node();

    int n;
    char s[sz];
    puts("How many words in dictionary?");
    scanf("%d", &n);

    for (int i = 0; i<n; i++)
        {
            scanf("%s", s);
            insert_in_trie(s,strlen(s));
        }

    puts("How many searches from dictionary?");
    scanf("%d", &n);

    for (int i = 0; i<n; i++)
        {
            scanf("%s", s);
            search_in_trie(s,strlen(s))==true?printf("YES\n"):printf("NO\n");
        }
    delete_from_trie(root);
    return 0;
}
/**
17
abcdaabcdefa
ababcadacc
aaa
aa
aab
aabccc
aabc
aab
abcdaabcde
wow
this
that
those
this
is
absolutely
vogue
10
these
is
i
absolute
aaaa
aabc
aabcc
abcdaabcd
vog
abcdaabcdefa