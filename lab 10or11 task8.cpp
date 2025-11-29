#include<stdio.h>
const double metertokm=0.001;
 double covertmtokm(double m){
 	int count =0;
 	count++;
 	printf("\nfunction has been called %d times ", count);
 	return m*metertokm;
 }
 
 int main(){
 	double m1=500;
 	double m2=1200;
 	
 	double km1=covertmtokm(m1);
 	double km2=covertmtokm(m2);
 	printf("\n %.2f in km:%.3f ", m1,km1);
 	printf("\n %.2f in km:%.3f ", m2,km2);
 }
