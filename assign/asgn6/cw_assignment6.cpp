/*****************************
Author : Christopher Wampnar
Lab 6: #1, page 675
Purpose:  This program populates an array of test scores, and 
prints both the array and the average score.
*************************************/

#include <iostream>
#include <iomanip>
using namespace std;

void sortMoviesSeenByStudent(int *_moviesSeenByStudent, int _numStudents);
double getAverage(int *, int);
void printArray(int *, int);
int getMax(int *_moviesSeenByStudent, int _numStudents);

int main()
{
    int numStudents;
    int *moviesSeenByStudent;
    double averageMovies;

//Get number of students
    cout << "How many students were surveyed?" << endl;
    cin >> numStudents;
    
    cout << endl;
//Validates numStudnents input
    while ( cin.fail() || numStudents < 0 )
        {
            if ( cin.fail() )
            {
                cout << "Input must be numberic !\n";
                cin.clear();
                cin.ignore(100, '\n');
            }
            else 
                cout << "Number of students cannot be negative. \n";

            cout << "Enter number of students surveyed " << endl;
            cin >> numStudents;
        }
    cout << "number of students surveyed = " << numStudents << endl;
    cout << endl;

    moviesSeenByStudent = new int [numStudents];

//Get number of movies seen for each student
    cout << "Enter number of movies each student saw." << endl;
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Student " << (i + 1) << ": ";
        cin >> moviesSeenByStudent[i];
        while ( cin.fail() || moviesSeenByStudent[i] < 0 )
            {
                if ( cin.fail() )
                {
                    cout << "Input must be numberic !\n";
                    cin.clear();
                    cin.ignore(100, '\n');
                }
                else 
                    cout << "Number of movies cannot be negative. \n";

            cout << "Enter number of movies seen by student " << endl;
            cin >> moviesSeenByStudent[i];
        }
    }       
    cout << endl;
    cout << endl;

    cout << "----------Before Sort---------" << endl;

    printArray(moviesSeenByStudent, numStudents);

    /*cout<< "Number of movies seen by students" << endl;
    for (int i = 0; i < numStudents; i++)
        cout << "Student" << (i + 1) << " saw " << moviesSeenByStudent[i] << " movies." << endl;
        cout << endl;*/

    cout << "-----------After Sort-----------" << endl;

//Sort the Data
    sortMoviesSeenByStudent(moviesSeenByStudent, numStudents);
    
    printArray(moviesSeenByStudent, numStudents);

        cout << endl;
        cout << endl;

    averageMovies = getAverage(moviesSeenByStudent, numStudents);
    cout << "The average number of movies seen is " << averageMovies << endl; 

//Print out max movies seen
    cout << "The Maximum Number is " << getMax(moviesSeenByStudent, numStudents);

//clear moviesSeenByStudents from heap
    delete [] moviesSeenByStudent;
    moviesSeenByStudent = 0;

    return 0;

}

void printArray(int *_moviesSeenByStudent, int _numStudents)
{

    for (int i = 0; i < _numStudents; i++)
        cout << _moviesSeenByStudent[i] << " - - - - - ";
        cout << endl;

}

double getAverage(int *_moviesSeenByStudent, int _numStudent)
{
    double total = 0;
    for(int i = 0; i < _numStudent; i++)
        total += _moviesSeenByStudent[i];

    return total/_numStudent;
}

void sortMoviesSeenByStudent(int *_moviesSeenByStudent, int _numStudents)
{
    for (int pass = 0; pass < _numStudents; pass++)
        for (int i = 0; i < (_numStudents - 1 ); i++)
            if( _moviesSeenByStudent[i] > _moviesSeenByStudent[i + 1])
                swap(_moviesSeenByStudent[i], _moviesSeenByStudent[i+1]);
}

int getMax(int *_moviesSeenByStudent, int _numStudents)
{
    int maxMovies = _moviesSeenByStudent[(_numStudents - 1)];

    return maxMovies;
}