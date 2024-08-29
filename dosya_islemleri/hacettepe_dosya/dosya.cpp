#include <stdio.h>

int main(){
	
	FILE *dd;
	int i, no;
	dd=fopen("/home/Saldray/Desktop/LearnC/rakam.txt","w");
	/* dosya, yazma modunda açılıyor */
	if (dd == NULL)
		printf("Surucu bulunamadi.\n");
	else{
		for(i=1; i<=5; i++){
			printf("%d. sayiyi giriniz:",i);
			scanf("%d", &no);
			fprintf(dd,"%d\n", no);
		}
		fclose(dd);
	}
	return 0;
}
