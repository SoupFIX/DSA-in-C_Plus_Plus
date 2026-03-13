#include <iostream>
using namespace std;
int count_function(void)
{
    static int count = 0;
    return ++count;
}
int main()
{
    count_function();
    count_function();
    count_function();
    cout << count_function() << " number of times the function is called." << endl;
    int *i, **x;
    i = (int *)malloc(sizeof(int));
    cout << i << endl;
    x = &i;
    cout << (x);
    return 0;
}