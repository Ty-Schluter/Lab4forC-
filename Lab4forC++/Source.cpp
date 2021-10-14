/*
	Ty Schluter
	C++ 1st 2021
	Due: October 13th
	Lab 4 and  Temperature Output
	Design and write a C++ program that inputs a series of hourly temperature from a file, and outputs a bar chart (using stars) of the temperatures.
	The temperature should be printed to the left of the corresponding bar, and there should be a heading that gives the scale of the chart.
	The range of temperatures should be from  -30 to 120.
	Because it is hard to display 150 characters on the screen, you should have each star represent a range of 3 degrees. 
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace::std;
// WE NEED FILE I/O and If/Else STATEMENTS
// LOOK ON PAGE 300
int main()
{

	cout << "-30   -15   0   15   30   45   60   75   90   105   120" << endl; // The chart I realized that wasn't going to work
	//cout << "\t\t\t|" << endl; I need 3 tabs for line up 
	
	ifstream infile;
	ofstream outfile;
	
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16, num17, num18, num19, num20, num21, num22, num23, num24; // Variables for the file
	
	infile.open("InputData.dat");// All of the file information getting ready to be read and processed. Also does this mean I get full points on Lab 3 since I understand File I/O since Lab 4?
	outfile.open("OutputForLab4.dat"); 
	infile >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10 >> num11 >> num12 >> num13 >> num14 >> num15 >> num16 >> num17 >> num18 >> num19 >> num20 >> num21 >> num22 >> num23 >> num24;
	outfile << num1 << num2 << num3 << num4 << num5 << num6 << num7 << num8 << num9 << num10 << num11 << num12 << num13 << num14 << num15 << num16 << num17 << num18 << num19 << num20 << num21 << num22 << num23 << num24; 
	//cout << num1 << num2 << num3 << num4 << num5 << num6 << num7 << num8 << num9 << num10 << num11 << num12 << num13 << num14 << num15 << num16 << num17 << num18 << num19 << num20 << num21 << num22 << num23 << num24;

	
	int sC;
	int lC;
	/*Mr.Busch I can not figure out how to do a chart I looked on the internet, but nothing really helped.
	* I also planned on doing this 24 time, and then I realized I can just use case statements but I'm running out of time.
	*/
	while (num1)
	{
		lC = 1;
		while (lC <= num1 / 3)
		{
			cout << '*';
			lC++;

		}
		cin >> sC;
		cout << endl;
	}
	
		return 0;
}
