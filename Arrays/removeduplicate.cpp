
#include <iostream>
using namespace std;

int main(){
	
	int a[10]={22,24,22,3333,45,76,44,87};
	int s=sizeof (a)/sizeof a[0];
	int x=0;
for(int i=1; i<s; i++)
	if(a[i]!=a[x]){
		a[++x]=a[i];
	}
	
	for(int i=0; i<x; i++){
		cout<<a[i];}
	
	
}