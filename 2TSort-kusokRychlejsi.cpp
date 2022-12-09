#include <iostream>
#include <stdlib.h>

using namespace std;

#define n 1000

int p[n];

void generate(){
	for(int j=0;j<n;j++){
		p[j]=rand()%1000+1;
	}
}

void output(){
	for(int i=0;i<n;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
}

int main() {
	generate();
	output();
	
	int sorted=1;
	while(sorted!=0){
	 	int change = 0;
		 for (int i = 0; i < n - 1; i++) {
	  	  if (p[i] > p[i + 1]) {
	     	 int c = p[i + 1];
	
	      	for (int j = (i + 1); j > 0; j--) {
	      	  p[j] = p[j - 1];
	      	}
	      	p[0] = c;
		
			change++;
	    	}
	  	}
	  	if(change==0)sorted=0;	  	
  	}

	cout<<endl;
	output();
  	return 0;
}
/*

 5 cisel = 0.0635 sekundy
 100 cisel = 0.097 sekundy
 1000 cisel = 0.6671 sekundy
 10000 cisel = 38.27 sekund
 
*/
