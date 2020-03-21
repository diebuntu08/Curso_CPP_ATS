// Declaración de una clase

class Punto {
    // Atributos
    private:
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
}