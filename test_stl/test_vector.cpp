#include <vector>
#include <iostream>


using namespace std;

void test_base_func()
{
    // create a vector by five constructors
    vector<int> vector_1;
    vector<int> vector_2(5);
    vector<int> vector_3(5,3);
    vector<int> vector_4(vector_3);
    vector<int> vector_5(vector_3[1], vector_3[4]);  // [)

    for(int i = 0; i < vector_3.size(); i++)
    {
        cout << vector_3[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < vector_5.size(); i++)
    {
        cout << vector_5[i] << " ";
    }
    cout << endl;

    // Add func
    vector_1.push_back(1);
    vector<int>::iterator it = vector_1.begin();
    vector_1.insert(it, 2);
    it = vector_1.begin();
    vector_1.insert(it, 2, 4);
    it = vector_1.end();
    it--;
    vector_1.insert(it, vector_4.begin(), vector_4.end());
    for(int i = 0; i < vector_1.size(); i++)
    {
        cout << vector_1[i] << " ";
    }
    cout << endl;

    // Delete func
    // end()  指向最后一个元素的下一个位置
    // begin() 指向第一个元素的位置
    vector<int>::iterator it_2 = vector_1.begin();
    it_2++;
    vector_1.erase(it_2);
    vector_1[vector_1.size()-2] = 5;
    vector_1[vector_1.size()-6] = 1;
    for(int i = 0; i < vector_1.size(); i++)
    {
        cout << vector_1[i] << " ";
    }
    cout << endl;
    it_2 = vector_1.begin();
    vector_1.erase(it_2+1, it_2+3);
    for(int i = 0; i < vector_1.size(); i++)
    {
        cout << vector_1[i] << " ";
    }
    cout << endl;
    vector_1.pop_back();
    for(int i = 0; i < vector_1.size(); i++)
    {
        cout << vector_1[i] << " ";
    }
    cout << endl;


}

int main()
{
    test_base_func();
}