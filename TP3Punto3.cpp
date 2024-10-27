#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main() {

    Sprite sprite_fondo;
    sprite_fondo.setTexture(textura_fondo);

    string ruta = "C:\Users\amado\Downloads\files\Unidad3_Assets/fondo.jpg";
   
    Texture textura_fondo;
    textura_fondo.loadFromFile("fondo.jpg")

    float escalaX, escalaY;
    escalaY = 600.0f / textura_fondo.getSize().y;
    escalaX = 800.0f / textura_fondo.getSize().x;
    sprite_fondo.setScale(escalaX, escalaY);

    RenderWindow Ventana(sf::VideoMode(800, 800), "Fondo del Juego");

    while (Ventana.isOpen()) {
        Event evento;
        while (Ventana.pollEvent(evento)) {
            if (evento.type == Event::Closed)
                ventana.close();
        }

        Ventana.clear();

        Ventana.draw(sprite_fondo);
        
        Ventana.display();
    }

    return 0;
}
