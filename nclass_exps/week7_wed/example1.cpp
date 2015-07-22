#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct record_struct
{
	char stname[21];
	int id;
};

int main()
{
	fstream myfile;
	myfile.open("stfile.dat", ios::binary | ios::in);
	int rec_size = sizeof(record_struct), rec_number, start_byte;
	record_struct one_record;

	cout << "Enter Record # : (1-?)";
	cin >> rec_number;

	start_byte = (rec_number - 1) * rec_size;
	myfile.seekg(start_byte, ios::beg); //start_byte, end_byte

	myfile.read((char*)&one_record, rec_size);
	
	if (myfile)
		cout << one_record.stname << ", " << one_record.id << endl;
	else
		cout << rec_number << " is an invalid record#\n";

	myfile.close();
	return 0;
}


int main5()
{

	fstream stfile;
	int rec_size = sizeof(record_struct);
	stfile.open("stfile.dat", ios::binary | ios::in);
	record_struct one_record;

	stfile.read((char*)&one_record, rec_size);

	while(!stfile.eof())
	{
		cout << one_record.id << ", " << one_record.stname << endl;
		stfile.read((char *)&one_record, rec_size);
	}

	stfile.close();

	return 0;
}


int main4()
{

	fstream stfile;
	int rec_size = sizeof(record_struct);
	stfile.open("stfile.dat", ios::binary|ios::out);

	record_struct rec1 = { "Chris", 12345 }, rec2 = { "Susan", 12 },
		rec3 = { "Bill", 23423423 }, rec4 = {"David", 9273};

	cout << rec1.stname << ", " << rec1.id << endl;

//writing to binary files
	stfile.write((char*)&rec1, sizeof(rec1));
	stfile.write(reinterpret_cast<char *>(&rec2), sizeof(rec1));
	stfile.write((char*)&rec3, sizeof(record_struct));
	stfile.write((char*)&rec4, rec_size);

	stfile.close();

	return 0;
}


int main3()
{
	ifstream stfile;
	string stname;
	int id, num_rec = 0;

	stfile.open("students.txt");
	
	if(!stfile)
	{
		cout << "File open failed\n";
		cout << "_______ERROR________\n";
		return 99;
	}
	else
	{

		while (stfile >> stname >> id)
			{
				num_rec++;
				cout << num_rec << ".\t" << stname << "\t" << id << endl;
			}

		cout << "# or records = " << num_rec << endl;
		stfile.close();
	}

	return 0;
}

int main2()
{
//text, sequential, input pg 288
	ifstream stfile;
	//--buffer variables --
	string stname;
	int id, num_rec = 0;

	stfile.open("students.txt");
	//Chris 1234
	stfile >> stname >> id;
		while (!stfile.eof())
		{
			cout << stname << "\t" << id << endl;
			num_rec++;
			stfile >> stname >> id;
		}
		cout << "# or records = " << num_rec << endl;
		stfile.close();

	cout << "--end of job--\n";
	return 0;
}


int main1()
{
//text, sequential, output - pg 290
	string name1 ="Pam";
	int num1 = 76555;
	ofstream myfile("students.txt"); //writing 
	myfile << "Chris 1234\n"; // writes out Chris 1234 to file (use \n always)
	myfile << name1 << " " << num1 << endl;
	myfile << "Jim 1611\n";
	myfile << "Bill 3243\n";
	myfile << "Susan 89787\n";
	myfile << "Stacy 675876\n";
	myfile.close();

	return 0;
}