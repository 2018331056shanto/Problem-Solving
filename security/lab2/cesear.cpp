#include<bits/stdc++.h>
using namespace std;

string decrypt(string cipher,int key)
{
	for(int i=0;i<cipher.length();i++)
	{
		cipher[i]=(cipher[i]-'a'-key+26)%26+'a';
		
	}
	return cipher;
}
string encrypt(string plaintext,int key)
{
	for(int i=0;i<plaintext.length();i++)
	{
		plaintext[i]=(plaintext[i]-'a'+key)%26+'a';

	}
	return plaintext;
}
int main()
{
    string cipher = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";
    for(int i=1; i<26 ;i++)
    {
        cout<<"Key = "<<i<<" Decoded Text - "<<decrypt(cipher,i)<<endl;
    }
	
}