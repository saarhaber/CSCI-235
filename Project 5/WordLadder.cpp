//Saar Haber
//Project 5
//April 30th

#include "WordLadder.hpp"
#include <string>
#include <fstream>
#include <stdlib.h> //do i need this?
#include <iostream>
#include <vector>
#include <queue>


//----------PUBLIC FUNCTIONS-------------------//

WordLadder::WordLadder() {
  readLexicon("4LetterWordsReduced.dat");
}

/**
@post reads lexicon words from the input file and stores them for
 later use
 **/
void WordLadder::readLexicon(std::string input_file) {
  std::fstream inFile;
  inFile.open(input_file.c_str());

  if(inFile.fail()){
    std::cout << "ERROR" << std::endl;
    exit(1);
  }

  std::string entry;
  while(getline(inFile, entry)) {
    Lex.push_back(entry);
  }

  inFile.close();
};
/**
@param start_word is the first word in the ladder
@param end_word is the last word in the ladder
@return a vector containing words s.t. the first word is start_word,
 the last word is end_word, and all words in between differ by
 only one character from the preceding and following words, in
 the shortest such transformation found in the current lexicon.
 If no transformation is found between start_word and end_word,
 returns an empty vector.
 **/
std::vector<std::string> WordLadder::findShortestLadder(std::string start_word, std::string end_word) {

    if (!isInLex(start_word) || !isInLex(end_word)) {
      return ladder;
    }


     //partial ladders where every ladder is a vector of strings
     std::queue<std::vector<std::string>> partialLaddders;

     //creating the first ladder with only the start word
     std::vector<std::string> firstLadder;
     firstLadder.push_back(start_word);
     //ladder.push_back(start_word);
     //adding the first ladder to the queue
     partialLaddders.push(firstLadder);
     addVisit(start_word);

     std::string checkWord = end_word;
     char letter;
     while (!(partialLaddders.empty())) {

       ladder = partialLaddders.front();
       partialLaddders.pop(); //dequeueing
       std::string word = ladder[ladder.size()-1];

         if (word == end_word) {
           return ladder;
         }


       for (int i=0; i<4; i++) {
         checkWord = word;
         for (int j=0; j<26; j++) {
           letter = char(j + 97);
           checkWord = checkWord.substr(0, i) + letter + checkWord.substr(i+1);
           if (isInLex(checkWord)  && !isVisited(checkWord)) {
             // std::cout << checkWord <<std::endl;
             std::vector<std::string> newLadder = ladder;
             newLadder.push_back(checkWord);
             partialLaddders.push(newLadder);
           } // end if
           addVisit(checkWord);
         } //end inner for
       } //end outer for
     } // end while
    // std::cout << "no word ladder exists" << std::endl;
     ladder.clear();
     return ladder;
};

bool WordLadder::isInLex(std::string word) {
  for (int i=0; i<Lex.size(); i++) {
    if (Lex[i] == word) {
      return true;
    }
  }
  return false;
};

bool WordLadder::isVisited(std::string word){
  for (int i=0; i<visited.size(); i++) {
    if (visited[i] == word) {
      return true;
    }
  }
  return false;
};


void WordLadder::addVisit(std::string word) {
  visited.push_back(word);
};
