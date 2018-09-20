#pragma once
#include "Noty.h"

public ref class SaveInfo
{
public:
	SaveInfo();

	System::Collections::Generic::List<Noty^>^ notysList;

	void Serialize()
	{
		System::String ^ strFilename = System::IO::Directory::GetCurrentDirectory() + "\\noty.sct";
		// Create a file stream to hold the list of courses
		System::IO::FileStream ^ stmCourses = gcnew System::IO::FileStream(strFilename,
			System::IO::FileMode::Create,
			System::IO::FileAccess::Write);
		System::Runtime::Serialization::Formatters::Binary::BinaryFormatter ^ bfmCourse = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter;
		bfmCourse->Serialize(stmCourses, notysList);
		stmCourses->Close();
	}

	void Deserialize() {
		notysList = gcnew System::Collections::Generic::List<Noty^>;
		System::String ^ Filename = System::IO::Directory::GetCurrentDirectory() + "\\noty.sct";

		// Make sure the file exists
		if (System::IO::File::Exists(Filename) == true)
		{
			// if so, create a file stream
			System::IO::FileStream ^ stmCourses = gcnew System::IO::FileStream(Filename,
				System::IO::FileMode::Open,
				System::IO::FileAccess::Read);
			// Create a binary formatter
			System::Runtime::Serialization::Formatters::Binary::BinaryFormatter ^ bfmCourse = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter;
			// If some courses were created already,
			// get them and store them in the collection
			notysList = (System::Collections::Generic::List<Noty^>^)bfmCourse->Deserialize(stmCourses);
			stmCourses->Close();
		}
	}
};

