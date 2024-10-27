#include <SFML/Graphics.hpp>

int main() {

    string ruta_rojo = "C:\Users\amado\Downloads\files\Unidad3_Assets / rojo.jpg"
        string ruta_amarillo = "C:\Users\amado\Downloads\files\Unidad3_Assets//amarillo.jpg"
        string ruta_azul = "C:\Users\amado\Downloads\files\Unidad3_Assets/azul.jpg"
        string ruta_negro = "C:\Users\amado\Downloads\files\Unidad3_Assets/negro.jpg"

    Texture t_rojo, t_amarillo, t_azul, t_negro;
    t_rojo.loadFromFile(ruta_rojo);
    t_amarillo.loadFromFile(ruta_amarillo);
    t_azul.loadFromFile(ruta_azul);
    t_negro.loadFromFile(ruta_negro);

    float w_negro_azul = t_negro.getSize().x; float h_negro_azul = t_negro.getSize().y;
    float w_amarillo = t_amarillo.getSize().x; float h_amarillo = t_amarillo.getSize()y.;
    float w_rojo = t_rojo.getSize().x, float h_rojo = t_rojo.getSize().y;

    float escalaY_negro_azul = h_rojo / h_negro_azul;
    float escalaX_negro_azul = w_rojo / w_negro_azul;
    float escalaY_amarillo = h_rojo / h_amarillo;
    float escalaX_amarillo = w_rojo / w_amarillo;

    Sprite s_rojo, s_amarillo, s_azul, s_negro;
    s_rojo.setTexture(t_rojo);
    s_amarillo.setTexture(t_amarillo);
    s_azul.setTexture(t_azul);
    s_negro.setTexture(t_negro) :

        s_amarillo.setScale(escalaX_amarillo, escalaY_amarillo);
    s_azul.setScale(escalaX_negro_azul, escalaY_negro_azul);
    s_negro.setScale(escalaX_negro_azul, escalaY_negro_azul);

    s_rojo.setPosition(400 - w_rojo, 300 - h_rojo);
    s_amarillo.setPosition(400, (300 - h_rojo));
    s_azul.setPosition((400 - w_rojo), 300);
    s_negro.setPosition(400, 300);

    RenderWindow App(VideoMode(800, 600, 32), "Cuadrados");

    while (App.isOpen())
    {
        App.clear();

        App.draw(s_rojo);
        App.draw(s_amarillo);
        App.draw(s_azul);
        App.draw(s_negro);


        App.display();

    }


    return 0;
}