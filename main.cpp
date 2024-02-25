//
// made by fixedOtter on 02.24.2024
//
#include <iostream>
#include <vector>
#include "averageClass.cpp"

class Average;

int main () {
  bool quit = 0;
  Average userScores;
  std::cout << "Welcome, please enter your first test score:\n";
  while (true) {
    double userInput = 0;
    std::cin >> userInput;
      if (!userInput) {
        std::cout << "Exiting now..\n";
        std::cout << "Your average score is: " << userScores.getAverage() << "\n";
        break;
      } else {
        userScores.pushScores(userInput);
      }
    std::cout << "Please enter your next test score. Enter '0' to quit and see scores.\n";
  }


  return 0;
}