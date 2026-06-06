#include<iostream>
using namespace std;
int eded;
int ters;
int n;
int main(){

cin >> n;
eded = n;
  while(n > 0){
    int qaliq = n %10;
    ters = ters*10+qaliq;
    n = n/10;
  }
if(eded == ters){
  cout<<"YES"<<endl;
}
else{
  cout<<"NO"<<endl;
}
  return 0;
}
