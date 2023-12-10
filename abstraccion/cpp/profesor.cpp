// Persona.h
#ifndef PERSONA_H
#define PERSONA_H

class Persona {
public:
    Persona(const std::string& nombre, int edad);
    std::string getNombre() const;
    int getEdad() const;
    void setNombre(const std::string& nombre);
    void setEdad(int edad);
private:
    std::string nombre;
    int edad;
};

#endif
