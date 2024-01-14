modded class ActionUnlockDoorsCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNLOCK);
	}
};

class ActionUnlockDoors_customBuilding003: ActionContinuousBase
{
	void ActionUnlockDoors_customBuilding003()
	{
		m_CallbackClass = ActionLockDoorsCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_Text = "#unlock";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTCursor;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;
		//if( IsDamageDestroyed(action_data.m_Target) ) return false;
		if( !IsBuilding(target) ) return false;
		if( !IsInReach(player, target, UAMaxDistances.DEFAULT) ) return false;
	//	Print(target.GetObject().ToString());
		if(target.GetObject().ToString().Contains("dayz_house_test3"))
		{
			// do nothing
		}
		else
		{
		return false;  // ------------------------------------------			
		}


		Building building;
		if( Class.CastTo(building, target.GetObject()) )
		{
			int doorIndex = building.GetDoorIndex(target.GetComponentIndex());
			if ( doorIndex != -1 )
				return building.IsDoorLocked(doorIndex);
		}		
		return false;
	}

	protected void UnlockDoor(ActionTarget target)
	{
		Building building;

		if ( Class.CastTo(building, target.GetObject()) )
		{
			int doorIndex = building.GetDoorIndex(target.GetComponentIndex());
			if ( doorIndex != -1 )
			{
				building.UnlockDoor(doorIndex);
				vector place = building.GetPosition();
				SpawnLootInside(place);					
			}
		}
	}

	void SpawnLootInside(vector place)
    {
    //Print(place.ToString());
    place[0] = place[0] + 3.0;  // put offset as a define 
	place[1] = place[1] + 0.17;
    string str  = "Barrel_FOD_Blue";
	GetGame().CreateObject(str, place);
    };

	override void OnFinishProgressServer( ActionData action_data )
	{	
		UnlockDoor(action_data.m_Target);
		
		//Damage the Lockpick
		//float dmg = action_data.m_MainItem.GetMaxHealth() * 0.04; //Multiply max health by 'x' amount depending on number of usages wanted (0.04 = 25)
		
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
		
		float skillLevel = action_data.m_Player.GetSoftSkillsManager().GetSpecialtyLevel();	
		float appliedDamage = 5 + 2*skillLevel; 
		MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 125.00);
		
	}
};