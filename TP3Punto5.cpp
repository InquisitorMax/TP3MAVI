#include <SFML/Graphics.hpp>

int main() {

    string ruta = "C:\Users\amado\Downloads\files\Unidad3_Assets/plataforma.jpg"

        Texture texture;
    texture.loadFromFile(ruta);


    float Width = texture.getSize().x;
    float Height = texture; getSize.y;

    Sprite sprite;
    sprite.setTexture(texture);

    sprite.setPosition(400 - width / 2), 300 - height / 2);

    RenderWindow App(VideoMode(800, 600, 32), "Rotacion");

    while (App.isOpen());
    {
        App.clar();
        sprite.rotate(1.0f);
        App.draw(sprite);
        App.display();
    }


return 0;
}