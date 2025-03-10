#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin>>n) {


        int count1=0,count2=0,count3=0,count4=0;


        for (int i = 0; i < n; ++i) {

            int p;
            cin >> p;

            if(p==1)
            {
                count1++;
            }
            else if(p==2)
            {
                count2++;
            }
            else if(p==3)
            {
                count3++;
            }
            else if(p==4)

{
    count4++;
}

    
        }
        
        int cars =count4+count3;
        int remaining =max(0,count1-count3);
        
        cars+=count2/2;


        int rem =count2%2;
        
        if (rem) {


            cars+= 1;

            remaining =max(0,remaining-2);
        }
        
        cars+= remaining/4;
        if (remaining%4 != 0) {
            cars+=1;
        }
        
        cout << cars << endl;
    }
    return 0;
}
