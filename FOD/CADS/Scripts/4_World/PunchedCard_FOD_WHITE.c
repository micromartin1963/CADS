class PunchedCard_FOD_WHITE : Lockpick
{

  void PunchedCard_FOD_WHITE()
  {
	
  };

	
    override void SetActions()
	{
	super.SetActions();
	RemoveAction(ActionUnlockDoors);
	RemoveAction(ActionLockDoors);	
	AddAction(ActionUnlockDoors_customBuilding004);  // add our new ones	
	}


};
