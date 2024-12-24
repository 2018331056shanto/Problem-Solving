#include "bits/stdc++.h"

using namespace std;

const int mx = 100005;

bool tree[4*mx];

void update(int v, int tl, int tr, int l, int r){

    if(tl==l and tr==r){
        tree[v] = !tree[v];
        cout<<v<<endl;
        return;
    }

    int tm = (tr+tl)/2;

    if(r<=tm)
        update(2*v, tl, tm, l, r);
    // if the segment in the right
    else if(tm<l)
        update(2*v+1, tm+1, tr, l, r);
    else{
        update(2*v, tl, tm, l, tm);
        update(2*v+1, tm+1, tr, tm+1, r);
    }
}

int query(int v, int tl, int tr, int pos){

    if(tr==pos and tl==pos)
        return tree[v];

    if(tree[v]){
        tree[v*2]= !tree[v*2];
        tree[v*2+1]= !tree[v*2+1];
        tree[v]=0;
    }

    int tm = (tl+tr)/2;

    if(pos<=tm)
        return  query(v*2, tl, tm, pos);
    else
        return  query(v*2+1, tm+1, tr, pos);
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("in.txt","r",stdin);
    //     freopen("out.txt","w",stdout);
    // #endif
    ios::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);

    int t, cs = 1;
    for (cin >> t; cs <= t; cs++) {
        printf("Case %d:\n", cs);

//        create_tree(a, tree, n);
        memset(tree, 0, sizeof(tree));

        string str;
        cin >> str;
        int len = str.size();

        // insert input data
        for (int i = 0; i < len; i++)
            if(str[i]=='1')
                update(1,1,len,i+1,i+1);

        int q,x,y;
        cin >> q;

        for (int i = 0; i < q; i++) {
            char choice;
            cin >> choice;
            switch(choice) {
                case 'I':
                    cin >> x;
                    cin >> y;
                    update(1, 1, len, x, y);
                    break;

                case 'Q':
                    cin >> x;
                    printf("%d\n", (query(1,1,len,x)));
                    break;
            }
        }
    }
    return 0;
}