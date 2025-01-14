int main() {
  int i = 1;
  int *ptr = &i; 
  int j = *ptr; //store the value of i in a temp variable before changing
  j = 10;
  *ptr = j;
  printf("%d", i);
  return 0; 
}