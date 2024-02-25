//
// made by fixedOtter on 02.24.2024
//
#include <iostream>
#include <vector>

class Average {
  private:
    std::vector<double> scores;
  public:
    void setScores(std::vector<double> scoresIn) {
      scores = scoresIn;
    }
    std::vector<double> getScores() {
      return scores;
    }
    void pushScores(double newScore) {
      scores.push_back(newScore);
    }
    double getAverage() {
      double totalScore = 0;
      for (int i = 0; i < scores.size(); i++) {
        totalScore += scores.at(i);
      }
      double avgScore = totalScore / scores.size();
      return avgScore;
    }
};