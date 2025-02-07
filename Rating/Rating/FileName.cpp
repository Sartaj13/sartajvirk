#include<iostream>
#include<string>
using namespace std;

void main() {
	string category[4] = { "actor","actress","director","soundtrack", }, movies[4] = { "A", "B", "C", "D", }, maxcategory, maxmovie;
	int values[4][4], i, j, maxrating = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << "how would you rate the" << category[i] << "performance of the" << movies[j] << "from 1to 5?";
			cin >> values[i][j];
		}
		if (values[i][j] > maxrating)
		{
			maxrating = values[i][j];
			maxcategory = category[i];
			maxmovie = movies[j];

		}
	}

}






