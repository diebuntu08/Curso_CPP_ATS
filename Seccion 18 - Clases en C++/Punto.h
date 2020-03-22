// Declaración de una clase

class Punto {
    // Atributos
    // public: Puede ser accedido por cualquiera
    // private: Puede ser accedido solo por la misma clase y sus métodos
    protected: // Puede ser accedido solo por la misma clase o sus hijas y sus métodos
        int x, y;
    
    // Métodos
    public:
        Punto(int _x, int _y) { // Constructor1
            x = _x;
            y = _y;
        }

        Punto() { // Constructor2
            x = y = 0;
        }

        void setX(int valorX); // establecemos el valor de x
        void setY(int valorY); // establecemos el valor de y
        int getX(); // obtenemos el valor de x
        int getY(); // obtenemos el valor de y
};