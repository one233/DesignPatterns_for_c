#include "factoryproducer.h"

Abstract_Factory *getFactory(const char *name)
{
    Abstract_Factory *factory;
    if (strcmp(name, "Animal") == 0)
    {
        factory = (Abstract_Factory *)malloc(sizeof(AnimalFactory));
        CreateAnimalFactory((AnimalFactory *)factory);
        return factory;
    }
    else if (strcmp(name, "Plant") == 0)
    {
        factory = (Abstract_Factory *)malloc(sizeof(PlantFactory));
        CreatePlantFactory((PlantFactory *)factory);
        return factory;
    }

    return NULL;
}
