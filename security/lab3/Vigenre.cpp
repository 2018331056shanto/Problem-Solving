#include<bits/stdc++.h>
using namespace std;

string encryptVigenre(string msg,string key)
{
	int keylen=key.length();

	string cipher="";
	if(msg.length()%keylen!=0)
	{
		int addto=keylen-(msg.length()%keylen);
		cout<<addto<<endl;
		for(int i=0;i<addto;i++)
		{
			// cout<<"hds"<<endl;
			msg+='x';
		}

	}
	int cnt=0;
	for(int i=0;i<msg.length();i++)
	{
		int shift=key[cnt%keylen]-'a';
		if(msg[i]>='a'&&msg[i]<='z')
		{

			cipher+=(msg[i]-'a'+shift+26)%26+'a';
			cnt++;
			
		}
	}
	return cipher;
}

int main()
{

	string msg="howareyouiamfine";
	// string msg="xzbceh";
	string key ="peuly";

	string cipher=encryptVigenre(msg,key);
	cout<<cipher<<endl;
}



