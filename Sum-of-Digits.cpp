// presonal solutions

int digital_root(int n) {

  int num , sol = 0;
  
    // case base 
  if (n <= 9) {
    return n;
  }

  while (n != 0) {
    sol = sol + n % 10;
    n = n / 10;
  }
  return digital_root(sol);
}


// optimal & minimal solution from @DarkD1
int digital_root(int n)
{
  return (n-1) % 9 +1;
}
