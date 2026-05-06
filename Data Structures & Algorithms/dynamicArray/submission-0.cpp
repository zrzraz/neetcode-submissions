class DynamicArray {
    //create private variables which can be accessed by all
private:
    int* arr; //pointers are used when a function needs
    //to modify the content of a variable, 
    //but it does not have ownership
    int capacity;
    int size;

// capacity = number of seats in a bus
// size = number of passengers
// arr = the bus itself
public:

    DynamicArray(int capacity) {
        //initialize an empty array with capacity of capacity
        this->capacity = capacity;
        //set the object's capacity equal to the value in int capacity
        this->size = 0;

        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        // i'd do this if arr was a vector but arr is a pointer
        // return arr.insert(arr.begin + i, n);

        arr[i] = n;
    }

    void pushback(int n) {
        //return arr.push_back(n);
        // if the array is full, we should resize
        if (size == capacity) {
            resize();
        }

        arr[size] = n;
        size++;
    }

    int popback() {
        // return arr.back();
        size--;
        return arr[size];
    }

    void resize() {
        //double the capacity
        this->capacity = capacity*2;
        //resize the new array
        int* newArr = new int[capacity];
        //copy all previous elements into the new arr with more capacity

        for (int i = 0; i <= capacity; i++) {
            newArr[i] = arr[i];
        }

        //delete old array to free up space

        delete[] arr;
        arr = newArr;

    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
