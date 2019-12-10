#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;

const int MAX_ANSWERS = 20;
const int MAX_STUDENTS = 200;
const int MAX_SCORE = 40;

void readDataFromFile(string fileName, string *correctAnswers, string *stud_IDs, string *stud_Answers);
void compute_Stud_Scores(string correctAnswers, string* stud_Answers, double *stud_scores);
void compute_Stud_Grades(double *stud_scores, char *stud_grades);
void displayOutput(string *stud_IDS, string *stud_Answers, double *stud_scores, char *stud_grades);

int studentsCounter = 0;

int main()
{

   string fileName = "Ch8_Ex6Data.txt";
   string correctAnswers;
   string *stud_IDS = new string[MAX_STUDENTS];
   string *stud_Answers = new string[MAX_STUDENTS];
   double *stud_Scores = new double[MAX_STUDENTS];
   char *stud_Grades = new char[MAX_STUDENTS];



   readDataFromFile(fileName, &correctAnswers, stud_IDS, stud_Answers);

   compute_Stud_Scores(correctAnswers, stud_Answers, stud_Scores);

   compute_Stud_Grades(stud_Scores, stud_Grades);

   displayOutput(stud_IDS, stud_Answers, stud_Scores, stud_Grades);

   system("pause"); // used in visual studio
   return 0;
} 


void readDataFromFile(string fileName, string *correctAnswers, string *stud_IDs, string *stud_Answers)
{
   ifstream inFile;
   string line;
   int position;
   int index;

   inFile.open(fileName);


   if (!inFile)
   {

       cout << "Unable to open the file \"" << fileName << "\""
           << endl;

  
   } 

   getline(inFile, *correctAnswers);

   studentsCounter = 0;


   getline(inFile, line);

   index = 0;


   while (inFile)
   {
       position = line.find_first_of(" ");


       stud_IDs[index] = line.substr(0, position);


       stud_Answers[index] = line.substr(position + 1);

       index++;

       getline(inFile, line);
   }


   inFile.close();

   studentsCounter = index;
}


void compute_Stud_Scores(string correctAnswers, string* stud_Answers, double *stud_scores)
{
   string student_Ans;
   double score_of_each_stud;

   for (int i = 0; i < studentsCounter; i++)
   {
 
       student_Ans = stud_Answers[i];


       score_of_each_stud = 0;


       for (int j = 0; j < student_Ans.length(); j++)
       {

           
           if (student_Ans.at(j) == ' ')
           {

               
               score_of_each_stud = score_of_each_stud + 0;
           }

 
           else if (student_Ans.at(j) == correctAnswers.at(j))
           {

               score_of_each_stud = score_of_each_stud + 2;
           }

           else
           {
               score_of_each_stud = score_of_each_stud - 1;
           }
       }


       stud_scores[i] = score_of_each_stud;
   }
}



void compute_Stud_Grades(double *stud_scores, char *stud_Grades)
{

    double stud_percent;


   for (int i = 0; i < studentsCounter; i++)
   {

       stud_percent = (stud_scores[i] / MAX_SCORE) * 100;


       if ((stud_percent >= 90) && (stud_percent <= 100))
       {
           stud_Grades[i] = 'A';
       }

       
       else if ((stud_percent >= 80) && (stud_percent <= 89.99))
       {
           stud_Grades[i] = 'B';
       }


       else if ((stud_percent >= 70) && (stud_percent <= 79.99))
       {
           stud_Grades[i] = 'C';
       }


       else if ((stud_percent >= 60) && (stud_percent <= 69.99))
       {
           stud_Grades[i] = 'D';
       }


       else
       {
           stud_Grades[i] = 'F';
       }
   }
}


void displayOutput(string *stud_IDS, string *stud_Answers, double *stud_scores, char *stud_grades)
{



   for (int i = 0; i < studentsCounter; i++)
   {
       cout << stud_IDS[i] << "\t"
           << stud_Answers[i] << "\t"
           << stud_scores[i] << "\t"
           << stud_grades[i] << endl;
   }
}
