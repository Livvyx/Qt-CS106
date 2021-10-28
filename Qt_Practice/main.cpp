#include "dialog.h"
#include <QApplication>
#include <iostream>
using namespace std;

class Hello{
private:
    string Greeting;
public:
    void Person(){
        cout << "Hello, How are you?";
        cin >> Greeting;
    }

};



int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
