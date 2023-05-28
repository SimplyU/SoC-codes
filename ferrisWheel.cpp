#include<bits/stdc++.h>
using namespace std;
int main (){
int n,x;
cin >> n >> x;
int p[n];
for (int i =0 ; i < n; i++){
    cin >> p[i];
}
int count = n;

for (int i =0; i<n;i++){
    for (int j =i+1; j<n;j++){
        if (p[i] + p[j] <= x){
            count--;
            p[j]=x;
            break;
        }
    }
}
cout << count;
return 0;
}