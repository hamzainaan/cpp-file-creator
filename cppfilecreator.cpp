#include <iostream>
#include <fstream>

using namespace std;

void create() {
    ofstream createnewfile("file.cpp");
    createnewfile << "#include <iostream>"
                  << "\n\nusing namespace std;"
                  << "\n\nint main() {"
                  << "\n\n\treturn 0;\n}";
    cout << "New .cpp file has successfully created!";
}


int main() {
    char input;
    cout << "Press <c> to create a .cpp file!" << endl;
    cin >> input;
    if(input == 'c' || input == 'C') {create();}
    else {cout << "Wrong key!";}
	getchar();
	return 0;
}
