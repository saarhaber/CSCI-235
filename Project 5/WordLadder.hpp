//Saar Haber
//Project 5
//April 30th

#include <string>
#include <vector>
#include <queue>

#ifndef WORD_LADDER_
#define WORD_LADDER_

class WordLadder
{
public:
  WordLadder();
  void readLexicon(std::string input_file);
  std::vector<std::string> findShortestLadder(std::string start_word, std::string end_word);
  std::vector<std::string> Lex;
  bool isInLex(std::string word);
  std::vector<std::string> visited;
  bool isVisited(std::string word);
  void addVisit(std::string word);

private:
  std::vector<std::string> ladder;
};

#endif
