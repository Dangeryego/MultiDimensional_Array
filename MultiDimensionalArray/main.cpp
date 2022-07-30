#include <iostream>

using namespace std;

int main()
{
    int movie_rating [4] [5]
    {
      {
          0,2,4,6,8
      },
      {
          1,3,5,7,9
      },
      {
          10,12,14,16,18
      },
      {
          11,13,15,17,19
      }
    };
    cout << movie_rating [0] [0] << endl;
    cout << movie_rating [0] [1]<< endl;
    cout << movie_rating [2] [1] << endl;
    cout << movie_rating [3] [3] << endl;
    cout << movie_rating [2] [4] << endl;
    return 0;
}
