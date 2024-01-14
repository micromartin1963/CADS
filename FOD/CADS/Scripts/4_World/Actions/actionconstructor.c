modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
		 
        actions.Insert(ActionUnlockDoors_customBuilding001); 
        actions.Insert(ActionUnlockDoors_customBuilding002); 
        actions.Insert(ActionUnlockDoors_customBuilding003); 
        actions.Insert(ActionUnlockDoors_customBuilding004);                    
    }
}