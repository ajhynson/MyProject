#include <iostream>

using namespace std;

int greeting()
{
    cout << "Welcome to Reversi!" << endl;
}

int main()
{
    int argv[1];
    int board_size = argv[1];
    if (board_size > 3 and board_size < 11)
        cout << "The board must be an even size from 4 to 10." << endl;
}

main()
