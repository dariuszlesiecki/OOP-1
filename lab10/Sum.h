#include "Data.h"

class Sum{
    public:
    Sum(const double &s):_suma(s){}
    double value() const;
    void operator()(const double&);

    private:
    double _suma=0;
    
};

Sum sumData(const Data &d);