# Pointer--Sorting-Algorithms
Implementation of Pointer Sorting using Selection Sort, Quick Sort, and Merge Sort in C++. Includes complexity analysis and performance comparison.
# Pointer Sorting Algorithm in C++

## **Overview**  
This project implements **pointer-based sorting** using three different sorting algorithms:  
- **Selection Sort**  
- **Quick Sort**  
- **Merge Sort**  

Instead of sorting the actual data, the program sorts an **array of pointers referencing the elements**, keeping the original data unchanged.

---

## **How to Run the Code**  

### **1. Compile the Code**  
Use a C++ compiler like **g++**:  
```sh
g++ pointer_sort.cpp -o pointer_sort
2. Run the Program
./pointer_sort
3. Expected Output
The program will display:

Original Array

Sorted Array using Selection Sort

Sorted Array using Quick Sort

Sorted Array using Merge Sort

Code Explanation
Key Steps in the Code:
Pointer Array Creation: Instead of sorting actual elements, an array of pointers is created, pointing to the elements of the original array.

Sorting Pointers: The sorting algorithms only rearrange the pointers, leaving the original data intact.

Displaying Results: The program prints the array before and after sorting using different methods.

Advantages of Pointer Sorting:
✔ Efficient when sorting large objects (only pointers are moved).
✔ Prevents unnecessary data copying or swapping.

Files in This Repository   
File  Name	                                    Description
pointer_sort.cpp	                     C++ implementation of pointer sorting
README.md	                               How to run the code
REPORT.md                                  Theoretical explanation, complexity analysis, and findings