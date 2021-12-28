#include <iostream>
#include <String>
#include <algorithm>
//#include <vector>
using namespace std;
int n = 10;
//string Chislo1 = "-1000000000000000200000000000000000000000010";
string Chislo1 = "9";
string Chislo2 = "22";
string Otwet = "";

bool Znak1minus;
bool Znak2minus;
//vector<int> temp;

void reverse_chislo() {

	if (Chislo1[1] == '-')
	{
		Znak1minus = true;
		reverse(Chislo1.begin(), Chislo1.end());
	}
	else
	{
		Znak1minus = false;
		reverse(Chislo1.begin(), Chislo1.end());
		cout << Chislo1 << endl;
	}


	if (Chislo2[1] == '-')
	{
		Znak2minus = true;
		reverse(Chislo2.begin(), Chislo2.end());
	}
	else
	{
		Znak2minus = false;
		reverse(Chislo2.begin(), Chislo2.end());
		cout << Chislo2 << endl;
	}
}

int ToInt(string CHISLO, int i) {

	int temp = 0;
	string temp1 = "";
	temp1 = CHISLO[i];
	temp = stoi(temp1);

	return temp;
}
int Umnoj() {
	
	for (int i = 0; i < Chislo2.length(); i++)
	{

		int temp1 = 0;
		temp1 = ToInt(Chislo2, i);
		//cout << temp1 << endl;
		for (int j = 0; j < Chislo1.length(); j++)
		{
			int temp2 = 0;
			temp2 = ToInt(Chislo1, j);
			temp1 *= temp2;
			Otwet += to_string(temp1);
		}


	}
	cout << Otwet << endl;
	

	return 1;
}






int main() {

	//cin >> Chislo1;
//	cin >> Chislo2;

	reverse_chislo();
	//tatata
	Umnoj();

	return 1;
}