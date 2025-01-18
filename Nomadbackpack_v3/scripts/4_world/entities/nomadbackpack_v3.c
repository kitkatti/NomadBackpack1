class Nomadbackpack_v3_ColorBase extends Clothing
{
    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}    
        
        if (!this.IsEmpty())
        {
            return false;
        }
        
        return true;
    }
}
class Nomadbackpack_v3_BaseColor extends Nomadbackpack_v3_ColorBase{};
class Nomadbackpack_v3_AoR2 extends Nomadbackpack_v3_ColorBase{};
class Nomadbackpack_v3_Woodland extends Nomadbackpack_v3_ColorBase{};
class Nomadbackpack_v3_Winter extends Nomadbackpack_v3_ColorBase{};
class Nomadbackpack_v3_Blue extends Nomadbackpack_v3_ColorBase{};
class Nomadbackpack_v3_Grey extends Nomadbackpack_v3_ColorBase{};
class Nomadbackpack_v3_Green extends Nomadbackpack_v3_ColorBase{};
class Nomadbackpack_v3_Red extends Nomadbackpack_v3_ColorBase{};
class Nomadbackpack_v3_Yellow extends Nomadbackpack_v3_ColorBase{};