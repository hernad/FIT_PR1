#include <iostream>
#include <string.h>

using namespace std;

int main () {
	char word1[10]  = {"Base"};
	char word2[10] = {"ballroom"};
	strncat(word1, word2, 4);
	cout << word1;
	return 0;
}
