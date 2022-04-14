class Point 
{
    int x, y;   //can't be accessed directly

public:         //methods allow x & y values of each Point to be accessed.
    double length_as_vector();

    void move() //parameters aren't needed, since it can access Point's member variables.
    {
        x++;
        y++;
    }           //scope of x & y ends.
};

int main()
{
    Point a;
    
    a.move();   //calls move for a's x and y values.
}