#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>

constexpr size_t STACK_MAX_SIZE = 256;

// ������ ����� : 0
// ������ ���� �� ���� : 255

/* Function Prototypes */
void PushBack(int arr[], int element);
void Pop(int arr[]);
size_t Find(int arr[], int element);
void QuickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int& a, int& b);

int main()
{
    int stack[STACK_MAX_SIZE];
    stack[STACK_MAX_SIZE - 1] = 0;

    for (size_t i = 0; i < STACK_MAX_SIZE - 1; ++i)
    {
        PushBack(stack, i);
    }
    assert(stack[STACK_MAX_SIZE - 1] == STACK_MAX_SIZE - 1);

    // STACK_MAX_SIZE >> 1 ��� ǥ������ 2�� �����ٿ� ������ ǥ��
    // bitshift ������ �˻��غ� ��. bitshift divided by 2��� ���۸�
    for (size_t i = 0; i < (STACK_MAX_SIZE >> 1) - 1; ++i)
    {
        Pop(stack);
    }
    assert(stack[STACK_MAX_SIZE - 1] == (STACK_MAX_SIZE >> 1));

    for (size_t i = 0; i < STACK_MAX_SIZE - 1; ++i)
    {
        size_t index = Find(stack, i);
        if (i < (STACK_MAX_SIZE >> 1))
        {
            assert(index == i);
            std::cout << "Element " << i << " is at index " << index << std::endl;
        }
        else
        {
            assert(index == -1);
            std::cout << "Element " << i << " is not in the stack" << std::endl;

        }
    }

    srand(time(NULL));
    for (size_t i = 0; i < (STACK_MAX_SIZE >> 1); ++i)
    {
        PushBack(stack, rand() % STACK_MAX_SIZE + STACK_MAX_SIZE);
    }
    assert(stack[STACK_MAX_SIZE - 1] == STACK_MAX_SIZE - 1);

    QuickSort(stack, 0, static_cast<int>(STACK_MAX_SIZE - 2));

    for (int a = 0; a < 256; ++a) {
        std::cout << stack[a] << std::endl;
    }

    for (size_t i = 0; i < stack[STACK_MAX_SIZE - 1]; ++i)
    {
        for (size_t j = 0; j < stack[STACK_MAX_SIZE - 1]; ++j)
        {
            if (j < i)
            {
                assert(stack[j] <= stack[i]);
            }
            else
            {
                assert(stack[i] <= stack[j]);
            }
        }
    }

    return 0;
}

void PushBack(int arr[], int element) {

    /*
    ������ ����, �� ���Ҹ� �߰��ϰ� �Ǹ� ���� �� �ڿ�
    �߰��� ���Ҹ� �߰��Ѵ�.
    ���� ������ �̹� ���� ���ִ� ���¶�� �ƹ��͵� �߰����� �ʴ´�.
    */

    if (arr[255] >= 255) {
        std::cout << "������ ���� �� �ֽ��ϴ�." << std::endl;
    }
    else {
        arr[arr[255]] = element;
        ++arr[255];
    }
}

void Pop(int arr[]) {

    /*
    ������ ����, �� ���Ҹ� �߰��ϰ� �Ǹ� ���� �� ���� ���Ҹ� �����Ѵ�

    ���� �����ϴ� ����� �ܼ��� ���� ������ ������ ���Ҹ� ����Ű�� �ε����� 1��ŭ �ٿ��ִ� ���̴�.

    ���� ������ ����ִ� ���¶�� �ƹ��͵� �������� �ʴ´�.

    */

    if (arr[255] <= 0) {
        std::cout << "������ ��� �ֽ��ϴ�." << std::endl;
    }
    else {
        --arr[255];
    }
}

size_t Find(int arr[], int element) {

    /*
    ���� ������ �־��� ���Ұ� ��� index�� �ִ��� ã�Ƴ��� �ش� index�� ��ȯ�Ѵ�.

    ���� �������� �ʴ´ٸ� -1�� ��ȯ�Ѵ�.

    */

    for (int index = 0; index < arr[255]; ++index) {

        if (arr[index] == element) {
            return index;
        }
    }
    
    return -1;
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {

        int pivot = partition(arr, low, high);

        QuickSort(arr, low, pivot - 1);
        QuickSort(arr, pivot + 1, high);
    } 
}


int partition(int arr[], int low, int high) {
    
    int pivot = high;
    
    int left = low - 1;
    int right = low;
    int tmp;

    if (low < high) {
       
        while (right < high) {
            
            if (arr[right] < arr[pivot]) {
                swap(arr[right], arr[left + 1]);
                ++left;
            }
            ++right;
        }
        swap(arr[pivot], arr[left + 1]);
    }
    pivot = left + 1;

    return pivot;
}


void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

/* Function Implementations */
