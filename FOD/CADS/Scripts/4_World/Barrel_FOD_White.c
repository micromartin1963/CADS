class Barrel_FOD_White extends Barrel_Green
{

bool m_hasBeenOpened = false;

	void Barrel_FOD_White()
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
	this.GetInventory().CreateInInventory("AK74_Black");
	m_hasBeenOpened = true;

	}

	override bool CanPutIntoHands( EntityAI parent )
	{
		return false;
	}


};
