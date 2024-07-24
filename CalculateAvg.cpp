#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
}
int avg=sum/n;
cout<<avg<<endl;   
return 0;
}
