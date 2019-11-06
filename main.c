#include <stdio.h>

float math_func(float x)
{
	return .5 * x;
}

int main()
{
	float var = 0;
	for(float i; i < 10; i++){
		
		var = math_func(i);	
			
	}
	printf ("var output %f\n", var); 

	return 0;
}
