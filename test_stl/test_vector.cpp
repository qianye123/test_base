#include <vector>


using namespace std;

void test_base_func()
{
    // create a vector by five constructors
    vector<int> vector_1;
    vector<int> vector_2(5);
    vector<int> vector_3(5,3);
    vector<int> vector_4(vector_3);
    vector<int> vector_5(vector_3[1], vector_3[4]);

    for(int i = 0; i < 10; i++)
    {

    }

}

int main()
{
    test_base_func();
}