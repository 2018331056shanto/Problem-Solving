#include<bits/stdc++.h>
using namespace std;

map<string,string>mp1={

	{"0011","0000"},
	{"0100","0001"},
	{"1111","0010"},
	{"0001","0011"},
	{"1010","0100"},
	{"0110","0101"},
	{"0101","0110"},
	{"1011","0111"},
	{"1110","1000"},
	{"1101","1001"},
	{"0100","1010"},
	{"0010","1011"},
	{"0111","1100"},
	{"0000","1101"},
	{"1001","1110"},
	{"1100","1111"}
};
map<string,string>mp4={
	{"0000","0011"},
	{"0001","0100"},
	{"0010","1111"},
	{"0011","0001"},
	{"0100","1010"},
	{"0101","0110"},
	{"0110","0101"},
	{"0111","1011"},
	{"1000","1110"},
	{"1001","1101"},
	{"1010","0100"},
	{"1011","0010"},
	{"1100","0111"},
	{"1101","0000"},
	{"1110","1001"},
	{"1111","1100"}
};


map<char,string>mp2={
	{'0',"0000"},
	{'1',"0001"},
	{'2',"0010"},
	{'3',"0011"},
	{'4',"0100"},
	{'5',"0101"},
	{'6',"0110"},
	{'7',"0111"},
	{'8',"1000"},
	{'9',"1001"},
	{'a',"1010"},
	{'b',"1011"},
	{'c',"1100"},
	{'d',"1101"},
	{'e',"1110"},
	{'f',"1111"}

};
map<string,char>mp3={
	{"0000",'0'},
	{"0001",'1'},
	{"0010",'2'},
	{"0011",'3'},
	{"0100",'4'},
	{"0101",'5'},
	{"0110",'6'},
	{"0111",'7'},
	{"1000",'8'},
	{"1001",'9'},
	{"1010",'a'},
	{"1011",'b'},
	{"1100",'c'},
	{"1101",'d'},
	{"1110",'e'},
	{"1111",'f'}

};
void solve(){

// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);	
string s;
cin>>s;

string plaintext="";

int cnt=0;
char dup;
for(int i=s.length()-1;i>0;i--)
{
	if(s[i]==s[i-1])
	{
		dup=s[i];
		cnt++;
		// break;
	}
	else

	{

		cnt++;
		break;
	}
}
int num=dup-'0';
cout<<"number :"<<num<<endl;
if(cnt==num)
{
	s=s.substr(0,s.length()-cnt);
}

cout<<"str :"<<s<<endl;
cout<<cnt<<endl;
for(int i=0;i<s.length();i++)
{

	string x=mp2[s[i]];
	// cout<<x<<endl;
	string y=mp1[x];

	plaintext+=mp3[y];
}
cout<<plaintext<<endl;

 
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
