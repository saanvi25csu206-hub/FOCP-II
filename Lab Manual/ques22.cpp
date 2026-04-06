/* A jewelry design tool generates hollow diamond outlines for patterns. Implement a solution to display a
hollow diamond pattern of *
    *
   * *
  *   *
 *     * 
*       *
 *     *
  *   *
   * *
    *     */
#include<iostream
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = i; j < 5; j++)
            cout << " ";

        cout << "*";

        if(i > 1) {
            for(int j = 1; j <= 2*i - 3; j++)
                cout << " ";
            cout << "*";
        }

        cout << endl;
    }

    // Lower part
    for(int i = 5-1; i >= 1; i--) {
        for(int j = 5; j > i; j--)
            cout << " ";

        cout << "*";

        if(i > 1) {
            for(int j = 1; j <= 2*i - 3; j++)
                cout << " ";
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
