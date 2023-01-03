//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>


using namespace std;

int main(){
       int count = 0;
       float sum = 0;
       float summa = 0;
       float mean;
       float sigma;
       int i = 0;
       int n =0;
       string text;
       ifstream source("score.txt");
       while (getline(source,text))
       {
        n++;
        i++;
        sum += atof(text.c_str());
        count++;
        summa += pow(atof(text.c_str()),2);
       }
       mean = (1/(double)i)*sum;
       sigma =sqrt((summa/n)-pow(mean,2));
    cout << "Number of data = "<< i<<'\n';
    cout << setprecision(3);
    cout << "Mean = "<< mean <<'\n';
    cout << "Standard deviation = "<< sigma;
}