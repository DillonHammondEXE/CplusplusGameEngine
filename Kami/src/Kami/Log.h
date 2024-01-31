#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h" // logging library
#include "spdlog/fmt/ostr.h"

namespace Kami {

	class KAMI_API Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

// Core log macros
#define KM_CORE_ERROR(...)    ::Kami::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KM_CORE_WARN(...)     ::Kami::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KM_CORE_INFO(...)     ::Kami::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KM_CORE_TRACE(...)    ::Kami::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KM_CORE_CRITICAL(...) ::Kami::Log::GetCoreLogger()->critical(__VA_ARGS__) // replaced fatal with critical
// Client log macros
#define KM_ERROR(...)         ::Kami::Log::GetClientLogger()->error(__VA_ARGS__)
#define KM_WARN(...)          ::Kami::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KM_INFO(...)          ::Kami::Log::GetClientLogger()->info(__VA_ARGS__)
#define KM_TRACE(...)         ::Kami::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KM_CRITICAL(...)      ::Kami::Log::GetClientLogger()->critical(__VA_ARGS__) // replaced fatal with critical

// Don't include in dist builds