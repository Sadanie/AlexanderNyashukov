#pragma once
#include <iostream>

class Rational
{
public:
	Rational() {
		nominator = 0;
		denominator = 1;
	}
	Rational(Rational &_rat) {
		nominator = _rat.getNominator();
		denominator = _rat.getDenominator();
	}
	Rational(float _nominator, float _denominator) {
		nominator = _nominator / Gcd(_nominator, _denominator);
		denominator = _denominator / Gcd(_nominator, _denominator);
	}
	~Rational() {}
	Rational operator+(Rational& B) {
		return Rational(getNominator()*B.getDenominator() + B.getNominator()*getDenominator(), getDenominator()*B.getDenominator());
	}
	Rational operator-(Rational& B) {
		return Rational(getNominator()*B.getDenominator() - B.getNominator()*getDenominator(), getDenominator()*B.getDenominator());
	}
	Rational operator*(Rational& B) {
		return Rational(getNominator()*B.getNominator(), getDenominator()*B.getDenominator());
	}
	Rational operator/(Rational& B) {
		return Rational(getNominator()*B.getDenominator(), getDenominator()*B.getNominator());
	}
	Rational & operator=(Rational& B) {
		nominator = B.getNominator();
		denominator = B.getDenominator();
	}
	float getNominator() const { return nominator; }
	float getDenominator() const { return denominator; }
	static float Gcd(float _nominator, float _denominator) {
		double a = abs(_nominator);
		double b = abs(_denominator);

		while (true) {
			a = remainder(a, b);
			if (a == 0) {
				return b;
			}
			b = remainder(b, a);
			if (b == 0) {
				return a;
			}
		}
	}
	static void printRational(Rational& A) {
		std::cout << "Ответ: " << A.getNominator() << "/" << A.getDenominator() << std::endl;
	}
	static Rational y1(Rational x) {
		return Rational( x * x * Rational(22,10) + x - Rational(1,1));
	}
	static float y2(float x) {
		return 2.2 * x * x + x - 1;
	}
private:
	float nominator;
	float denominator;
};




