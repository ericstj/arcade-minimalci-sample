#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace CppCliClassLibrarySample {
	public ref class Animal
	{
        static Dictionary<String^, String^>^ m_animalNoises = gcnew Dictionary<String^, String^>();

    public:
        static Animal()
        {
            m_animalNoises["cow"] = "moo";
            m_animalNoises["cat"] = "meow";
            m_animalNoises["dog"] = "woof";
        }

        static String^ SaysWhat(String^ animal)
        {
            animal = animal->ToLowerInvariant();
            if (m_animalNoises->ContainsKey(animal))
            {
                return m_animalNoises[animal];
            }

            return "";
        }
	};
}
