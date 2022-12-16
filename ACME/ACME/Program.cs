using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ACME
{
    class Program
    {
        static void Main(string[] args)
        {
            promotor A = new promotor();
            supervisor B = new supervisor();
            promotorExtra C = new promotorExtra();

            A.qtDias = 3; A.valorDiaria = 19.37f; A.nome = "Marcelo";
            B.qtDias = 3; B.valorDiaria = 19.37f; B.nome = "João";
            C.qtDias = 3; C.valorDiaria = 19.37f; C.nome = "Felipe";

            Console.WriteLine("Salário do Promotor {0} : {1:c}", A.nome, A.salario);
            Console.WriteLine("\nSalário do Supervisor {0} : {1:c}", B.nome, B.salario);
            Console.WriteLine("\nSalário do Promotor Extra {0} : {1:c}", C.nome, C.salario);

            Console.ReadKey();
        }
    }
}
