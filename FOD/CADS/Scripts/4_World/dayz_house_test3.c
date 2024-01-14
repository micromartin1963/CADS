class dayz_house_test3 extends Building
{
    void dayz_house_test3()
    {
    Building thisBuilding;
    thisBuilding = this; 
    LockDoor(thisBuilding);
    };

    void ~dayz_house_test3()
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