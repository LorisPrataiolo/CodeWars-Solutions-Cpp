#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
   // sort the vector
  std::sort(numbers.begin(), numbers.end());
  
  // add the first two numbers
  long int sol;
  sol = numbers[0] + numbers[1];
  
    return sol;
}
