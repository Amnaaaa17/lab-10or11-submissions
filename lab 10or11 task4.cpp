#include<stdio.h>
#include<string.h>
struct movie{
	char title[100];
	char genre[100];
	char director[100];
	char release[20];
	int rating;
}m[100];

void add(struct movie *m){
	int n;
	printf("\n enter how many movies u want to add: ");
	scanf("%d", &n);
	
	for(int i =0; i<n;i++){
		printf("\n enter title: ");
		scanf("%s", m[i].title );
		printf("\n enter genre: ");
		scanf("%s", m[i].genre );
		printf("\n enter director: ");
		scanf("%s", m[i].director );
		printf("\n enter release date: ");
		scanf("%s", m[i].release );
		printf("\n enter rating: ");
		scanf("%d", &m[i].rating );
	}
}
void search(struct movie *m){
	char search[100];
	printf("\n enter genre of book u want to search");
	for(int i = 0; i<100; i++){
		if(strcmp(search, m[i].genre) == 0 ){
			printf("movies: %s", m[i].title );
			
		}
	}
}

void display(struct movie *m){
	printf("\n movies: ");
	for(int i =0; i<100;i++){
		printf("\n movie%d", i+1);
		printf("\n title: %s",m[i].title );
		printf("\n genre: %s", m[i].genre);
		printf("\n director: %s", m[i].director );
		printf("\n release date: %s",m[i].release );
		printf("\n rating:%d", m[i].rating );
		
	}
}

int main(){
	int choice;
	
	do{
		printf("\nmovie system: ");
		printf("\n 1. add a new movie");
		printf("\n 2. search a movie by genre");
		printf("\n 3. display movies");
		printf("\n 4. exit\n enter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				add(m);
				break;
			case 2:
				search(m);
				break;
			case 3:
				display(m);
				break;
			case 4:
				printf("\n exiting....");
				break;
			default:
				printf("invalid input");
				break;
				
		}
	}while(choice!=4);
}
