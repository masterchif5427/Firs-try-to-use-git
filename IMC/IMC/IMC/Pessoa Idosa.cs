using System;
using System.Collections.Generic;
using System.Text;

namespace IMC
{
	class Pessoa_Idosa : Pessoa
	{
		private int _idade;

		public int idade
		{
			get { return _idade; }
			set { _idade = value; }
		}

		public override string diagnostico()
		{
				if (imc < 20)
				return "Abaixo do peso !!!";
			else
				if (imc < 25)
				return "No peso ideal !!!";
			else
				return "Acima do peso !!!";
		}
		public override double massa()
		{
			double pesoIdeal = 0;
			if (imc < 20)
				pesoIdeal = Math.Pow(altura, 2) * 20 - peso;
			else
				if (imc >= 25)
				pesoIdeal = peso - Math.Pow(altura, 2) * 25;
			return pesoIdeal;
		}

		public Pessoa_Idosa() : base()
		{
			idade = 0;
		}
		public Pessoa_Idosa(double x, string y, double z,int i): base (x,y,z)
		{
			idade = i;
		}
	}
}
