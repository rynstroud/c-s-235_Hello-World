#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    
    if (argc < 3)
    {
       cerr << "Please provide the name of input and output files, thanks\n";
       return 1;
    }
    
    ifstream in(argv[1]);
    if (!in) {
        cerr << "Failure to open input file: " << argv[1] << endl;
        return 2;
    }
    
    ofstream out(argv[2]);
    if (!out) {
        in.close();
        cerr << "Failure to open output file: " << argv[1] << endl;
        return 3;
    }
    
    //Reading number of exams and students from file
    int numStudents = 0;
    int numExams = 0;
    in >> numStudents >> numExams;
    in.ignore();
    
    //Reading student names and exam scores
    string line;
    getline(in, line);
    size_t p = 0;
    while (!isdigit(line[p])) ++p;
    /*for (int i = 0; i < numStudents; i++) {
        while ()
    }*/
    
    int rows = 0;
    int cols = 0;
    
    //creating the dynamic 1D array
    int** examScores = new int*[rows];
    for (int i = 0; i < rows; i++) {
        examScores[i] = new int[cols];
    }
    
    //double* averages = new double[num - exams] //LOL WHAT DOES THIS MEAN
    
    //Freeing memory from 2D array
    for (int i = 0; i < rows; ++i)
    {
        delete [] examScores[i];
    }
    delete [] examScores;
    
    return 0;
}
