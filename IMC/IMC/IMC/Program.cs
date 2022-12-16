using System;

namespace IMC
{
	class Program
	{
		static void Main(string[] args)
		{
			
			
			Pessoa X;

			string n;
			double h,o;
			int id;

			Console.WriteLine("Nome: ");
			n = Console.ReadLine();
			Console.WriteLine("altura: ");
			h = double.Parse(Console.ReadLine());
			Console.WriteLine("Peso: ");
			o = double.Parse(Console.ReadLine());
			Console.WriteLine("Idade: ");
			id = int.Parse(Console.ReadLine());


			if (id >= 60)
			{
				Pessoa_Idosa i = new Pessoa_Idosa(h, n, o, id);
				X = i;
			}
			else
			{
				Pessoa p = new Pessoa(h, n, o);
				X = p;
			}

			Console.WriteLine("imc: {0} ", X.imc);
			Console.WriteLine("Nome: {0}", X.nome);
			Console.WriteLine("Diagnostico: {0}", X.diagnostico());
			Console.WriteLine("Diferença para Peso Ideal: {0}", X.massa());

			Console.ReadKey();


		}
	}
}
