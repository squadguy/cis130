/*
Name:           Christopher Wampnar
Assignment #3:  Page 401, #8
Description:    The program takes five judges scores, validates the input, and determines the
                average after dropping the lowest and highest score.  It then displays a small
		chart which displays each judge's score as well as the high, low and average
		score.
Notes:          Orignially compiled using g++.
	        Written using Vim.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void getJudgeData(string, double&);
double getAverage(double, double, double, double, double, double, double);
double getHighest(double, double, double, double, double);
double getLowest(double, double, double, double, double);

int main()
{
	double score1, score2, score3, score4, score5;
	int width = 12;//Sets width for data graph columns
	double high_score,
	       low_score,
	       average_score;

	//Begin to gather scores from user
	getJudgeData("Judge1", score1);
	cout << endl;

	getJudgeData("Judge2", score2);
	cout << endl;

	getJudgeData("Judge3", score3);
	cout << endl;

	getJudgeData("Judge4", score4);
	cout << endl;

	getJudgeData("Judge5", score5);
	cout << endl;

	//Get totals set variables
	low_score = getLowest(score1, score2, score3, score4, score5);
	high_score = getHighest(score1, score2, score3, score4, score5);
	average_score = getAverage(score1, score2, score3, score4, score5, low_score, high_score);

	//Display data entry - Data entered graph

	//Top row
	cout << setw(width) << "Score1";
	cout << setw(width) << "Score2";
	cout << setw(width) << "Score3";
	cout << setw(width) << "Score4";
	cout << setw(width) << "Score5";
	cout << endl;
	//Horizontal dividing line
	cout <<"-------------------------------------------------------------------------" << endl;
	//Score row
	cout << setw(width) << score1;
	cout << setw(width) << score2;
	cout << setw(width) << score3;
	cout << setw(width) << score4;
	cout << setw(width) << score5;
	cout << endl;
	cout << endl;
	
	cout << fixed << setprecision(1);
	//Display Average Score
	cout << "Average Score: " << average_score << endl;
	//Display highest score
	cout << "Highest Score: " << high_score << endl;
	//Display lowest score
	cout << "Lowest Score: " <<  low_score << endl;

	return 0;
}

	//Gets judge score from user and validates data
	void getJudgeData(string judge, double &score)
	{
		cout << "Entering data for " << judge << endl; 
		do 
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(100, '\n');
			}
			cout << "Enter a number between 0 - 10"<< endl;
			cin >> score;
		} while (cin.fail() ||score < 0 || score > 10);
	}	

	//Gets Highest Score
	double getHighest(double score1, double score2, double score3, double score4, double score5)
	{
		double high_score;
		if ((score1>score2) && (score1>score3) && (score1>score4) && (score1>score5))
			high_score=score1;
		else if ((score2 > score3) && (score2 > score4) && (score2 > score5))
			high_score=score2;
		else if ((score3 > score4) && (score3 > score5))
			high_score=score3;
		else if (score4 > score5)
			high_score=score4;
		else
			high_score=score5;
		
		return high_score;
	}
	//Gets Lowest Score 
	double getLowest(double score1, double score2, double score3, double score4, double score5)
	{
		double low_score;
		if((score1<score2) && (score1<score3) && (score1<score4) && (score1<score5))
			low_score = score1;
		else if ((score2<score3) && (score2<score4) && (score2 < score5))
			low_score = score2;
		else if ((score3<score4) && (score3<score5))
			low_score= score3;
		else if (score4 < score5)
			low_score=score4;
		else
			low_score=score5;

		return low_score;
	}
	//Gets average score
	double getAverage(double score1, double score2, double score3, double score4, double score5, double low_score, double high_score)
	{
		return ((score1 + score2 + score3 + score4 + score5)-(low_score + high_score))/3;
	}

