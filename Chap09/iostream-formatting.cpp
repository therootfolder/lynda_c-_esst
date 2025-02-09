// iostream-formatting.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  /*   // cout and cin to get a string
    string istr;
    cout << "Prompt: ";// cout and cin classes have
    // overloaded the >> operator to use file io
    //that is fgets() and fputs().
    //wow just amazing how it does it: operator overloading
    cin >> istr;    // just one word at a time
    cout << "Input: " << istr << endl;
    char buf[128];
    fflush(stdin);// wow i just applied what i learnt about
    // file streams and stdin is a file handle that
    // relates to the console input. and then it worked.
    cout<<"input a line:"<<endl;
    cin.getline(buf,sizeof (buf));// a method of cin class
    cout<<"entered line is: "<<buf<<endl;
     */
    // integer formatting
    cout << "Integer formatting:" << endl;
    int i1 = 42;
    int i2 = 127;
    int i3 = 5555;
    cout << "default: " << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "hex: " << hex << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout<< "something in the middle"<< i1<<' '<<i2<<' '<<i3<<endl;// this line still prints it in hex
    cout << "hex with showbase: " << showbase << hex << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "octal with showbase: " << oct << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "octal with noshowbase: " <<noshowbase<< oct << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "default: " << noshowbase << dec << i1 << ' ' << i2 << ' ' << i3 << endl;
    
    // floating point formatting options
    cout << endl << "Floating point formatting:" << endl;
    double d1, d2, d3;
    d1 = 3.1415926534;
    d2 = 1234.5;
    d3 = 4.2e-10;
    cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "fixed: " << fixed << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "scientific: " << scientific << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "fixed (3): " << setprecision(3) << fixed << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "scientific (7): " << setprecision(7) << scientific << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout.unsetf(ios_base::floatfield);
    cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    
    // string formatting options
    cout << endl << "String formatting:" << endl;
    string s1 = "This is a string.";
    string s2 = "This is a much longer string.";
    string s3 = "Today's news: Big Light in Sky Slated to Appear in East";
    
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    
    cout << setw(40)<<right  << s1 << endl;
    cout << setw(64) << right << s2 << endl;
    cout << setw(64) << right << s3 << endl;
    
    cout << setw(64) << left << setfill('-') << s1 << endl;
    cout << setfill('~') << setw(64) << right << s1 << endl;
    cout << left << s1 << endl;
    
    return 0;
}
