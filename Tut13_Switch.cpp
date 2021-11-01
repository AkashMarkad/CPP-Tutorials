/*Switch
Use the switch statement to select one of many code blocks to be executed.
When C++ reaches a break keyword, it breaks out of the switch block.
The default keyword specifies some code to run if there is no case match
*/

#include <iostream> 
using namespace std;

int main() {

    int day = 7;
    switch (day) {
        case 1:
            cout << "Today is Monday";
            break;
        case 2:
            cout << "Today is Tuesday";
            break;
        case 3:
            cout << "Today is wednesday";
            break;
        case 7:
            cout << "Today is Sunday";
            break;
        default:
            cout << "Looking forward to the Weekend";
    }

    return 0;
}