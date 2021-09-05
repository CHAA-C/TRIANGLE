#include<stdio.h>
#include<math.h>
int main()
{
	float A, B, C, area;
	printf("Enter your three numbers to find a triangle area EX: 3 4 5: ");
	scanf("%f %f %f", &A, &B, &C);
	
	if( A == B && A == C && B == C && A > 0 && B > 0 && C > 0 )
	{
		area = sqrt(3)/4*(A * A);
		printf("\n%.2f",area);
	}
	else if ( A > 0 && B > 0 && C > 0 )
	{
		float s = (A + B + C) / 2;
		area = sqrt((s * (s - A)) * (s - B) * (s - C));
			if (area > 0) {
			printf("\n%.2f", area);
			}
			else
			printf("\n0");
	}
	else 
		printf("\n0");
	return 0;
}
