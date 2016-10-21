#includ <stdio.h>

int fib(int n) {
  if (n <= 1)
    return n;
  else return fib(n - 1) + fib(n - 2);
}

int main() {
  const int = 3;
  printf("fib(%d) = %d\n", n, fib(n));
  return 0;
}
