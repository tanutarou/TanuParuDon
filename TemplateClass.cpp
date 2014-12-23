#include "TemplateClass.h"

template <class T>
TemplateClass<T>::TemplateClass(T* t){
    this->t = t;    
}

template <class T>
int TemplateClass<T>::getValue(){
    t->getValue();
}
