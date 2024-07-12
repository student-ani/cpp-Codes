#include <iostream>
using namespace std; 
class Color {

public:
	enum ColorEnum {
		black,
		blue,
		red
    };
		
 };
 
 
int main() {
      Color::ColorEnum obj; 
      cout << sizeof (obj) << endl;

      return 0;

}
