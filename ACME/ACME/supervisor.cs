using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ACME
{
    class supervisor:promotor
    {
        // Properties
        public override float salario
        {
            get { return base.salario + base.salario * 0.05f * qtDias; }
        }

        // Constructors
        public supervisor() : base() { }
        public supervisor(int q, float vlr, string n) : base(q, vlr, n) { }
    }
}
