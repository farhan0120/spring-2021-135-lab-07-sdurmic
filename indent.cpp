#include <iostream>
#include <string>
#include "unindent.h"
#include "indent.h"
using namespace std;

int countChar(string line, char c)
{
    int count = 0;
    for(int i = 0; i < 10; i++)
    {
        if(line[i] == c)
        {
            count++;
        }
    }
    return count;
}
    
int add_indentations()
{
    string line;
    int count = 0;
    int num_of_steps = 0;
    while(getline(cin, line))
    {
        for(int i = 0; i < count; ++i)
        {
            num_of_space();
            cout << '\t';
        }
        cout << removeLeadingSpaces(line) << endl;
        count += countChar(line,'{');
        count -= countChar(line,'}');

        num_of_space();

        //The reason why num of steps is so high because its counting the number of spaces
        //So it also includes the the back track
        //Tabbing takes 5 spaces and since we are tabbing multiple times in some lines of code
        //This accounts for the large amount of steps needed to fix the indentation 
        //Any questions feel free to reach out - F.M
    }
    cout << "The number of steps it took was: " << num_of_space() << endl;
    return 0;
}
