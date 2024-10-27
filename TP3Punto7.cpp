#include <SFML/Graphics.hpp>

int main() {

    string ruta_rojo = "C:\Users\amado\Downloads\files\Unidad3_Assets /circulo_azul.jpg"


    Texture texture;
    texture.loadFromFile(ruta);
    Sprite sprite;
    sprite.setTexture(texture);

    float height = texture.getSize().y;
    float width = texture.getSize().x;

    sprite.setPosition(400 - (width / 2), 300 - (height / 2));

    RenderWindow App(VideoMode(800, 600, 32), "Transparencias");

    while (App.isOpen())
    {
        App.clear();

        App.draw(sprite;

        App.display();

    }


    return 0;
}