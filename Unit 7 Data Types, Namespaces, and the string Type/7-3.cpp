// Instructions

// The Programming Example: Pig Latin Strings converts a 
// string into the pig Latin form, but it processes only 
// one word. Rewrite the program so that it can be used 
// to process a text of an unspecified length. If a word 
// ends with a punctuation mark, in the pig Latin form, 
// put the punctuation at the end of the string. For example,
//  the pig Latin form of Hello! is ello-Hay!. Assume that
//   the text contains the following punctuation marks:

//     , (comma),
//     . (period),
//     ? (question mark),
//     ; (semicolon),
//     : (colon).

// Store the output in Ch7_Ex3Out.txt.

#include <iostream>
#include <string>
#include <fstream>
#include <regex>

using namespace std;

int main() {

    //fstream file;
    string word, p;

    ifstream inFile;
    ofstream outFile;

    inFile.open("Ch7_Ex3Data.txt");
    outFile.open("Ch7_Ex3Out.txt");

    regex regPunc("[\\w]+\\s*[,.?;:]");
    smatch matPunc;
    regex regCons("\\b[bcdfghjklmnpqrstvzBCDFGHJKLMMNPQRSTVWZ]{1,10}");
    smatch matCons;

    while(inFile >> word)

    {
      if(regex_search(word, matPunc, regPunc)) 
      {
        p = word[word.length() - 1];
        word = word.substr(0, word.length() - 1);
      } 

      if(regex_search(word, matCons, regCons))
      {
         int s = matCons.length();
         word = word.substr(s, word.length()) 
         + "-" + word.substr(0, s) + "ay";
      }
      else
      { 
        if(word[0] == 'w' || word[0] == 'W')
        {
          word = word.substr(1, word.length() - 1) + "-way";
        }
        else {
          word = word + "-way"; 
        }
      }

      outFile << word + p + " "; 
      p = "";
    } 

    inFile.close();
    outFile.close();

  return 0;
}


//  Text for check 

// Today we live in an era where information is processed, almost, with the speed of light.
// Through computers, the technological revolution is drastically changing the way we live and
// communicate with each other. Terms such as Internet, which was unfamiliar even a few years ago,
// are very common today. With the help of computers you can send letters to and receive letters
// from loved ones within seconds. You no longer need to send an application by mail to apply for
// a job; in many cases you can simply submit your job application via the Internet. You can watch
// how stocks perform in real time, and instantly buy and sell. Kids in elementary school regularly
// surf the Internet and use computers to design their classroom projects. Students no longer
// type their papers on typewriters or write them by hand. Instead, they use powerful word
// processing software to complete term papers. Many people maintain and balance their checkbooks
// on computers.

//      These are some of the ways computers have greatly impacted our daily lives. This is all
// made possible because of the availability of different software, which are computer programs.
// For example, word processing software are programs that enable you to write term papers, create
// impressive looking resumes, and even write a book. Even this book was created with the help of
// a powerful word processor. Without software a computer is of no use. However, software are
// developed with the help of programming languages. The programming language C++, especially,
// is very well suited for developing software to accomplish a specific task.

//      Until the early 1990s, before beginning to teach a programming language course,
// instructors used to spend the first few weeks just teaching their students how to use
// computers. Today, by the time students graduate from high school, they know very well how
// to work with a computer. This book is not concerned with explaining how to use computers.
// Rather, this book teaches you how to write programs in a language called C++. It is useful,
// however, to at least understand some of the basic terminology and different components of a
// computer before you begin programming. This chapter briefly describes the main components of
// a computer system, the history and evolution of computer languages, and some fundamental ideas
// about how to solve problems with computer programming.
