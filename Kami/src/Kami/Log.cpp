#include "kmpch.h"
#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Kami {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init() {
		spdlog::set_pattern("%^[%T] %n: %v%$"); // Timestamp,NameOfLogger,ActualMessage

		s_CoreLogger = spdlog::stdout_color_mt("KAMI");
		s_CoreLogger->set_level(spdlog::level::trace); // print everything

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace); // print everything
	}

}