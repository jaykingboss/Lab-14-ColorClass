#include <iostream>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
   
    Color() : red(0), green(0), blue(0) {}

    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    void print() const {
        cout << "Color(Red: " << red
            << ", Green: " << green
            << ", Blue: " << blue << ")" << endl;
    }
};

int main() {
    Color color1, color2, color3;

    color1.setRed(255);
    color1.setGreen(0);
    color1.setBlue(0);

    color2.setRed(0);
    color2.setGreen(255);
    color2.setBlue(0);

    color3.setRed(0);
    color3.setGreen(0);
    color3.setBlue(255);

    cout << "Color values:" << endl;
    color1.print();  
    color2.print();  
    color3.print();  

    return 0;
}






