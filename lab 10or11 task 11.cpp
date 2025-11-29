#include<stdio.h>
#include<string.h>
int main(){
	char words[10][20]={"amna", "hi", "lol", "bottle", "laptop", "box", "table","chats", "beanie","choco"};
	char find[20];
	
	printf("\n enter word u wanna find:");
	gets(find);
	int found=0;
	for(int i=0;i<10;i++){
		if(strcmp(words[i],find)==0){
			found++;
			printf("\n word found at index:%d", i);
		}
	}
	if(!found){
		printf("word not found");
	}
}
