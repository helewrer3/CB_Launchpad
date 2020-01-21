#include<bits/stdc++.h>
using namespace std;

long long int ugly(long long int  n){
    long long int  result[n];
    result[0]=1;
    long long int i2=0,i3=0,i5=0;
    long long int uglyi2=2;
    long long int uglyi3=3;
    long long int uglyi5=5;
    long long int res=1;
    for(int i=1;i<n;i++){
        res=min(uglyi2,min(uglyi3,uglyi5)); 
        result[i]=res;
        if(res==uglyi2){
            i2++;
            uglyi2=result[i2]*2;
        }
        if(res==uglyi3){
            i3++;
            uglyi3=result[i3]*3;
        }
        if(res==uglyi5){
            i5++;
            uglyi5=result[i5]*5;
        }
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int  n;
        cin>>n;
        cout<<ugly(n)<<endl;
    }
}