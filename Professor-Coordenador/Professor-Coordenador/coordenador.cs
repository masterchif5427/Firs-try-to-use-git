using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Professor_Coordenador
{
    class coordenador:professor
    {
        // -----------------------------------
        // O salário de um coordenador é calculado 
        // como um professor, porém, tem um 
        // acréscimo de 10%
        // -----------------------------------

        // Properties
        public override float salario
        {
            get { return base.salario * 1.10f; }
        }

        // Methods
        // chama o construtor da classe "pai"
        public coordenador() : base() { }
        public coordenador(int q, float v) : base(q, v) { }
    }
}
