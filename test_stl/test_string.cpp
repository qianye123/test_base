#include <string>
#include <iostream>

using namespace std;


void my_printf_str(const string& str)
{
    cout << str << endl;
}

void test_string_base_func()
{
    // string constructors
    string str1("hello!");
    string str2(10, 'a');
    string str3(str1);
    string str4;

    my_printf_str(str1);
    my_printf_str(str2);
    my_printf_str(str3);
    str4 = "hello!";
    cout << str1.size() << endl;
    cout << str2.size() << endl;
    cout << str3.size() << endl;
    cout << str4.size() << endl;

    cout << str1.length() << endl;    // length() == size()  

    str4 = str2;
    my_printf_str(str4);
    str4 = str2 + str3;
    my_printf_str(str4);
    str4 += str3;
    my_printf_str(str4);
    str4.append("this is a test!");
    my_printf_str(str4);
    str4.push_back('b');
    my_printf_str(str4);

    str1 = str2;
    if(str1 == str2)
    {
        my_printf_str("this is equal!");
    }
    else
    {
        my_printf_str("this is not enque!");
    }

    // compare func

    string str5;
    str5 = str4.substr(11, 6);
    my_printf_str(str5);
    cout << str5[3] << endl;
    cout << str5.at(3) << endl;
    


}

int main()
{
    test_string_base_func();
}