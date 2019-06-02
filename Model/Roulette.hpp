#ifndef ROULETTE_HPP
#define ROULETTE_HPP

#include <string>
#include <vector>

class Roulette
{
    public:
        /**
         * Ajoute un nom à la roulette
         * une valeur peut être ajoutée, sinon elle est à 1 par défaut
         */
        int AddName(std::string name, int value = 1);
        /**
         * Met à jour la valuer d'un nom de la roulette
         * une valeur peut être ajoutée, sinon elle est à 1 par défaut
         */
        int UpdateName(std::string name, int value = 1);

        /**
         * Choisi une valeur au hasard
         */
        std::string Spin();

    protected:

    private:
        int MaxValue();

        std::vector<std::string> m_names;
        std::vector<int> m_values;
};

#endif // ROULETTE_HPP
