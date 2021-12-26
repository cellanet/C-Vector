//gia minh
// 03/21/2021

#include <iostream>
#include <list>
#include <iterator>
#include <fstream>
#include "ListContainer.h"

using namespace std;

char menu2();
void part2();

int main()
{
	list<string> test;

	part2();

	return 0;
}

char menu2()
{
	system("cls");
	cout << "\n\tA. Clear() - Destroys all elements from the list\n";
	cout << "\tB. Resize(n) - Changes the list so that it contains n elements\n";
	cout << "\tC. Read input.dat and push_front(e) - Adds a new element at the front of the list\n";
	cout << "\tD. pop_front() - Deletes the first element\n";
	cout << "\tE. front() - Accesses the first element\n";
	cout << "\tF. Read input.dat and push_back(e) - Adds a new element at the end of the list\n";
	cout << "\tG. pop_back() - Delete the last element\n";
	cout << "\tH. back() Accesses the last element\n";
	cout << "\tI. begin() - Returns an iterator refereing to the first element in the list\n";
	cout << "\tJ. end() Returns an iterator referring to the past-the-end element in the list\n";
	cout << "\tK. Using iterator begin() and end() returns all elements in the list\n";
	cout << "\tL. rbegin() - Returns a reverse iterator pointing to the last element in the list\n";
	cout << "\tM. rend() - Returns a reverse iterator pointing to the element preceding the first element in the list\n";
	cout << "\tN. Using iterator rbegin() and rend() returns all elements in the list\n";
	cout << "\tO. erase(it) - Removes from the vector a single element(using an iterator)\n";
	cout << "\tP. erase(start_it,end_it) - Removes from the vector a range of elements( using iterators)\n";
	cout << "\tQ. insert(it, entry) - Insert a new entry at the iterator.\n";
	cout << "\tR. swap() - Exchanges the content of the container by another list's content of the same type\n";
	cout << "\tS. Sort - Sorts the list.\n";
	cout << "\t0. return\n";

	string str = "abcdefghijklmnopqrs0";
	char option = inputChar("\tOption: ", str);

	return option;
}

void part2()
{
	char option;
	ListContainer test;

	while (true)
	{
		option = menu2();

		switch (tolower(option))
		{
		case '0':break;
		case 'a': test.clear(); break;
		case 'b': test.resize(); break;
		case 'c':test.readFront(); break;
		case 'd':test.pop_Front(); break;
		case 'e':test.front(); break;
		case 'f':test.readEnd(); break;
		case 'g':test.pop_Back(); break;


		default: cout << "\t\t    ERROR-Invalid Option. Please re-enter."; break;
	
		}
		if (option == '0')
			break;
		cout << "\n\n";
		system("pause");
	}
}

