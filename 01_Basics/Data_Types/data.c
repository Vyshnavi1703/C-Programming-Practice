#include <stdio.h>
   
   int main() {
   int a;
   unsigned int b;
   short int c;
   unsigned short int d;
   long int e;
   unsigned long int f;
   float g;
   double h;
   long double i;
   signed char j;
   unsigned char k;
  scanf("%d %u %hd %hu %ld %lu %f %lf %Lf %c %c",&a, &b, &c, &    d, &e, &f, &g, &h, &i, &j, &k);
  //scanf("%d",&a);
          printf("int: %d\n",a);
          //scanf("%u",&b);
          printf("unsigned int: %u\n",b);
          //scanf("%hd",&c);
          printf("short int: %hd\n",c);
          //scanf("%hu",&d);
          printf("unsigned short int: %hu\n",d);
          //scanf("%ld",&e);
          printf("long int: %ld\n",e);
          //scanf("%lu",&f);
          printf("unsigned long int: %lu\n",f);
          //scanf("%f",&g);
          printf("float: %f\n",g);
          //scanf("%lf",&h);
          printf("double: %lf\n",h);
          //scanf("%Lf",&i);
          printf("long double: %LF\n",i);
          //scanf(%c" ,&j);
          printf("signed character: %c\n",j);
          //scanf("%c", &k);
          printf("unsigned character: %c\n",k);
          return 0;
}

















