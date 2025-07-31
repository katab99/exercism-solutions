#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

    enum class flavor{
        equilateral,
        isosceles,
        scalene
    };
    
    bool inequality_violation(double a, double b, double c);
    bool all_zero(double a, double b, double c);
    flavor kind(double a, double b, double c);

}  // namespace triangle

#endif  // TRIANGLE_H