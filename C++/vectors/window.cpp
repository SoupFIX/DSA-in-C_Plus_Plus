#include<Window.hpp>

int main()
{
    // Create the window
    sf::Window window(sf::VideoMode(800, 600), "My Window");

    // Main loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear();

        // Update the window
        window.display();
    }

    return 0;
}
