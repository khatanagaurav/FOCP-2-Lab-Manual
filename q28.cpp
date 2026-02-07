#include <iostream>

int main() {
  int nums[5];
  int evenSum = 0;
  int oddSum = 0;

  for (int i = 0; i < 5; ++i) {
    std::cin >> nums[i];
  }

  for (int i = 0; i < 5; ++i) {
    if (nums[i] % 2 == 0) {
      evenSum += nums[i];
    } else {
      oddSum += nums[i];
    }
  }

  std::cout << evenSum << std::endl;
  std::cout << oddSum << std::endl;

  return 0;
}
