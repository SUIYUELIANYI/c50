#include <stdio.h>//自己写的一直报错，找了个思路相近的作了修改
#include <string.h>

char MAX[11] = "2014/09/06";
char MIN[11] = "1814/09/06";

int main(){
	
	int n;
	scanf("%d", &n);
	
	int count = 0;
	char old[11], young[11];
	char oldName[6], youngName[6];
	strcpy(old, MAX);
	strcpy(young, MIN);
	
	for(int i=0; i<n; i++){
		char name[6];
		char birth[11];
		scanf("%s %s", name, birth);
		if(strcmp(birth, MIN)>=0 && strcmp(birth, MAX)<=0){
			count++;
			if(strcmp(birth, old)<0){
				strcpy(old, birth);
				strcpy(oldName, name);
			}
			if(strcmp(birth, young)>0){
				strcpy(young, birth);
				strcpy(youngName, name);
			}
		}
	}
	if(count>0){
		printf("%d %s %s", count, oldName, youngName);
	}
	else{
		printf("%d", count);
	}
	
	return 0;
} 

