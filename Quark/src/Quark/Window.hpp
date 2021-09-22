#pragma once

#include "qkpch.hpp"

#include "Quark/Core.hpp"
#include "Quark/Events/Event.hpp"

namespace Quark
{
	/**
	 * @brief A structure that contains basic information and properties about the window
	 */
	struct WindowProperties
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProperties(const std::string& title = "Quark Engine", unsigned int width = 1280, unsigned int height = 720) :
			Title(title), Width(width), Height(height)
		{
		}
	};


	/**
	 * @brief Abstract class representing a (generic) desktop window.
	 */
	class QUARK_API Window
	{
	public:
		using EventCallbackFn = std::function<void(Event&)>;

		virtual ~Window() {}

		/**
		 * @brief Callback that gets called if the window should update. It is called once every frame
		 */
		virtual void OnUpdate() = 0;

		/**
		 * @brief   Get width of the window
		 * 
		 * @returns The width of the window
		 */
		virtual unsigned int GetWidth() const = 0;

		/**
		 * @brief Get height of the window.
		 * 
		 * @returns The height of the window
		 */
		virtual unsigned int GetHeight() const = 0;


		/**
		 * @brief Sets the function that should be called if an event occurs.
		 * 
		 * @param[in] callback The function to call
		 */
		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;

		/**
		 * @brief         Toggles VSync for this window
		 * 
		 * @param enabled Whether to enable or disable VSync
		 */
		virtual void SetVSync(bool enabled) = 0;

		/**
		 * @brief Checks whether VSync is enabled for this window
		 * 
		 * @returns \c True if VSync is enabled for this window
		 */
		virtual bool IsVSync() const = 0;


		/**
		 * @brief       Creates a new window
		 * 
		 * @param props The properties of the window
		 * @returns     A pointer to the newly created window
		 */
		static Window* Create(const WindowProperties& props = WindowProperties());
	};
}