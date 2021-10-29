// To generate unique hash value we can use asci values of different different characters. Since the asci value for each 
// character is unique, so their combination will also give an unique hash value.
#include <stdio.h>

#define max 200

long long int hashing(char a[max]) {

  long long int value = 0;
  for(int i = 0; i<max && a[i]!='\0'; i++) {
    value+=(i+1)*a[i];
  }
  return value;
}

int main() {

  char a[max] = {0};

  scanf("%[^\n]", a);

  printf("%lld\n", hashing(a));

  return 0;
}
