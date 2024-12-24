/*

TRIE tree:

>> The complexity of TRIE is: n.
>> It takes a huge amount of words and then it can search the word with efficient
complexity.

>> Input is: some words which you want to include in your dictionary then give
words to search.
.. Output is: For every searching word, either YES if the word exists or NO if
the word does not exist.
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>

#define sz 200005
#define clr(abc,z) memset(abc,z,sizeof(abc))
using namespace std;


// TRIE starts array
#define trie_sz 26
struct node{
    bool ending;
    int next[trie_sz];
    node()
    {
        ending = false;
        for (int i = 0; i<trie_sz; i++) next[i] = 0;
    }
}data[sz];
int counter=1;

void insert_in_trie(char *str, int len)
{
    int n = 0;
    for (int i = 0; i<len; i++)
    {
        int now = str[i]-'a';
        if(data[n].next[now]==0)
        {
            data[n].next[now] = counter++;
        }
        n=data[n].next[now];
    }
    data[n].ending=true;
}

bool search_in_trie(char *str, int len)
{
    int n = 0;
    for (int i = 0; i<len; i++)
    {
        int now = str[i]-'a';
        if(data[n].next[now]==0) return false;
        n=data[n].next[now];
    }
    return data[n].ending;
}

bool delete_from_trie() // this is for memset only
{
    counter=1;
    clr(data,0);
}
// TRIE ends using array




int main()
{
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
            search_in_trie(s,strlen(s))?printf("YES\n"):printf("NO\n");
        }
    delete_from_trie();
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
*/