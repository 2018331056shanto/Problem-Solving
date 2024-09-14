#include<bits/stdc++.h>
using namespace std;
int keyMatrix[2][2]={{3,3},{2,5}};
int invmatrix[2][2]={{15,17},{20,9}};

int plainSegment=2;

int egcd(int a,int b,int &x,int &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}

	int x1,y1;
	int d=egcd(b,a%b,x1,y1);
	x=y1;
	y=x1-y1*(a/b);
	return d;
}

int findModInverse(int e,int phi)
{
	int x,y;
	int g=egcd(e,phi,x,y);
	if(g!=1)
	{
		return -1;
	}
	else
	{
		return (x%phi+phi)%phi;
	}
}

string padPlaintext(string plaintext)
{
	int padsize=plaintext.length()%plainSegment;

	if(padsize==0)
		return plaintext;

	padsize=plainSegment-padsize;

	for(int i=0;i<padsize;i++)
	{
		plaintext+='x';
	}
	return plaintext;
}

string encodeHillCipher(string plaintext)
{
	
	plaintext=padPlaintext(plaintext);
	cout<<plaintext<<endl;

	string cipher="";

	for(int i=0;i<plaintext.size();i+=plainSegment)
	{
		string segment=plaintext.substr(i,plainSegment);
		string ciphersegment="";

		for(int i=0;i<plainSegment;i++)
		{

			int sum=0;
			for(int j=0;j<plainSegment;j++)
			{

				sum+=(segment[j]-'a')*keyMatrix[i][j];
			}
			ciphersegment+=(sum%26)+'a';
		}
		cipher+=ciphersegment;
	}
	return cipher;


}

string decodeHillCipher(string plaintext)
{
	
	plaintext=padPlaintext(plaintext);
	// cout<<plaintext<<endl;

	string cipher="";

	for(int i=0;i<plaintext.size();i+=plainSegment)
	{
		string segment=plaintext.substr(i,plainSegment);
		string ciphersegment="";

		for(int i=0;i<plainSegment;i++)
		{

			int sum=0;
			for(int j=0;j<plainSegment;j++)
			{

				sum+=(segment[j]-'a')*invmatrix[i][j];
			}
			ciphersegment+=(sum%26)+'a';
		}
		cipher+=ciphersegment;
	}
	return cipher;


}

// paymoremoney
// mnqkymakgacu

// code
// wwva



int main()
{
	string plaintext;
	plaintext="code";


	string ciphertext=encodeHillCipher(plaintext);
	cout<<ciphertext<<endl;

	int d=findModInverse(9,26);
	cout<<"inverse :"<<d<<endl;
	string ptext=decodeHillCipher(ciphertext);
	cout<<"plaintext text :"<<ptext<<endl;


}