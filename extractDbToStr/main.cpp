//
//int main(){
//    double number = 12.34;
//    stringstream stream;
//    stream<<fixed<<setprecision(1)<<number;
//    string str = stream.str();
//    cout<<str<<endl;
//    return 0;
//}

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

// Reusable function to convert double to string
string doubleToString(double number, int precision) {
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    return stream.str();
}

int main() {
    double number = 12.34567;
    int precision = 2;

    string str = doubleToString(number, precision);
    cout << str << endl;

    return 0;
}
