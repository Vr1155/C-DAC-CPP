// this file only contains the usage:

// notice how we are using <> for including this header file,
// this is because we are using -I when compiling the main function.
#include <abstraction.h>

int main(){
	ABC a, b=10;
	a.fun();
	a.funOne();
	
	b.fun();
	b.funOne();
}
