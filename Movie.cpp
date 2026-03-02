#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Movie{
private:
    string screenWrite, title;
    int year;
public:
    //setter and getter methods
    void setScreen(string screen)           {screenWrite = screen;}
    void setTitle(string ttl)               {title = ttl;}
    void setYear(int yr)                    {year = yr;}
    string getScreen()                      {return screenWrite;}
    string getTitle()                       {return title;}
    int getYear()                           {return year;}

    //print method
};

int main(){
    return 0;
}