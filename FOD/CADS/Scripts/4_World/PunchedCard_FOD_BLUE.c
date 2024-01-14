class PunchedCard_FOD_BLUE : Lockpick
{

  void PunchedCard_FOD_WHITE()
  {
	
  };

	
    override void SetActions()
	{
	super.SetActions();
	RemoveAction(ActionUnlockDoors);
	RemoveAction(ActionLockDoors);	
	AddAction(ActionUnlockDoors_customBuilding003);  // add our new ones
	}


};
