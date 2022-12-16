using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ACME
{
    class promotorExtra:promotor
    {
        // Properties
        public float bonusTransporte
        {
            get { return 20 * qtDias; }
        }
        public override float salario
        {
            get { return base.salario + bonusTransporte; }
        }

        // Constructors
        public promotorExtra() : base() { }
        public promotorExtra(int q, float vlr, string n) : base(q, vlr, n) { }
    }
}
