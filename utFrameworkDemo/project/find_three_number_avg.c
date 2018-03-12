#include <stdio.h>
#include "find_three_number_avg.h"

int find_three_number_average(int a, int b, int c) {

	return ((find_two_number_sum(a,b) + c)/3);
	//return ((find_two_number_sum(a,b) + c)/2);
}
