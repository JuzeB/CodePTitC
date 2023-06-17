#include <stdio.h>
#include <stdlib.h> 

int sum_of_digits(int num) { 
	int sum = 0; while (num > 0) { 
	sum += num % 10; num /= 10; 
	} 
return sum; 
} 
int is_prime(int num) { 
	if(num <= 1) { 
	return 0; 
} 
	for(int i=2; i*i<=num; i++) { 
		if(num % i == 0) { 
		return 0; 
		} 
	} 
return 1; 
} 
int is_smith_number(int num) { 
	if(is_prime(num)) { 
	return 0; 
} 
int digit_sum = sum_of_digits(num);
int factor_sum = 0; 
for(int i=2; i<num; i++) {
	while(num % i == 0) {
   		factor_sum += sum_of_digits(i); 
   		num /= i; 
   		} 
   	} 
if(num > 1) { 
factor_sum += sum_of_digits(num); 
}
return digit_sum == factor_sum; 
} 
	int main() {
	int num;
	scanf("%d", &num); 
	if(num >0) { 
		if(is_smith_number(num)) {
	  		printf("YES\n");
	   	} 
		else { 
		printf("NO\n");
		} 
	} 
return 0; 
}
