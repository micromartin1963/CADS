class Barrel_FOD_Blue extends Barrel_Green
{

bool m_hasBeenOpened = false;

	void Barrel_FOD_Blue()
	{

	};


	override void Open()
	{
		if (m_hasBeenOpened == true) return;

		m_Openable.Open();
		m_RainProcComponent.StartRainProcurement();
		SoundSynchRemote();
		SetTakeable(false);
		
		UpdateVisualState();
	this.GetInventory().CreateInInventory("AKS74U_Black");
	m_hasBeenOpened = true;

	}

	override bool CanPutIntoHands( EntityAI parent )
	{
		return false;
	}

};
