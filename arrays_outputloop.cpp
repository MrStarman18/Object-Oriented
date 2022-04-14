
//this for loop iterates through an array (fill in variable names) and outputs it.

for (int loopOne{ 0 }; loopOne < height; ++loopOne) // step through the rows in the array
{
    for (int loopTwo{ 0 }; loopTwo < width; ++loopTwo) // step through each element in the row
    {
        std::cout  << array[(loopOne*width) + loopTwo] << " ";
    }
    cout << '\n';
}