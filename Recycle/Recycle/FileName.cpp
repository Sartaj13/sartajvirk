#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

void main()
{
srand(time(0));
string Items[40] = { "Table", "Wallet", "Pillow", "Sculpture", "Shirt", "Sweater", "Keyboard", "Mug", "Chopsticks", "Eraser", "Pot", "Bottle", "Bag", "Cup", "Straw", "Container", "Lid", "Fork", "Spoon", "Plate", "Toy", "Can", "Spoon", "Fork", "Knife", "Foil", "Can", "Pipe", "Nail", "Wire", "Lid", "Jar", "Cup", "Bowl", "Plate", "Vase", "Mug", "Window", "Frame", "Towel" };
int i;
char Answer;
	{
		cout << " To Play Press 1 \n To Check Ranks Press 2 \n To exit Press 0 ";
		cin >> Answer;
	}
	for (i = 0; i < 1; i++)
	{
		if (Answer == 1)
			cout << " You will play 10 times and will get 5 points on each correct anwser";
		while (selectedIndices.size() < 10)
		{
			int randomIndex = rand() % Items.size();
			selectedIndices.insert(randomIndex);
		}





}