#pragma once

#include <sstream>
#include "Event.hpp"
#include "Quark/KeyCodes.hpp"

namespace Quark
{
	/**
	 * @brief Base class for all keyboard related events
	 */
	class QUARK_API KeyEvent : public Event
	{
	public:
		/**
		 * @brief   Every keyboard event will contain a keycode
		 * 
		 * @returns Keycode of the interacted key
		 */
		inline Key GetKeyCode() const { return m_KeyCode; }

		EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)

	protected:
		/**
		 * @brief Create new keyboard event with the given keycode
		 */
		KeyEvent(Key keycode) :
			m_KeyCode(keycode) {}

		Key m_KeyCode;
	};


	/**
	 * @brief Event for when a key was pressed
	 */
	class QUARK_API KeyPressedEvent : public KeyEvent
	{
	public:
		/**
		 * @brief             Create a new event with the given parameters
		 * 
		 * @param keycode     Keycode of the pressed key
		 * @param repeatCount When the key is held down, the amount of "ticks" the key has been held for
		 */
		KeyPressedEvent(Key keycode, int repeatCount) :
			KeyEvent(keycode), m_RepeatCount(repeatCount) { }


		/**
		 * @brief   Gets the amount of ticks the key was held down for
		 * 
		 * @returns Number of key repetitions
		 */
		inline int GetRepeatCount() const { return m_RepeatCount; }

		/**
		 * @brief   Convenience function for printing event details
		 * 
		 * @returns Formatted string with event data
		 */
		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyPressedEvent: " << static_cast<int>(m_KeyCode) << "(" << m_RepeatCount << " repeats)";
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyPressed)

	private:
		int m_RepeatCount;
	};


	/**
	 * @brief Event for when a key was released
	 */
	class QUARK_API KeyReleasedEvent : public KeyEvent
	{
	public:
		/**
		 * @brief Create new event with given parameters
		 * 
		 * @param keycode Keycode of the released key
		 */
		KeyReleasedEvent(Key keycode) :
			KeyEvent(keycode) { }


		/**
		 * @brief   Convenience function for printing event details
		 * 
		 * @returns Formatted string with event data
		 */
		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyReleasedEvent: " << static_cast<int>(m_KeyCode);
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyReleased)
	};


	/**
	 * @brief Event for when a key was typed
	 */
	class QUARK_API KeyTypedEvent : public KeyEvent
	{
	public:
		/**
		 * @brief             Create a new event with the given parameters
		 *
		 * @param keycode     Keycode of the pressed key
		 */
		KeyTypedEvent(Key keycode) :
			KeyEvent(keycode) { }


		/**
		 * @brief   Convenience function for printing event details
		 *
		 * @returns Formatted string with event data
		 */
		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyTypedEvent: " << static_cast<int>(m_KeyCode);
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyTyped)
	};

}
