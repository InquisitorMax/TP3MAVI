#include <SFML/Graphics.hpp>
#include <vector>

int main() {

    Texture texture;
    vector<Sprite> sprites;
    string ruta = "C:\Users\amado\Downloads\files\Unidad3_Assets/plataforma.jpg"

        RenderWindow App(VideoMode(800, 600, 32), "Plataformas");

    while (App.isOpen())
    {
        App.clear();

        for (auto sprite : sprites) {
            App.draw(sprite);
        }

        App.display();
    }

    float Width = texture.getSize().x;
    float Height = texture; getSize.y;


    for (int i = 0; i < 7; i++) {
        Sprite sprite;
        sprite.setTexture(texture);

        spite.setScale(0.15f, 0.2f * (i + 1));

        sprite.setPosition(i * ((width * 0.15f) + 20), 600 - (i + 1) * width * 0.15f);
        sprite.push_back(sprite);
    }

    Sprite sprite;
    sprite.setTexture(texture);

    sprite.setScale(0.2f * 7, 0.15f)

        sprite.setPosition(7 * ((width * 0.15f) + 20), height * 0.2f * 6.5f);
    sprites.push_back(sprite);
}


return 0;
}