#include "Roulette.hpp"

using namespace std;

int Roulette::AddName(std::string name, int value)
{
    Roulette::m_names.push_back(name);
    Roulette::m_values.push_back(value);

    return 0;
}

int Roulette::UpdateName(std::string name, int value)
{
    return 0;
}

int Roulette::MaxValue()
{
    int res(0);
    for (int i(0); i < Roulette::m_values.size(); ++i)
    {
        res += Roulette::m_values[i];
    }

    return res;
}

string Roulette::Spin()
{
    int nbAleat(rand()%Roulette::MaxValue());

    int iRes(-1);
    while(nbAleat > 0)
    {
        ++iRes;
        nbAleat -= Roulette::m_values[iRes];
    }

    return Roulette::m_names[iRes];
}

