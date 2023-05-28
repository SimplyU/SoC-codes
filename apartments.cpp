#include<bits/stdc++.h>
using namespace std;

int validSpace (int a, int k , int available){
    if (available <= a+k && available >= a-k){
        return 1;
    }
    return 0;
}

int main (){
int n, m, k;
cin >> n >> m >> k;
int a[n];
int b[m];
for (int i = 0; i < n; i++){
    cin >> a[i]; 
}
for (int i = 0; i < m; i++){
    cin >> b[i]; 
}
int count =0;
for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
        if (validSpace(a[j],k,b[i])==1){
        count ++;
        b[i]=-k;
    }
    }


}
cout << count;
return 0;
}