
#include <ctime>
#include "clau_parser.h"



int main(void)
{
	clau_parser::UserType global;

	int a = clock();

	clau_parser::LoadData::LoadDataFromFile("input.eu4", global, 0, 0);
	
	int b = clock();
	std::cout << b - a << "ms\n";


	// test ( print to file )
	//clau_parser::LoadData::Save2(global, "output.eu4");

	return 0;
}

