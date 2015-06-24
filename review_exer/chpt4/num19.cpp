//Create an if/else that prints "Excellent" when score > 90
//"Good" when score > 80 and "Try Harder" when < 80

#include <iostream>
using namespace std;

int main()
{

	int score;//user's score
	
	cout<<"What was your score?"<<endl;
	cin>>score;
	
	if (score >=90)
		cout<<"Excellent"<<endl;
	else if (score >=80)
		cout<<"Good"<<endl;
	else
		cout<<"Try Harder"<<endl;
	return 0;
}
