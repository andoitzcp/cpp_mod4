#ifndef BRAIN_H_
#define BRAIN_H_

#include <string>
class Brain
{
    public:
        Brain(void);
        Brain(std::string& type);
        Brain(const Brain& other);
        Brain operator=(const Brain& other);
        ~Brain(void);

        std::string getIdea(int index) const;
        void setIdea(const std::string idea, int index);

    private:
        std::string _ideas[100];
        std::string _type;
};


#endif // BRAIN_H_
