int main() {
  int i = 1;
  int *ptr = &i; 
  *ptr = 10; 
  printf("%d", i);
  return 0; 
}