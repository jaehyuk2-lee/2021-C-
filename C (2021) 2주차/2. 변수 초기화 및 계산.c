//2021-09?14
#include <stdio.h>
int main() {
	int mid_ex, final_ex, sum, avg1;
	float avg2;
	
	mid_ex = 95;
	final_ex = 84;
	sum = mid_ex + final_ex;
	avg1 = sum / 2;
	avg2 = sum / 2.0;

	printf("중간고사:%d, 기말고사:%d\n", mid_ex, final_ex);
	printf("sum:%d\n", sum);
	printf("avg1:%d\n", avg1);
	printf("avg2:%f", avg2);	

	return 0;
}