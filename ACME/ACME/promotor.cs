using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ACME
{
    class promotor
    {
        // Fields
        private int _qtdias;
        private float _valorDiaria;
        private string _nome;

        // Properties
        public int qtDias
        {
            get { return _qtdias; }
            set { _qtdias = value; }
        }
        public float valorDiaria
        {
            get { return _valorDiaria; }
            set { _valorDiaria = value; }
        }
        public string nome
        {
            get { return _nome; }
            set { _nome = value; }
        }
        public virtual float salario
        {
            get { return qtDias * valorDiaria; }
        }

        // Constructors
        public promotor()
        {
            _qtdias = 0;
            _valorDiaria = 0;
            _nome = "";
        }
        public promotor(int q, float vlr, string n)
        {
            _qtdias = q;
            _valorDiaria = vlr;
            _nome = n;
        }
    }
}
