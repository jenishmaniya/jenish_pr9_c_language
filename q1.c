#include<stdio.h>
int main(){
	int a,b;
	printf("Entyer the first:");
	scanf("%d",&a);
	printf("Entyer the last:");
	scanf("%d",&b);
	FILE *F;
	FILE *G;
	int e[100];
	int o[100];
	int i;
	F = fopen("even.txt","w");
	G = fopen("odd.txt","w");
	if(F == NULL){
		printf("File is Unable to Open....");
	}else{
		printf("EVEN File opened...\n");
	}
	if(G == NULL){
		printf("File is Unable to Open....");
	}else{
		printf("ODD File opened...");
	}
	for(i=a;i<=b;i++){
		if(i%2==0){
		fprintf(F,"%d\n",i);
	}
    else{
    	fprintf(G,"%d\n",i);
	}
        
	}
	
	return 0;
}
