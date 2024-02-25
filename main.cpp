//
// made by fixedOtter on 02.24.2024
//
#include <iostream>
#include <vector>

class AverageScore {
  private:
    std::vector<double> testScores;
  public:
    void setTestScores(std::vector<double> scores) {
      testScores = scores;
    }
    std::vector<double> getTestScores() {
      return testScores;
    }
    double getAverageScore() {
      double totalScore = 0;
      for (int i = 0; i < testScores.size(); i++) {
        totalScore += testScores.at(i);
      }
      double avgScore = totalScore / testScores.size();
      return avgScore;
    }
};

int main () {
  bool quit = 0;
  AverageScore userGrades;
  std::cout << "Welcome, please enter your first test score:\n";
  while (true) {
    std::vector<double> gradeList = userGrades.getTestScores();
    double userInput = 0;
    std::cin >> userInput;
      if (!userInput) {
        std::cout << "Exiting now..\n";
        std::cout << "Your average score is: " << userGrades.getAverageScore() << "\n";
        break;
      } else {
        gradeList.push_back(userInput);
        userGrades.setTestScores(gradeList);
      }
    std::cout << "Please enter your next test score. Enter '0' to quit and see scores.\n";
  }


  return 0;
}