#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream source("myfile.txt");
    char line[128];
    try
    {
        if(!source)
           throw"myfile.txt";
    }
    catch(char *s)
    {
        cout<<"error opening the file"<<s<<endl;
        exit(1);
    }
    while(!source.eof())
    {
        source.getline(line,sizeof(line));
        cout<<line<<endl;
    }
    source.close();
    return 0;
}