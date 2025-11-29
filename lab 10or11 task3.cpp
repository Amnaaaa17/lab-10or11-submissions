#include<stdio.h>
struct flight{
	int flightnum;
	char departure[100];
	char destination[100];
	char date[20];
	int available;
};

void bookseats(struct flight *f){
	if(f->available>0){
		printf("\n seat booked successfully");
		f->available--;
	}else{
		printf("\n no seats available");
		
	}
}
void displayflight(struct flight *f){
	printf("\n flight details:");
	printf("\n flight number: %d", f->flightnum);
	printf("\n departure city: %s", f->departure );
	printf("\n destination city: %s", f->destination );
	printf("\n date: %s", f->date );
	printf("\n available seats: %d", f->available );
	
}

int main(){
	struct flight f1;
	
	printf("\n input details: ");
	printf("\n enter flight number: ");
	scanf("%d", &f1.flightnum );
	printf("\n enter departure city: ");
	scanf("%s", f1.departure );
	printf("\n enter destination city: ");
	scanf("%s", f1.destination );
	printf("\n enter date: ");
	scanf("%s", f1.date );
	printf("\n enter available seats: ");
	scanf("%d", &f1.available );
	
	displayflight(&f1);
	bookseats(&f1);
	displayflight(&f1);
	return 0;
}

