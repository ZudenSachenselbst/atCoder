#include<bits/stdc++.h>
using namespace std;
int main(){
   long N ;
   cin>>N;
   double log_2_N = log10(N) / log10(2);
   cout << floor(log_2_N)  << endl;

}