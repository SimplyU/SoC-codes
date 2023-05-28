#include<bits/stdc++.h>
using namespace std;
int main (){
int n,m;
cin >> n >> m;
int h[n];
for (int i = 0; i<n;i++){
    cin >> h[i];
}
int t[m];
for (int i = 0; i<m;i++){
    cin >> t[i];
}
for (int i =0; i<n;i++){
    for (int j=i+1;j<n;j++){
        if (h[j] < h[j-1]){
            int temp = h[j];
            h[j]= h[j-1];
            h[j-1]=temp;
        }
    }
}
int x[m] ;
for (int i =0; i<m;i++){
    x[i]=-1;
}
for (int i =0; i<m;i++){
    for (int j = 0; j<n;j++){
        int temp;
        if (t[i] >= h[j] && h[j]!=-1){
            temp = h[j];
            x[i] = temp;   
        }
        
    }
}
for (int i =0; i<m;i++)
{
    cout <<x[i]<<"\n";
}
return 0;
}