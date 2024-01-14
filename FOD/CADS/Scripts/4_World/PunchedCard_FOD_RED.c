class PunchedCard_FOD_RED : Lockpick
{

  void PunchedCard_FOD_RED()
  {

  };

    override void SetActions()
	{
	super.SetActions();
	RemoveAction(ActionUnlockDoors);
	RemoveAction(ActionLockDoors);	
	AddAction(ActionUnlockDoors_customBuilding002);  // add our new ones
	}



};
