#include<iostream>
using namespace std;
struct stud
{
	int rn;
	char name[50];
	float pr;
}s1,s2;
int main()
{
	struct stud s3;
	cout << "Student 1 \n";
	cout << "Roll no = ";
	cin >> s1.rn;
	cout << "Name = ";
	cin >> s1.name;
	cout << "Percentage = ";
	cin >> s1.pr;
	
	cout << "Student 2 \n";
	cout << "Roll no = ";
	cin >> s2.rn;
	cout << "Name = ";
	cin >> s2.name;
	cout << "Percentage = ";
	cin >> s2.pr;
	
	cout << "Student 3 \n";
	cout << "Roll no = ";
	cin >> s3.rn;
	cout << "Name = ";
	cin >> s3.name;
	cout << "Percentage = ";
	cin >> s3.pr;
	
	cout << s1.rn << "\t" << s1.name << "\t" << s1.pr << "\n";
    cout << s2.rn << "\t" << s2.name << "\t" << s2.pr << "\n";
    cout << s3.rn << "\t" << s3.name << "\t" << s3.pr << "\n";
	
}