#include <iostream>
#include<cstdlib>
#include <cmath>

using namespace std;

class Marks {
public:
	int rollNumber;
	char *name;
	int *marks; 

	int num_marks; 
int setmarks(){
		int temp =0;
		cin >>temp;
		return temp;
	}

	void getMarks() { 
		
		int num = 1;
		num_marks = num;
		marks = new int[num];

		for (int i = 0; i < num; i++)
			marks[i] = setmarks();
	}
	
	int summarks() {
		int sum = 0;

		for (int i = 0; i < num_marks; i++)
			sum += marks[i];

		return sum;
	}

	double avarage() {
		return round(((double)summarks() / num_marks) * 100) / 100;
	}

	void set_marks(int number_of_marks, int newmarks) { // change mark with number number_of_marks
		marks[number_of_marks] = newmarks;
	}

	int get_marks(int number_of_marks) {
		return marks[number_of_marks];
	}

	void set_num_marks(int num) {
		num_marks = num;
		
		delete[]marks;

		marks = new int[num];
	}

	~Marks() {
		delete[]marks;
	}

};


class Physics : public Marks {
public:
	
};


class Chemistry : public Marks {
public:


};


class Mathematics : public Marks {
public:


};

int main()
{
	int num;

	cout << "Enter the number of students ";
	cin >> num;

	Physics *cl1_phys = new Physics[num]; 
	Chemistry *cl1_chem = new Chemistry[num];
	Mathematics *cl1_math = new Mathematics[num]; 

	for (int i = 0; i < num; i++) {

		cl1_phys[i].rollNumber = cl1_chem[i].rollNumber = cl1_math[i].rollNumber = i + 1;
          cout<< " Enter the MArks of "<< (i+1)<<" stud  of phy of 3 rounds  ";
		cl1_phys[i].getMarks();
		cout<< " Enter the MArks of "<< (i+1)<<" stud  of chem of 3 rounds  ";
		cl1_chem[i].getMarks();
		cout<< " Enter the MArks of "<< (i+1)<<" stud  of math of 3 rounds  ";
		cl1_math[i].getMarks();
	}


	cout << "\nThe total marks of each student of a class in Physics, Chemistry and Mathematics: \n\n";

	for (int i = 0; i < num; i++) { 
		cout << "Roll number of student is " << cl1_phys[i].rollNumber << endl;

		cout << "The total marks in Physics is " << cl1_phys[i].summarks() << endl;
		cout << "The total marks in Chemistry is " << cl1_chem[i].summarks() << endl;
		cout << "The total marks in Mathematics is " << cl1_math[i].summarks() << endl;

		cout << endl;
	}

	cout << endl << "--------------------------" << endl;

	cout << "\nThe average marks : \n\n";

	for (int i = 0; i < num; i++) { 
		cout << "Roll number of student is " << cl1_phys[i].rollNumber << endl;

		cout << "The average mark in Physics is " << cl1_phys[i].avarage() << endl;
		cout << "The average mark in Chemistry is " << cl1_chem[i].avarage() << endl;
		cout << "The average mark in Mathematics is " << cl1_math[i].avarage() << endl;

		cout << endl;
	}

	return 0;
}