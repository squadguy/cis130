#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <sstream> //string stream
#include <iomanip>
using namespace std;

void display_char(char mychar);

int main()
{

	string names[] = { "Maya", "Pam", "Dave", "Tim", "Amy"};
	for (int i = 0; i < 5; i++)
		cout << names[i] << endl;

	return 0;
}


int main6()
{

	string str_num1 = "ma1ya";

	if (str_num1.find('A') == string::npos)// if not in string return npos value
		cout << "A not in string\n";
	else
		cout << "A in string\n";

	cout << "str_num1.length = " << str_num1.length() << endl;
	for (int i = 0; i < str_num1.length(); i++)
	{
		char one_char = str_num1[i];
		char uc_char = one_char;
		if (isdigit(one_char))
			cout << one_char << " is a number\n";
		else
			uc_char = toupper(one_char);
		cout << one_char << ", " << uc_char << endl;
		str_num1[i] = uc_char;
	}

	cout << str_num1 << endl;

	return 0;
}

int main5()
{
	int num1;
	float float1;	
	string str_number;
	istringstream istr; // input string output numbers
	ostringstream ostr; // input numbers output string

// input numbers output string

//----------int to string conversion-------- input numbers using stream instertion same as << cout
	num1 = 1234;
	ostr << num1;
	str_number = ostr.str();
	cout << "str_number = " << str_number << endl; 
	ostr.str(""); // clears the buffer

//----------float to string coversion------- input numbers using stream instertion same as << cout

	float1 = 10/6.0f;
	ostr << setprecision(1) << fixed << showpoint << float1;
	str_number = ostr.str();
	cout << "str_number = " << str_number << endl;

// output numbers input string using stream extraction same as cin >>

//---------string to int------------
	str_number = "123456";
	num1 = 0;
	istr.str(str_number);
	istr >> num1;
	cout << "num 1 = " << num1 << endl;
	istr.clear();

// ----------string to float
	str_number = "8.13";
	float1 = 0;
	istr.str(str_number);
	istr >> float1;

	if (istr.fail())
		cout << str_number << " cannot be made to float\n";
	else 
		cout << "float1 = " << float1 << endl;

	return 0;
}


int main4 ()
{
	//checks to see if two c-style arrays are equal

	char name1[] = "Maya";
	char name2[] = "Maya";

	if(strcmp(name1, name2) == 0)
		cout << "they are equal\n";
	else if (strcmp(name1, name2) > 0)
		cout << "name1 is greater\n";
	else 
		cout << "name2 is greater\n";

	return 0;
}

int main3 ()
{
	char myname[] = "Chris";
	char myname2[10];
	int num1[10];

	cout << "strlen = " << strlen(myname) << endl;

	//cout << sizeof(num1) << endl;

	if (strlen(myname) < sizeof(myname2))
		strcpy (myname2, myname);
	else
		cout << "target to small \n";

	return 0;
}

int main2()
{
	char myname[] = "Chris";
	//char myname[] = { 'C', 'h', 'r', 'i', 's', '/n'}; MUST HAVE /n
	char myname2[10];

	strcpy( myname2, myname ); // myname2 = myname; ie target = source

	/*for (int = 0; i < 5; i++)
		myname2[i] = myname[i] */ // deep copy 

	cout << myname << endl;

	return 0;
}


int main1 ()
{
	char char1 = 69,
		 char2 = 'b',
		 char3 = 'c';

display_char(char1);

	return 0;
}

void display_char(char mychar)
{
	cout << mychar << endl;
}