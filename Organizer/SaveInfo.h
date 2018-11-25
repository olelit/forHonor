#pragma once
#include "Noty.h"
#include "notebook.h"
#include "phoneInfo.h"

public ref class SaveInfo
{
public:
	SaveInfo();

	System::Collections::Generic::List<Noty^>^ notysList;
	System::Collections::Generic::List<phoneInfo^>^ phoneList;
	System::Collections::Generic::List<notebook^>^ notebookList;

	void Serialize(System::String ^ name)
	{
		System::String ^ strFilename = System::IO::Directory::GetCurrentDirectory() + "\\"+name;
		System::IO::FileStream ^ stmCourses = gcnew System::IO::FileStream(strFilename,
			System::IO::FileMode::Create,
			System::IO::FileAccess::Write);
			System::Runtime::Serialization::Formatters::Binary::BinaryFormatter ^ bfmCourse = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter;
			if (name == "noty.sct") {
				bfmCourse->Serialize(stmCourses, notysList);
			}
			if (name == "phone.sct") {
				bfmCourse->Serialize(stmCourses, phoneList);
			}
			if (name == "notebook.sct") {
				bfmCourse->Serialize(stmCourses, notebookList);
			}
			stmCourses->Close();
	}

	void Deserialize(System::String ^ name) {
		if (name == "noty.sct") {
			notysList = gcnew System::Collections::Generic::List<Noty^>;
		}
		if (name == "phone.sct") {
			phoneList = gcnew System::Collections::Generic::List<phoneInfo^>;
		}
		if (name == "notebook.sct") {
			notebookList = gcnew System::Collections::Generic::List<notebook^>;
		}

		System::String ^ Filename = System::IO::Directory::GetCurrentDirectory() + "\\"+name;
		if (System::IO::File::Exists(Filename) == true)
		{
			System::IO::FileStream ^ stmCourses = gcnew System::IO::FileStream(Filename,
				System::IO::FileMode::Open,
				System::IO::FileAccess::Read);
			try {
				System::Runtime::Serialization::Formatters::Binary::BinaryFormatter ^ bfmCourse = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter;

				if (name == "noty.sct") {
					notysList = (System::Collections::Generic::List<Noty^>^)bfmCourse->Deserialize(stmCourses);
				}
				if (name == "phone.sct") {
					phoneList = (System::Collections::Generic::List<phoneInfo^>^)bfmCourse->Deserialize(stmCourses);
				}
				if (name == "notebook.sct") {
					notebookList = (System::Collections::Generic::List<notebook^>^)bfmCourse->Deserialize(stmCourses);
				}

				stmCourses->Close();
			}

			catch (System::Exception^ e) {
				stmCourses->Close();
			}
		}
	}
};

