#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

    enum class flavor{
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(double a, double b, double c);

}  // namespace triangle

#endif  // TRIANGLE_H