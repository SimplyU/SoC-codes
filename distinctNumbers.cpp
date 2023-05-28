#include<bits/stdc++.h>
using namespace std;



int main (){
int n;
cin >> n;
int x[n];
for (int i = 0; i < n; i++){
    cin >> x[i];
}
int count = 0;
for (int i = 1; i < n; i++){
    int temp = i;
    for (int j = i-1; j >= 0; j--){
        if (x[j] == x[temp]){
            x[temp]=0;
        }
    }
}
for (int i =0; i<n;i++){
    if (x[i]!=0) count++;
    
}
cout << count;
return 0;
}