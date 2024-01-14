class PunchedCard_FOD_GREEN : Lockpick
{

  void PunchedCard_FOD_GREEN()
  {
	
  };

	
    override void SetActions()
	{
	super.SetActions();
	RemoveAction(ActionUnlockDoors);
	RemoveAction(ActionLockDoors);		
	AddAction(ActionUnlockDoors_customBuilding001);  // add our new ones
	}


};
