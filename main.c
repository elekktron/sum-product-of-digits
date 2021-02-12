//
// (C) Suryansh Singh Shishodia
// Author: Suryansh Singh Shishodia - scribesme at gmail dot com
// Description: The sum of addition and multiplication of the digits of a number in C language.
// URL: https://github.com/elekktron/sum-add-multiply
// Licensing: MIT License
//

#include<stdio.h>
#include<math.h>
void main(){
	int l=0,m=1,n=1,k,x,y,z=1;
	y=(pow((10),n));
	printf("Enter the number: ");
	scanf("%d",&x);
	//Preserving the actual entered number
	k=x;
	//Calculating number of digits in a number
	while(k!=0){
		k=k/y;
		n++;
	}
	n=n-1;
	m=n-1;
	//Multiplying and adding the numbers
	if(x==0) {
		l=0;
		z=0;
	}
	else{
		while(m>=0){
		k=(x)/(pow((10),m));
		x = x-(k*(pow((10),m)));
		z=z*k;
		l=l+k;
		m--;
		}
	}
	printf("\nThe sum is %d.\nThe product is %d.\n",l,z);
}

