/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ivan
 *
 * Created on 30 de noviembre de 2017, 14:51
 */

#include <cstdlib>
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "iostream"
#include <list>
#include <vector>
#include "enemigo.h"
#include "nodo.h"
using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "RavenV1");
    //sf::CircleShape shape(200.f);
    //shape.setFillColor(sf::Color::Green);
    //window.setVerticalSyncEnabled(false);
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(false);
    //std::list<enemigo> enemigos;
    std::vector<enemigo*> enemigos;
    enemigo e=enemigo();
    enemigo e2;
    e.inicio();
    e2.inicio();
    e2.mover(10.f,40.f);
    enemigos.push_back(&e);
    enemigos.push_back(&e2);
    nodo prueba=nodo(70.f,70.f);
    e.setdestino(&prueba);
    
    //enemigos[1].mover(10.f,40.f);
    //enemigos[0].mover(10.f,10.f);
    for (int i=0;i<enemigos.size();i++){
            enemigos[i]->inicio();
            //std::cout << enemigos[i]->getforma().getPosition().y << std::endl;
        }
    while (window.isOpen())
    {
        //e.update();
        /*for(std::list<enemigo>::iterator it=enemigos.begin(); it!=enemigos.end(); it++){
            (*it).update();
        }
         * */
        for (int i=0;i<enemigos.size();i++){
            enemigos[i]->update();
            //std::cout << enemigos[i].getforma().getRadius() << std::endl;
        }
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                //sf::Event::LostFocus/GainedFocus
                   
                case sf::Event::KeyPressed:
                    switch (event.key.code){
                        case sf::Keyboard::X:
                            std::cout << "Has pulsado X" << std::endl;
                            break;
                        
                        case sf::Keyboard::Num1:
                            std::cout << "Has pulsado 1" << std::endl;
                            break;
                        
                        case sf::Keyboard::Num2:
                            std::cout << "Has pulsado 2" << std::endl;
                            break;
                            
                        case sf::Keyboard::Num3:
                            std::cout << "Has pulsado 3" << std::endl;
                            break;
                            
                        case sf::Keyboard::Num4:
                            std::cout << "Has pulsado 4" << std::endl;
                            break;
                        
                        default:
                            break;
                    }
                    
                case sf::Event::MouseButtonPressed:
                    switch (event.mouseButton.button){
                        case sf::Mouse::Right:
                            std::cout << "Has hecho clic derecho" << std::endl;
                            std::cout << "ratón x: " << event.mouseButton.x << std::endl;
                            std::cout << "ratón y: " << event.mouseButton.y << std::endl;
                            break;
                        case sf::Mouse::Left:
                            std::cout << "Has hecho clic izquierdo" << std::endl;
                            std::cout << "ratón x: " << event.mouseButton.x << std::endl;
                            std::cout << "ratón y: " << event.mouseButton.y << std::endl;
                            break;
                        default:
                            break;
                    }
                
                /*
                case sf::Event::MouseMoved:
                    std::cout << "nueva x: " << event.mouseMove.x << std::endl;
                    std::cout << "nueva y: " << event.mouseMove.y << std::endl;
                    break;
                */  
                
                case sf::Event::MouseLeft:
                    std::cout << "El cursor ha salido" << std::endl;
                    break;
                
                case sf::Event::MouseEntered:
                    std::cout << "El cursor ha entrado" << std::endl;
                    break;
                    
                default:
                    break;
            }
        }

        /////////////////////////
        //DIBUJADO
        ////////////////////////
        window.clear(sf::Color::White);
        //window.draw(shape);
        /*
        if(e.draw()){
            window.draw(e.getforma());
        }
         * */
        //e.draw(window);
        //window.draw(e.getforma());
        //std::cout << e.getforma().getPosition().x << std::endl;
        
        /*for(std::list<enemigo>::iterator it=enemigos.begin(); it!=enemigos.end(); it++){
            
            enemigo eaux=(*it);
            sf::CircleShape aux= eaux.getforma();
            window.draw(aux);
            //std::cout << (*it).getforma().getPosition().x << std::endl;
        }
        */
        for(int i=0;i<enemigos.size();i++){
            //enemigo aux=enemigos[i];
            //sf::CircleShape caux=aux.getforma();
            window.draw(enemigos[i]->getforma());
           
            //std::cout << enemigos[i].getforma().getPosition().x << std::endl;
            //std::cout << enemigos[i].getforma().getRadius() << std::endl;
            //std::cout << caux.getRadius() << std::endl;
            //std::cout << e.getforma().getRadius() << std::endl;
            
        }
       window.display();
         
    }

    return 0;
}
