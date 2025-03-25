
---

## **`REPORT.md` (For Theory & Analysis)**  
```markdown
# **Pointer Sorting Algorithm - Report**

## **Submitted by**  
**Name:** Samuel Diriba  
**Group:** 2  
**ID:** RNS-9464/23  

---

## **1. Introduction**  
Pointer sorting is an **indirect sorting method** where an array of pointers (or indices) is sorted instead of the actual data. This approach is useful when sorting **large objects**, as rearranging pointers is more efficient than swapping entire data structures.  

In this assignment, we implement pointer sorting using **three different sorting algorithms**:  
- **Selection Sort**  
- **Quick Sort**  
- **Merge Sort**  

We analyze their **time complexity, space complexity**, and compare their performance.  

---

## **2. Implementation Approach**  
Instead of sorting the actual array elements, we maintain an **array of pointers** pointing to the elements. The sorting algorithms operate on the pointers, ensuring that the data remains **unchanged** while achieving the correct order.  

### **Sorting Algorithms Used:**  

1. **Selection Sort** – Repeatedly finds the smallest element and swaps it to its correct position.  
2. **Quick Sort** – Uses a pivot element to partition the array into smaller parts and sorts them recursively.  
3. **Merge Sort** – Divides the array into halves, sorts them recursively, and merges them back together.  

---

## **3. Complexity Analysis**  

| Sorting Algorithm  | **Best Case (Ω)** | **Average Case (Θ)** | **Worst Case (O)** | **Space Complexity** | **Stable?** |
|--------------------|------------------|------------------|------------------|----------------|------------|
| **Selection Sort** | O(n²) | O(n²) | O(n²) | O(1) | No |
| **Quick Sort** | O(n log n) | O(n log n) | O(n²) (rare) | O(log n) (recursive) | No |
| **Merge Sort** | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |

### **Key Observations**  
- **Selection Sort** is inefficient for large datasets but works well for small arrays.  
- **Quick Sort** is generally the fastest but has a worst-case of O(n²) if not optimized.  
- **Merge Sort** is consistent and stable but requires extra memory for merging.  

---

## **4. Summary of Findings**  
1. **Pointer sorting is useful when sorting large objects** since it avoids unnecessary copying/swapping.  
2. **Quick Sort is the most efficient for general cases**, but **Merge Sort is better for stable sorting**.  
3. **Selection Sort is not practical for large data** due to its O(n²) complexity.  
4. The choice of sorting algorithm depends on **whether stability, speed, or memory efficiency is prioritized**.  

--- 
