#include "fighter.h"
#include "head.h"


int Fighter::Attack(Fighter* f)
{
    int attack_rst = _attr[PLY_ATTR_ATTACK] - f->_attr[PLY_ATTR_DEFENSE];
    LOG(INFO)<<" attack rst"<<attack_rst;
    if(attack_rst > 0)
    {
        f->SetHp(attack_rst); 
    }
    return 0;
}

int Fighter::MagicAttack(Fighter* f,int skill_id)
{
    return 0;
}
 
