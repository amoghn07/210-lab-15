#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

const int W10 = 10;

class Movie{
private:
    string screenWrite, title;
    int year;
public:
    //setter and getter methods
    void setScreen(string screen)      {screenWrite = screen;}
    void setTitle(string ttl)          {title = ttl;}
    void setYear(int yr)               {year = yr;}
    string getScreen()                 {return screenWrite;}
    string getTitle()                  {return title;}
    int getYear()                      {return year;}

    //print method
    void print(){
        cout << "Movie: " << title << endl;
        cout << setw(W10) << "Year released: " << year << endl;
        cout << setw(W10) << "ScreenWriter: " << screenWrite << endl;
    }
};

int main(){
    //declarations
    vector<Movie> movies;
    ifstream fin;
    string scr; //holds temp screenwriter
    string ttl; //holds temp title
    int yr; //holds temp year

    fin.open("input.txt");
    if (fin.good()){
        while (getline(fin, ttl)){
            fin >> yr;
            fin >> scr;
            Movie tmp; //temporary object
            tmp.setTitle(ttl);
            tmp.setYear(yr);
            tmp.setScreen(scr);
            movies.push_back(tmp);
            fin.ignore(10000, '\n');
        }
    }
    else
        cout << "Input file not found.\n";

    //outputting vector data
    for (auto val: movies){
        val.print();
        cout << endl;
    }

    return 0;
}