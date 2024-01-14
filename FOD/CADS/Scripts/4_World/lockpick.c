modded class Lockpick
{
	void Lockpick()
	{
		m_MineDisarmRate = 90;
	}
	
	override void SetActions()
	{
	super.SetActions();		
	RemoveAction(ActionUnlockDoors);
	RemoveAction(ActionLockDoors);
	}
};
