class dayz_house_test4 extends Building
{
    void dayz_house_test4()
    {
    Building thisBuilding;
    thisBuilding = this; 
    LockDoor(thisBuilding);
    };

    void ~dayz_house_test4()
    {
        
    };

	void LockDoor(Building building)
	{
			int doorIndex = building.GetDoorIndex(0);
			if ( doorIndex != -1 )
			{
			 building.LockDoor(doorIndex);                            
			};			
	};

};