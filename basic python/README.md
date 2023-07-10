# Basic Python Functions

Here I just code some basic Python functions in C++. Nothing more.

## Split

I have created a pointer returning function for that. It takes 2 arguments, First one is the string to be splitted, second one is the character to split by. Second argument is of type char.

Returned "list" is created on the heap, so it should be deleted after use.

Getting the length as an argument may be arguably faster, but I wanted to implement this in a more primitive way. I may have used only chars not std::strings for that reason but it is C++ at the end of the day, not C. And using std::vector is another way to go that I didn't bother to do.

This function also puts a null termination character at the end, as in accordance with the below funciton.

## Join

This function implements null termination character to stop the loop. Only important point is that.

Same as above, getting the length as an argument may be faster. But in Python, you do not input the length, code does all of that stuff for you. And this tries to be a Python analogue.
