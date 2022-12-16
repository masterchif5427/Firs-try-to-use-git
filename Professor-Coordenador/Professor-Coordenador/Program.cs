using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Professor_Coordenador
{
    class Program
    {
        static void Main(string[] args)
        {
            professor f = new professor();
            coordenador c = new coordenador();

            f.qtAulas = 20; f.vlrAula = 100;
            c.qtAulas = 20; c.vlrAula = 100;
            
            Console.WriteLine("Salário do Professor: {0:c}", f.salario);
            Console.WriteLine("Salário do Coordenador: {0:c}", c.salario);

            Console.ReadKey();
        }
    }
}
