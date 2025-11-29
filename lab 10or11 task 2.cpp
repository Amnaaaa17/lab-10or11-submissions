#include<stdio.h>
#include<string.h>
void reverse(char str[],int start ,int end){
	if(start>=end){
		return;
	} else{
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		
		reverse(str, start+1, end-1);
	}
}

int main(){
	char str[30];
	
	printf("enter a string: ");
	gets(str);
	
	reverse(str,0,strlen(str)-1);
	
	printf("reversed string: %s", str);
}
