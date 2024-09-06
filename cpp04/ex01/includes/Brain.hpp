#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& other);
        ~Brain();

        Brain& operator=(const Brain &other);

        std::string *getIdeas() const;
};

#endif