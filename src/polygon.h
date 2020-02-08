class Polygon{
    public:
    int get_sides();
    double get_perimeter();
    void add_side(double x);

    private:
    double perimeter =0;
    int sides =0;
};