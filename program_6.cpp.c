#include <stdio.h>

float calcSI(float p, float r, float t) {
     return (p * r * t) / 100;
}

int main(void) {
	char name[ ] = "Priyanshi";
    long long roll = 268100547;
    float p, r, t;
     
    scanf("%f %f %f", &p, &r, &t);
 
    printf("Name: %s\nRoll: %lld\n", name, roll);
    printf("SI: %.2f\n", calcSI(p, r, t));
 
	return 0;
}
