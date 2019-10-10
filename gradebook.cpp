#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
const int size = 7; 

void calculate(ifstream &inF)
{
	string name; 
	int t1, t2, t3, t4, t5, t6, t7; 

	cout << "Name" << setw(20) << "Report" << endl;
	cout << "Letter" << setw(5) << "Grade" << setw(30) << "Average" << endl;

	while (!inF.eof())
	{

		inF >> name >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7; 
		
		cout << name; 

	}
}
int main()
{
	//ifstream inputstream; 
	//inputstream.open("data6.txt"); 
	//string name; 
	//int t1, t2, t3, t4, t5, t6, t7; 

	
	//gradebook >> name >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7;
	//calculate(gradebook);
		return 0;
}
