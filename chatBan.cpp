#include<bits/stdc++.h>
using namespace std;
int main (){
int n;
cin >> n;
unsigned long long int a[n][2];
for (int i =0; i<n; i++){
    for (int j=0; j<2;j++){
        cin >> a[i][j];
    }
}
for (int i =0;i<n;i++){
    int count = 0;
    int sum =1;
    int p =1;
    
   
     
    
    while (sum <= a[i][1] && p>0){
        count++;
        if (p <= a[i][0]){
            sum+=p;
            p++;
        }
        else{
            p--;
            sum+=p;
        }
       
            
        }
    
    if (sum == a[i][1]){
            count--;
        }
     if (a[i][1] == 1 || a[1][i]==1){
        count = 1;
    }
    
    cout << count  << "\n";
}
return 0;
}