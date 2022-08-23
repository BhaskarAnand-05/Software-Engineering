#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // program execution begans from main function
    int count = 0, index = 0;
    string str;

    // Creating input filestream
    ifstream fin("Count_lines.cpp");

    // getline function to get the lines from code
    while (getline(fin, str))
    {
        index = str.find_first_not_of(' ');
        if (str == "" || (str[index] == '/' && str[index + 1] == '/'))
        {
            // means there is a blank line or comment line
            continue;
        }
        if (str.find_first_not_of(' ') == std::string::npos)
        {
            // There's a non-space.
            continue;
        }
        
        count++;
    }
    cout << "Numbers of lines in the file are : " << count << endl;
    return 0;
}
// end of main