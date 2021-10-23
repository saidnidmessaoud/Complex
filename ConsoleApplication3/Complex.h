#pragma once
namespace arith {

	class Complex
	
	{
	private:
		double re;
		double img;

	public:// Complex init(double re, double img);
		   //constructeur
		   Complex(double r, double im);
		   Complex();
		   void afficher();
		   double module();
		   Complex conjugue();
		   Complex add(Complex a);
		   Complex sub(Complex a);
		   Complex pro(Complex a);
		   Complex div(Complex a);
		   
	};

};