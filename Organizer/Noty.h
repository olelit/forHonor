#pragma once

	[System::SerializableAttribute]
	ref class Noty
	{
	public:
		Noty();

		System::String ^ Name;
		System::String ^ Title;
		System::DateTime dateStart;
		System::DateTime dateEnd;
		System::String ^ Text;
	};