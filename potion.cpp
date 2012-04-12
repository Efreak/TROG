#include "potion.hpp"

static Potion PotionList[Potion::LAST_KEY] = {
Potion( "Watered-down healing potion",  Potion::HEAL_WATERY,    Potion::HEALING,    1,  4),
Potion( "Minor healing potion",         Potion::HEAL_MINOR,     Potion::HEALING,    2,  8),
Potion( "Light healing potion",         Potion::HEAL_LIGHT,     Potion::HEALING,    3,  12),
Potion( "Moderate healing potion",      Potion::HEAL_MODERATE,  Potion::HEALING,    4,  16),
};

Potion::Potion(const char *inName, Potion::Key inKey, Potion::Category inCat,
  int inMin, int inMax) {
    this->name = inName;
    this->key = inKey;
    this->category = inCat;
    this->minPOTENCY = inMin;
    this->maxPOTENCY = inMax;
}

Potion*
Potion::GetPotion(Potion::Key k) {
    return &PotionList[k];
}
