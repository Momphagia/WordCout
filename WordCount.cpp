#include<stdio.h>
int main(){
	char word;
	int count=0,blank=1;
	while(word!='\n'){
		scanf("%c",&word);
		if(word!=' '&&blank==1&&word!='\n' && word!=44 && word!=78){
            count++;
            blank=0;
        }
        if(word==' ' && blank==0||word==44 && blank==0 ||word==78 && blank==0){
            blank=1;
        }
	}
	printf("%d",count);
	return 0;
}
