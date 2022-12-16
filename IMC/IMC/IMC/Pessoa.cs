using System;
using System.Collections.Generic;
using System.Text;

namespace IMC
{
	class Pessoa
	{
		private double _altura;
		private string _nome;
		private double _peso;


		public double altura
		{
			get { return _altura; }
			set { _altura = value; }
		}
		public string nome
		{
			get { return _nome; }
			set { _nome = value; }
		}
		public double peso
		{
			get { return _peso; }
			set { _peso = value; }
		}
		public double imc
		{
			get { return peso / (altura * altura); }
		}

		public virtual string diagnostico()
		{
			if (imc < 17)
				return "Muito abaixo do peso !!!";
			else 
				if (imc  < 18.5 )
				return "Abaixo do peso !!!";
			else
				if (imc < 25 )
				return "No peso ideal !!!";
			else 
				if (imc < 30 )
				return "Acima do peso !!!";
			else
				if (imc  < 35 )
				return "Obeso 1 !!!";
			else
				if (imc < 40)
				return "Obeso 2 !!!";
			else 
				return "Obesão !!!";
		}
		public virtual double massa()
		{
			double pesoIdeal = 0;
			if (imc < 18.5)
				pesoIdeal = Math.Pow(altura, 2) * 18.5 - peso;
			else
				if (imc >= 25)
				pesoIdeal = peso - Math.Pow(altura, 2) * 25;
			return pesoIdeal;
		}
		public Pessoa()
		{
			altura = 0;
			nome = "";
			peso = 0;
		}
		public Pessoa(double x,string y,double z)
		{
			altura = x;
			nome = y;
			peso = z;
		}
	}
}
