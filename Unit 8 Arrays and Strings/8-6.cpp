// Instructions

// The history teacher at your school needs help in grading a 
// True/False test. The students’ IDs and test answers are stored 
// in a file. The first entry in the file contains answers to 
// the test in the form:
// TFFTFFTTTTFFTFTFTFTT
// Every other entry in the file is the student ID, followed 
// by a blank, followed by the student’s responses. For example, 
// the entry:
// ABC54301 TFTFTFTT TFTFTFFTTFT
// indicates that the student ID is ABC54301 and the answer to
//  question 1 is True, the answer to question 2 is False, and 
//  so on. This student did not answer question 9. The exam has 
//  20 questions, and the class has more than 150 students. 
//  Each correct answer is awarded two points, each wrong 
//  answer gets one point deducted, and no answer gets zero points.

// Write a program that processes the test data. The output 
// should be the student’s ID, followed by the answers, followed
//  by the test score, followed by the test grade. Assume the
//   following grade scale:
// 90%–100%, A; 80%–89.99%, B; 70%–79.99%, C; 60%–69.99%, D; 
// and 0%–59.99%, F

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

    char stuGrade;
    int correctAnswers(string, string);
    char studentGrade(int score);
    
    int main()
{
    ifstream inFile;

    inFile.open("Ch8_Ex6Data.txt");

    double score;
    string key;
    string studentID;
    string stuAnswers;

    getline(inFile, key);

    while (getline(inFile, studentID, ' ')) {
     
        getline(inFile, stuAnswers);

        score = correctAnswers(key, stuAnswers);

        stuGrade = studentGrade(score);

        cout << studentID << " " << stuAnswers << " " 
             << score << " " << stuGrade << endl;
    }
    return 0;
}

int correctAnswers(string answerKey, string studentAnswers)
{
    int score = 0;
    int diff = answerKey. length() - studentAnswers.length();

    for (int i = 0; i < 20; i++)  {

        if (answerKey[i] == studentAnswers[i])
        {
            score += 2;
        }                                        
        else if (studentAnswers[i] == ' ')
        {
            score += 0;
        }
        else
        {
            score -= 1;
        }
    }
    return score - diff;
}

char studentGrade(int x)
{
    double score = 0;

    char grade = ' ';
    
    score = x / 40.0 * 100;

    if (score >= 90)
        grade = 'A';
    else if (score < 90 && score > 79)
        grade = 'B';
    else if (score <= 79 && score > 69)
        grade = 'C';
    else if (score <= 69 && score > 60)
        grade = 'D';
    else if (score <= 59)
        grade = 'F';

    return grade;
}
