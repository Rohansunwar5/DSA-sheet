std => standart template library 

basically compilation of algo, itreators, containers;

std is divided into 4 parts
1.algorithms 
2.containers
3.functions 
4.itreators => points to the memory where element is lying in the computer 

itreator functions => begin (), end(), rend(), rbegin()

end() => will point to the memory address after the last element present in the vector not the last element, only after once decrement -- will it point on the last element of the vector


vector is a container that is dynamic in nature, we can always increase the size 

list is also a container dynamic in nature 

list contains front operations too
internal operations in list is doubly linked list 
whereas internal operations in vector is singly linked list 

in stack all operations are O(1) => constant time

in queue all operations are O(1) => constant time

in priority queue push ,pop => logn , top => O(1);

set stores in sorted order and unique values

in set operations => logN

unordered set => O(1) => all functions are same only lower bound and upper bound does not work