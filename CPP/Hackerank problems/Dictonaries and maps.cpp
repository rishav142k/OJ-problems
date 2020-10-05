#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long n,ph[10],flag=0;
    char name[20][10],name1[20];
    cin>>n;
     for (int i=0;i<n;i++){
    cin>>name[i]>>ph[i];
     }
     
     
     for(long i=0;i<n;i++){
         cin>>name1;
         flag=0;
         for(long j=0;j<n;j++){

         if(strcmp(name1,name[j])==0){
         cout<<name1<<"="<<ph[j]<<endl;
         flag=1;
         break;
         }
         }
     
     if(flag==0){
         cout<<"Not found"<<endl;
     }
         }
     
    
    return 0;
}

