// C has the following data types along with their format specifier:
// Int ("%d"): 32 Bit integer
// Long (%ld): 32 bit integer (same as Int for modern systems)
// Long Long ("%lld"): 64 bit integer
// Char ("%c"): Character type
// Float ("%f"): 32 bit real value
// Double ("%lf"): 64 bit real value

#include<stdio.h>
int main(void){
	int a;
	long b;
	long long c;
	char d;
	float e;
	double f;

	a = 3;
	b = 450;
	c = 12345678912345;
	d = 'a';
	e = 234.56;
	f = 12345.67897;
	
	printf("%d\n", a);
	printf("%ld\n", b);
	printf("%lld\n", c);
	printf("%c\n", d);
	printf("%f\n", e);
	printf("%lf\n", f);
	
	return 0; 
}