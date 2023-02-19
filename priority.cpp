#include<bits/stdc++.h>
 
using namespace std;
 
bool cmp(int a, int b) {
    return (a < b);
}
 
int main()
{
    int n, m, i, j;
    cout<<"Enter the number of processes: ";
    cin>>n;
    cout<<"Enter the number of memory blocks: ";
    cin>>m;
 
    int p[n], p2[n], mb[m], mb2[m];
 
    cout<<"Enter the size of the processes: ";
    for(i = 0; i < n; i++) {
        cin>>p[i];
        p2[i] = p[i];
    }
 
    cout<<"Enter the size of the memory blocks: ";
    for(i = 0; i < m; i++) {
        cin>>mb[i];
        mb2[i] = mb[i];
    }
 
    sort(mb, mb+m, cmp);
    cout << "Best fit: "<<endl;
 
    for(i = 0; i < n; i++) {
        for(j=0; j < m; j++) {
            if(p[i]<=mb[j]) {
                cout<<"The process "<<i<<" of size " <<p[i]<<" is allocated in "<<j<<" memory block of size "<<mb[j]<<endl;
                p[i] = 10000;
                mb[j] = 0;
            }
        }
 
    }
 
    for(i = 0; i < n; i++) {
        if(p[i] != 10000) {
            cout<<"The process "<<i<<" must wait"<<endl;
        }
    }
 
    return 0;
}
