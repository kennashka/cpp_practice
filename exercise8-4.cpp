#include <iostream>

#include <iomanip>

#include <fstream>

// use namespace

using namespace std;

//

void dataInfo(ifstream& inputFile, int list[], int file_size);

void print(int list[], int file_size);

// main funtion

int main()

{

// declare the varivale student_scores

int student_scores[8] = {0};

// file processing

ifstream infile;

// open the file named as input.txt

infile.open("Ch8_Ex4Data.txt");

   if (!infile)

   {

       cout << "File can not be open"

           << endl;

       return 1;

   }

// create function for data information in the file

   dataInfo(infile, student_scores, 8);

   print(student_scores, 8);

   cout << endl;

   // Close the file

   infile.close();

   return 0;

}

void dataInfo(ifstream& inputFile, int list[], int file_size)

{

// declare the required variables

   int score;

   int file_index;

   inputFile >> score;

// check conditions for file size and file index

   while (inputFile)

   {

       file_index = score / 25;

       if (file_index == file_size)

           file_index--;

       if (file_index < file_size)

           list[file_index]++;

       inputFile >> score;

   }

}

void print(int list[], int size)

{

// include the required variables

int score_range;

int lowRangeScore = 0;

int upperRangeScore = 24;

// Display message

cout << " Range of Students :" << endl;

// start loop to count the students in the given range

for (score_range = 0; score_range < size; score_range++)

{

cout << setw(3) << lowRangeScore << " - " << setw(3)

<< upperRangeScore << setw(15)

<< list[score_range] << endl;

lowRangeScore = upperRangeScore + 1;

upperRangeScore = upperRangeScore + 25;

if (score_range == size - 2)

upperRangeScore++;

}

cout << endl;

}
