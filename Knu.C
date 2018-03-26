#include <stdio.h>

#include<conio.h>
int indexOf(int *array, int array_size, int number) {
    for (int i = 0; i < array_size; ++i)
    {
        if (array[i] == number) 
        {
            return i;
        }
    }
    return -1;
}
void test_indexOf() {
    int array[10] = {12, 78, -43, 0, 21, 12, 20, -9, 1, -1};
    assert(indexOf(array, 10, 12) == 0);
    assert(indexOf(array, 10, 0) == 3);
    assert(indexOf(array, 10, 2) == -1);
    assert(indexOf(array, 10, 43) == -1);
    assert(indexOf(array, 10, 11) == -1);
    assert(indexOf(array, 10, -1) == 9);
    assert(indexOf(array, 10, 1) == 8);
    assert(indexOf(array, 10, -2) == -1);
    assert(indexOf(array, 10, 3) == -1);
}


int main () {
    test_indexOf();
    return 0;
}
