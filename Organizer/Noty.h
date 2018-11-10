#pragma once

	[System::SerializableAttribute]
	ref class Noty
	{
	public:
		Noty();

		int Id;
		System::String ^ Name;
		System::String ^ Title;
		System::DateTime dateStart;
		System::DateTime dateEnd;
		System::String ^ Text;
	};