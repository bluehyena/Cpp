#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>

constexpr size_t STACK_MAX_SIZE = 256;

// 스택이 빈상태 : 0
// 스택이 가득 찬 상태 : 255

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

    // STACK_MAX_SIZE >> 1 라는 표현식은 2로 나눈다와 동일한 표현
    // bitshift 연산을 검색해볼 것. bitshift divided by 2라고 구글링
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
    스택은 후입, 즉 원소를 추가하게 되면 가장 맨 뒤에
    추가할 원소를 추가한다.
    만약 스택이 이미 가득 차있는 상태라면 아무것도 추가하지 않는다.
    */

    if (arr[255] >= 255) {
        std::cout << "스택이 가득 차 있습니다." << std::endl;
    }
    else {
        arr[arr[255]] = element;
        ++arr[255];
    }
}

void Pop(int arr[]) {

    /*
    스택은 선출, 즉 원소를 추가하게 되면 가장 맨 뒤의 원소를 삭제한다

    보통 삭제하는 방법은 단순히 현재 스택의 마지막 원소를 가리키는 인덱스를 1만큼 줄여주는 것이다.

    만약 스택이 비어있는 상태라면 아무것도 삭제하지 않는다.

    */

    if (arr[255] <= 0) {
        std::cout << "스택이 비어 있습니다." << std::endl;
    }
    else {
        --arr[255];
    }
}

size_t Find(int arr[], int element) {

    /*
    스택 내에서 주어진 원소가 어느 index에 있는지 찾아내어 해당 index를 반환한다.

    만약 존재하지 않는다면 -1을 반환한다.

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
