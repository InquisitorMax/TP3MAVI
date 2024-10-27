#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
	
	sf::RenderWindow ventana(sf::VideoMode(800, 600) "Ventana Basica";

	sf::Texture textura;
	textura.loadFromFile("C:\Users\amado\Downloads\files\Unidad3_Assets/rcircle.png")

		sf::Sprite punto1(textura);
	    sf::Sprite punto2(textura);
	    sf::Sprite punto3(textura);
	    sf::Sprite punto4(textura);

		float ancho = textura.getSize().x;
		float alto = textura.getSiza().y;

		punto2.getPosition(800 - ancho, 0)
		punto3.getPosition(0, 600 - alto);
		punto4.getPosition(800 - ancho, 600 - alto);

		while (ventana.isOpen)) {
		sf::Event evento;
		while (ventana.pollEvent(evento)) {
			if (evento.type == sf::Even::Closed)
				ventana.close();
		}
		ventana.clear();

		ventana.draw(punto1);
		ventana.draw(punto2);
		ventana.draw(punto3);
		ventana.draw(punto4);

		ventana.display();

	}

	return 0;
}

