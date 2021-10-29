#include <iostream>
#include <stdio.h>

class CRational {
private:
	int whole, numerator, denominator;
public:
	CRational(int num, int den) {
		numerator = num;
		if (den==0) 
        {
            std :: cout << "Error\n";
            exit(0);
        }
        else
            denominator = den;
	}
	CRational() {
        numerator = 1;
        denominator = 1;
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
		return CRational(num, den);
	}

	CRational Sum(CRational otherCRational) {
        int num = numerator*otherCRational.denominator + otherCRational.numerator*denominator;
        int den = denominator*otherCRational.denominator;
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
		else if ((denominator == 1))
			std :: cout << numerator << "\n";
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