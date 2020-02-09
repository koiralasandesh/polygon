class Polygon{
    public:
    int get_sides();
    double get_perimeter();
    double get_area(double apothem);
    void add_side(double length);

    private:
    double _perimeter =0;
    int _sides =0;
    double _area =0;

};