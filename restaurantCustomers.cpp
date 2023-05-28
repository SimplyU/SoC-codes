#include<bits/stdc++.h>
using namespace std;
int main (){
int n;
cin >> n;
int a[n][2];
for (int i =0;i<n;i++){
    for (int j =0;j<2;j++){
        cin >> a[i][j];
    }
}
int p[2*n];
int k =0;
for (int i =0;i<n;i++){
    for (int j =0 ;j < 2;j++){
        p[k]=a[i][j];
        k++;
    }
    }
for (int j =0;j<2*n;j++){
    for (int i =1 ;i <2*n;i++){
        if (p[i] < p[i-1]){
            int temp =p[i];
            p[i]=p[i-1];
            p[i-1]=temp;
        }
    }
    }
// for (int i =0;i<n*2;i++){
//     cout << p[i];
//     }
int count = 0;
int maxCount =0;

for (int j =0;j<n*2;j++){
    for (int i =0;i<n;i++){
        if (p[j] == a[i][0]) {
            count ++;
        }
        if(p[j]==a[i][1]){
            count--;
        }
        if (maxCount < count){
            maxCount = count;
        }
        
    }
}
cout << maxCount;

return 0;
}