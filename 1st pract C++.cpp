Ex1
№25

#include <iostream>
#include <string>
#include <math.h>

int main()
{
 
 int a=3;
 double b=0.523;
 double result;
 
 result= pow ((1.56*sqrt (sin(b)))/(0.8942*log(a)),1/4.0);
 
 std::cout << result;
 
}

1.02926

Ex2
№5
// Example program
#include <iostream>
#include <string>
#include <math.h>

int main()
{
 
 int a=3;
 double b=0.151;
 double result;
 
 result = ( 1 - pow(cos((b/a) * M_PI ),2)) / (0.5*exp(b)+0.312*exp(a)) ;
 
 std::cout << result;
 
}

0.00362087 