#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int cnt=0;
    float sum=0,sumtwo=0;
    string textline;
    ifstream source; 
    source.open("score.txt");
    while(getline(source,textline)){
        sum+=atof(textline.c_str());
        sumtwo+=pow(atof(textline.c_str()),2);
        cnt++;
        
    }
    float avr=sum/cnt;
    float sd=sqrt((sumtwo/cnt)-pow(avr,2));
    source.close();
    
    cout << "Number of data = " << cnt << endl;
    cout << setprecision(3);
    cout << "Mean = " << avr << endl;
    cout << "Standard deviation = " << sd << endl;
}