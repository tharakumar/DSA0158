#include <iostream>
using namespace std;
class Degree {
public:
    void getDegree() {
        cout << "I got a Degree" << endl;
    }
};
class Undergraduate : public Degree {
public:
    void getDegree() {
        cout << "I am an Undergraduate" << endl;
    }
};
class Postgraduate : public Degree {
public:
    void getDegree() {
        cout << "I am a Postgraduate" << endl;
    }
};
int main() {
    Degree degree;
    Undergraduate undergraduate;
    Postgraduate postgraduate;
    degree.getDegree();         
    undergraduate.getDegree();    
    postgraduate.getDegree();  
    return 0;
}