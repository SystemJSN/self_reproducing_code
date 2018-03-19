/*Yansen Sheng*/
#include <stdio.h>
int main() {
  char *h="Hello";
  char *g="Goodbye";
  char *c[]={
  "/*Yansen Sheng*/%c",
  "#include <stdio.h>%c",
  "int main() {%c",
  "  char *h=%cHello%c;%c",
  "  char *g=%cGoodbye%c;%c",
  "  char *c[]={%c",
  "  %c%s%c%c%c",
  "  };%c",
  "  puts(h);%c",
  "  for(int i=0;i<6;i++)%c",
  "    if(i==3||i==4)%c",
  "      printf(c[i],34,34,10);%c",
  "    else%c",
  "      printf(c[i],10);%c",
  "  for(i=0;i<21;i++)%c",
  "    printf(c[6],34,c[i],34,44,10);%c",
  "  for(i=7;i<21;i++)%c",
  "    printf(c[i],10);%c",
  "  puts(g);%c",
  "  return 0;%c",
  "}%c",
  };
  puts(h);
  for(int i=0;i<6;i++)
    if(i==3||i==4)
      printf(c[i],34,34,10);
    else
      printf(c[i],10);
  for(i=0;i<21;i++)
    printf(c[6],34,c[i],34,44,10);
  for(i=7;i<21;i++)
    printf(c[i],10);
  puts(g);
  return 0;
}
