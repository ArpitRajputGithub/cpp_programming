*Arrays*

-> Array?

    - data structure.
    - collection of similar DT. 
    - contagious in nature.

-> Syntax and declaration

    - data_type [size_of_array];

-> Initialization

    - eg. int arr[5] ={1,2,3,4,5};

-> Array's index starts from 0;

    - Total elements => a[i] + 1;

-> Accessing array
    - a[i];

-> Types of arrays 
    -1D array
    -2D array
    -3D array

-> Size of array 
    - sizeof(arr[]) / sizeof(arr[0]);

-> cout<<arr; and cout<<&arr; gives same result in cpp. Result is address of arr;

-> passing array to function

-> Arrays and pointers 
    - int* ptr = arr; (right)
    - int* ptr = &arr; (wrong)
    - int* ptr = arr[0]; (right)
    - int* ptr = &arr[0]; (wrong)

-> Vectors

    syntax - vector <int> vector_name;

    Functions -

    - v.push_back(n)            (pushes an element into the array/vector)
    - v.size()                  (size of the vector)
    - v.capacity()              (tells the capacity of the array)
    - v.popback()               (removes element from the back of the array)
    - v.at()                    (access elements at a particular index)
    - v.sort(v.begin(), v.end()) (sorts elements in ascending order)

    Passing vector to Functions -

    - Vectors are normally passed as value ie it create a copy of the vector in the function. So There will be no change in the actual vector. In order to pass as reference, use (&) operator in the arguments of the function.

    - This is opposite to Arrays.
