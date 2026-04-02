class MathOps {
public:
    static int pow(int base, int exp) {
        int result = 1;
        for (int i = 0; i < exp; i++)
            result *= base;
        return result;
    }

    static double pow(double base, double exp) {
        return std::pow(base, exp); // from <cmath>
    }
};