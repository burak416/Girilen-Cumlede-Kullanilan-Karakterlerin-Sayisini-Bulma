#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i,j,m,l,sayac;
	char cumle[50],cumle2[50],k;
	printf("Lutfen bir cumle girin: ");
	fgets(cumle, sizeof(cumle), stdin);	
	j=strlen(cumle)-1;
	printf("Cumlenizde \n");
	for (i=0;i<j;i++){
		sayac=0;
		k=cumle[i];		
			for (l=0;l<j;l++){
				if (k==cumle2[l]||k==' '){
					break;
				}
				if(l==i){
						for (m=0;m<j;m++){
							if (cumle[m]==k){
							sayac++;
						}	
				}
				printf("%d kez: %c\n",sayac,cumle[i]);
			}
		}
		cumle2[i]=cumle[i];
	}
	printf("kullanilmis.");

	return 0;
}
