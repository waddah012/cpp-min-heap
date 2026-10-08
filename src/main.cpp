#include <iostream>
using namespace std;

void heapify(int array[], int n, int i) { // this is where we restore the min heap at the subtree root at index 1
    int left  = 2 * i + 1; // left child index at 2*1 +1
    int right = 2 * i + 2; // right child index at 2*1 +2
    int smallest = i;   // here we are assuming that parent i is small

    if (left < n && array[left] < array[smallest]) // if left child exists and is smaller than it becomes left
        smallest = left; // smallest is now left

    if (right < n && array[right] < array[smallest]) // if right child exists and is smaller than it is right
        smallest = right; //smallest is right

    if (smallest != i) { // if case if smaller than the parent
        int temp = array[i]; //swap parent and the smallest child
        array[i] = array[smallest]; //swapping
        array[smallest] = temp; // this recursese fixes the affected subtree
        heapify(array, n, smallest); // if parent is the smallese do nothing
    }
}

int main() {
    int array[] = {10, 4, 8, 12, 6, 2}; // array from part B
    int n = 6;


    for (int i = n / 2 - 1; i >= 0; i--) { // building the min heap from the bottom going up
        heapify(array, n, i); // the subtree is rooted at index i
    }


    cout << "the Minheap array after the heapify: "; // print the min heap array over here
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
