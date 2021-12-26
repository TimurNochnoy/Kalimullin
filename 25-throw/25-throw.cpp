#include <iostream>
#include <stdio.h>
#include <typeinfo>

class CRational {
private:
	int numerator, denominator;
public:
	CRational(int num, int den) {
		numerator = num;
		/*if (den==0) 
        {
            std :: cout << "Error\n";
            exit(0);
        }
        else
            denominator = den;*/

		try {
			if (den == 0)
				throw 1;
		}
		catch(int except) {
			std :: cout << "Error: division by zero\n";
		}

		denominator = den;
	}
	CRational() {
        numerator = 1;
        denominator = 1;

		try {
			if (numerator == 0)
				throw 2;
		}
		catch(int except) {
			std :: cout << "Error: invalid default fraction\n";
		}
    }

	int GreatestCommonDivisor (int a, int b) {
		if (b == 0)
			return a;
		else
			return GreatestCommonDivisor (b, a % b);
	}

	CRational Reduce() {
		int num = numerator/GreatestCommonDivisor(abs(numerator), denominator);
		int den = denominator/GreatestCommonDivisor(abs(numerator), denominator);
		try {
			if (typeid(den) != typeid(1))
				throw 3;
		}
		catch(int except) {
			std :: cout << "Error: type mismath\n";
		}
		return CRational(num, den);
	}

	CRational Sum(CRational otherCRational) {
        int num = numerator*otherCRational.denominator + otherCRational.numerator*denominator;
        int den = denominator*otherCRational.denominator;
		try {
			if (num != numerator*otherCRational.denominator + otherCRational.numerator*denominator)
				throw 4;
		}
		catch(int except) {
			std :: cout << "Error: numerator miscalculated\n";
		}
		return CRational(num, den).Reduce();
    }

	CRational Difference(CRational otherCRational) {
        int num = numerator*otherCRational.denominator - otherCRational.numerator*denominator;
        int den = denominator*otherCRational.denominator;
		return CRational(num, den).Reduce();
    }

	CRational Product(CRational otherCRational) {
        int num = numerator*otherCRational.numerator;
        int den = denominator*otherCRational.denominator;
		return CRational(num, den).Reduce();
    }

	CRational Division(CRational otherCRational) {
        int num = numerator*otherCRational.denominator;
        int den = denominator*otherCRational.numerator;
		try {
			if (den != denominator*otherCRational.numerator)
				throw 5;
		}
		catch(int except) {
			std :: cout << "Error: denominator miscalculated\n";
		}
		return CRational(num, den).Reduce();
    }

	void Print() {
		if ((denominator != 1) && (abs(numerator) < denominator)) 
            std :: cout << numerator << "/" << denominator << "\n";
		else if ((denominator != 1) && (numerator > denominator)) {
			std :: cout << GreatestCommonDivisor(numerator, denominator) << " " << numerator - GreatestCommonDivisor(numerator, denominator)*denominator << "/" << denominator << "\n";
		}
		else if ((denominator != 1) && (numerator < -denominator)) {
			std :: cout << -GreatestCommonDivisor(-numerator, denominator) << " " << -(numerator + GreatestCommonDivisor(-numerator, denominator)*denominator) << "/" << denominator << "\n";
		}
		else if ((denominator == 1)) {
			std :: cout << numerator << "\n";
			try {
				if (denominator != 1)
					throw 6;
			}
			catch(int except) {
				std :: cout << "Error: incorrect output\n";
			}
		}
	}

};

int main() {
	CRational a(1, 4);
    CRational b(6, 4);
    CRational c;

    c = a.Sum(b);
	c.Print();

    c = a.Difference(b);
	c.Print();

    c = a.Product(b);
	c.Print();

    c = a.Division(b);
	c.Print();

	b.Reduce().Print();

	return 0;
}