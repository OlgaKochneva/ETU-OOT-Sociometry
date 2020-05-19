#ifndef RELATION_H
#define RELATION_H

#include <string>

template<class T>
class SocialEntity;

enum Type{
    POSITIVE,
    NEGATIVE,
    NEUTRAL
};

template<class T>
class Relation{

public:
    Relation(SocialEntity<T>* first, SocialEntity<T>* second, Type type);
    SocialEntity<T>* getFirstEntity();
    SocialEntity<T>* getSecondEntity();

//    void setFirstEntity(Entity* entity);
//    void setSecondEntity(Entity* entity);

    void setDescription(const std::string& descr);
    std::string getDescription() const;

    void setType(Type type);
    Type getType();

    bool operator==(const Relation& other);

private:
    std::string description; //not necessary
    Type type;
    SocialEntity<T>* firstEntity;
    SocialEntity<T>* secondEntity;
};

template<class T>
Relation<T>::Relation(SocialEntity<T>* first, SocialEntity<T>* second, Type type) {
    this->type = type;
    firstEntity = first;
    secondEntity = second;
}

template<class T>
bool Relation<T>::operator==(const Relation<T>& other) {
    return this->type == other.type
           && *this->firstEntity == *other.firstEntity
           && *this->secondEntity == *other.secondEntity;
}

template<class T>
SocialEntity<T>* Relation<T>::getFirstEntity() {
    return firstEntity;
}

template<class T>
SocialEntity<T>* Relation<T>::getSecondEntity() {
    return secondEntity;
}

template<class T>
void Relation<T>::setDescription(const std::string &descr)
{
    this->description = descr;
}

template<class T>
std::string Relation<T>::getDescription() const
{
   return this->description;
}

template<class T>
void Relation<T>::setType(Type type) {
    this->type = type;
}

template<class T>
Type Relation<T>::getType() {
    return this->type;
}

#endif // RELATION_H
