#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string name = { "mousa"};
	string part1 = "C++";
	string part2 = "is a powerfull";
	string sentance = part1 + " " + part2 +" "+ "Language";
	for (char c : sentance)
	{
		cout << c << endl;
	}
	cout << "the sentance is " << sentance << endl;
	int num = 19;  
	unsigned  num2 = 90;
	num = num2 = 1000;
	string s1;

	//cin >> s1;
	//cout << s1 << endl;

	cout << "*****************************************" << endl;
	getline(cin, s1);
	cout << s1 << endl;

	cout << "your name is " << name << endl;

	cout << "number 1 : " << num << endl;
	cout << "number 2 : " << num2 << endl;
	vector <int> var(10, 8);

	int s = var.size();

	// 2d vector 
	 
	vector <vector<int>> max{ {1,2,3,4},{10,20,30,40} };

	vector<int>vector1;
	vector<int>vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;


	vector2.push_back(100);
	vector2.push_back(200);

	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;


	vector<vector<int>>vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;





	int size = name.size();
	cout << "the first element " << size << endl;
	//cout << "the second element " << name[1] << endl;
	return 0;

}