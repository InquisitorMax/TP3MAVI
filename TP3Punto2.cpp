#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main() {
    Texture blanco, negro;
    Sprite sprite;

    string ruta_blanco = "C:\Users\amado\Downloads\files\Unidad3_Assets/chessw.png";
    string ruta_negro = "C:\Users\amado\Downloads\files\Unidad3_Assets/chessb.png";
    blanco.loadFromFile(ruta_blanco);
    negro.loadFromFile(ruta_negro);

    float height = blanco.getSize().y;
    float width = blanco.getSize().x;
    float escalaX, escalaY;
    escalaY = 100 / height;
    escalaX = 100 / width;
    sprite.setScale(escalaX, escalaY);

    RenderWindow App(sf::VideoMode(800, 800, 32), "Ajedrez");

    while (App.isOpen()) {
        Event event;
        while (App.pollEvent(event)) {
            if (event.type == Event::Closed)
                App.close();
        }

        App.clear(Color::White);

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {

                sprite.setTexture((i + j) % 2 == 0 ? blanco : negro);

                sprite.setPosition(i * 100, j * 100);
                App.draw(sprite);
            }
        }

        App.display();
    }

    return 0;
}
