//VECTOR NOTES

//vectors are dynamic arrays where we can resize when inserting/deleting elements
//vectors also follow contiguous memory allocation

/*  BASIC OPERATIONS IN VECTORS */

//DECLARATION
//#include<vector>
//vector<data_type> vector_name;    or  vector<data_type> vector_name(size)  

//SIZE
//v.size()  gives the length

//RESIZE
//v.resize(newsize)

//CAPACITY
//v.capacity()  returns the memory utilised

// CAPACITY >= SIZE 

//ADD ELEMENTS AT THE END
//v.push_back(new_element)

//ADD ELEMENT AT THE MIDDLE AT ANY INDEX
//v.insert(position,element)    position is relative of starting or ending index
//v.insert(v.begin()+2,6);
//v.insert(v.end()-2,6);

//v.begin()     returns the starting index of the vector 
//v.end()     returns the ending index of the vector 

//DELETE ELEMENTS
//v.pop_back()      removes the element at the end
//v.erase(position)     removes the element at the given position

//DELETE ALL ELEMENTS
//v.clear()