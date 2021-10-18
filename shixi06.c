#include<stdio.h>
#include<math.h>
int main(){
	do{
	int i,j,n,a;
	scanf("%d",&n);
	int amount[n];
	for(i=0;i<n;i++){
		scanf("%d",&amount[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
		if(abs(amount[j])<abs(amount([j+1]){
			a=amount[j];
			amount[j]=amount[j+1];
			amount[j+1]=a;
		}}}
		for(i=0;i<n;i++){
		printf("%d ",amount[i]);
		}}
		return 0;
		}
