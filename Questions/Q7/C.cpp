#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define fast_io ios_base::sync_with_stdio(false);;cin.tie(0);
#define f(i,a,b) for(int i=a;i<b;i++)
#define READ freopen("input.txt","r",stdin)
#define WRITE freopen("output.txt","w",stdout)
using namespace std;

bool grcmp(int a,int b) {
    return a>b;
}

int sod(int x) {
    int total = 0;
    while(x!=0) {
        int last = x%10;
        total+=last;
        x=x/10;
    }
    return total;
}



void solve() {
    
    char arr[20];

    int i;

    for(i=0;i<20;i++) {
        *(arr+i) = 65+i;
    }
    *(arr+i) = '0';
    cout<<arr;
    

}

int main() {


    fast_io;
    #ifndef ONLINE_JUDGE
    READ;
    WRITE;
    #endif
    

    solve();

    
}

