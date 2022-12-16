using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Professor_Coordenador
{
    class professor
    {
        // Fields
        private float _vlrAula;
        private int _qtAulas;

        // Properties
        public float vlrAula
        {
            set
            {
                if (value > 220)
                    _vlrAula = 220;
                else
                  if (value < 15)
                    _vlrAula = 15;
                else
                    _vlrAula = value;
            }
            get { return _vlrAula; }
        }
        public int qtAulas
        {
            set
            {
                if (value > 40)
                    _qtAulas = 40;
                else
                    if (value < 4)
                    _qtAulas = 4;
                else
                    _qtAulas = value;
            }
            get { return _qtAulas; }
        }
        public virtual float salario
        {
            get
            {
                return qtAulas * vlrAula * 1.25f;
            }
        }

        // Methods
        public void reajustarValorHora(float x)
        {
            vlrAula += vlrAula * x / 100;
        }

        // Constructors
        public professor()
        {
            _qtAulas = 4;
            _vlrAula = 15;
        }
        public professor(int qtdH, float vlrH)
        {
            qtAulas = qtdH;
            vlrAula = vlrH;
        }
    }
}
