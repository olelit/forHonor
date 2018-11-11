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
		if (System::IO::File::Exists(Filename) == true)
		{
			System::IO::FileStream ^ stmCourses = gcnew System::IO::FileStream(Filename,
				System::IO::FileMode::Open,
				System::IO::FileAccess::Read);
			try {
				System::Runtime::Serialization::Formatters::Binary::BinaryFormatter ^ bfmCourse = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter;
				notysList = (System::Collections::Generic::List<Noty^>^)bfmCourse->Deserialize(stmCourses);
				stmCourses->Close();
			}

			catch (System::Exception^ e) {
				stmCourses->Close();
			}
		}
	}
};

