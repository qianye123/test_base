#include <vector>
#include <iostream>

/*
    1.push_back 在数组的最后添加一个数据

    2.pop_back 去掉数组的最后一个数据

    3.at 得到编号位置的数据

    4.begin 得到数组头的指针

    5.end 得到数组的最后一个单元+1的指针

    6．front 得到数组头的引用

    7.back 得到数组的最后一个单元的引用

    8.max_size 得到vector最大可以是多大  (vector最大内存是固定的，所以你单个元素内存越大，能存个数越小)

    9.capacity 当前vector分配的大小

    10.size 当前使用数据的大小

    11.resize 改变当前使用数据的大小，如果它比当前使用的大，者填充默认值

    12.reserve 改变当前vecotr所分配空间的大小

    13.erase 删除指针指向的数据项

    14.clear 清空当前的vector

    15.rbegin 将vector反转后的开始指针返回(其实就是原来的end-1)

    16.rend 将vector反转构的结束指针返回(其实就是原来的begin-1)

    17.empty 判断vector是否为空

    18.swap 与另一个vector交换数据
    19. assign 将当前vector的清空，并且重新赋值

*/

using namespace std;

template<typename T>
void printf_vetor(const vector<T>& vector_temp)
{
    for(int i = 0; i < vector_temp.size(); i++)
    {
        cout << vector_temp[i] << " ";
    }
    cout << endl;
}
struct test
{
    int a;
    int b;
    int c;
    int d;
};

void test_base_func()
{
    // create a vector by five constructors
    vector<int> vector_1;
    vector<int> vector_2(5);
    vector<int> vector_3(5,3);
    vector<int> vector_4(vector_3);
    vector<int> vector_5(vector_3[1], vector_3[4]);  // [)

    printf_vetor(vector_3);
    printf_vetor(vector_5);

    // Add func
    vector_1.push_back(1);
    vector<int>::iterator it = vector_1.begin();
    vector_1.insert(it, 2);
    it = vector_1.begin();
    vector_1.insert(it, 2, 4);
    it = vector_1.end();
    it--;
    vector_1.insert(it, vector_4.begin(), vector_4.end());
    printf_vetor(vector_1);

    // Delete func
    // end()  指向最后一个元素的下一个位置
    // begin() 指向第一个元素的位置
    vector<int>::iterator it_2 = vector_1.begin();
    it_2++;
    vector_1.erase(it_2);
    vector_1[vector_1.size()-2] = 5;
    vector_1[vector_1.size()-6] = 1;
    printf_vetor(vector_1);
    it_2 = vector_1.begin();
    vector_1.erase(it_2+1, it_2+3);
    printf_vetor(vector_1);
    vector_1.pop_back();
    printf_vetor(vector_1);

    //
    vector_4.swap(vector_1);
    vector_1.clear();
    printf_vetor(vector_1);
    printf_vetor(vector_4);

    int temp_2 = vector_4.at(2);
    cout << temp_2 << " " << &temp_2 << endl;
    int front = vector_4.front();
    int back  = vector_4.back();
    cout << front << " " << &front << endl;
    cout << back << " " << &back << endl;

    vector<int>::reverse_iterator rev_it = vector_4.rbegin();
    vector_4.insert(rev_it.base(), 7);
    printf_vetor(vector_4);
    rev_it = vector_4.rend();
    vector_4.insert(rev_it.base(), 6);
    printf_vetor(vector_4);
    vector<int>::iterator it_temp = vector_4.begin();
    vector_4.erase(it_temp+2, it_temp+4);
    rev_it = vector_4.rend();
    rev_it -= 2;
    cout << "rev_it: " << *rev_it.base() << endl;
    vector_4.insert(rev_it.base(), 6);
    printf_vetor(vector_4);

    it_temp =vector_4.begin();
    vector_4.insert(it_temp, 9);
    printf_vetor(vector_4);

    int temp_empty = vector_1.empty() ? 0 : 1;
    cout << temp_empty << endl;
    cout << vector_4.size() << endl;
    cout << vector_4.max_size() << endl;
    cout << vector_2.max_size() << endl;
    vector<test> vector_6(static_cast<int>(5));
    cout << vector_6.max_size() << endl;
    cout << vector_6.capacity() << endl;
    cout << vector_4.capacity() << endl;
    int a = 0;
    while(a < 3)
    {
        a++;
        vector_4.push_back(12);
    }
    cout << vector_4.capacity() << endl;
    printf_vetor(vector_4);
    vector_4.assign(4,11);
    printf_vetor(vector_4);
}

int main()
{
    test_base_func();
}