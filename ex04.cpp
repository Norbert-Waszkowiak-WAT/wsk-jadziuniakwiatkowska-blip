#include<iostream>
#include<iomanip>
using namespace std;
int my_strlen(const char* s) {
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    return l;
}
int main() {
    string s1 = "saddasdasd adsdasd";
    string s2 = "chdschsd cdjsncja";
    string s3 = "hbha sijdasnc-";
    cout << my_strlen(s1.c_str()) << endl;
    cout << my_strlen(s2.c_str()) << endl;
    cout << my_strlen(s3.c_str()) << endl;
    return 0;
}
