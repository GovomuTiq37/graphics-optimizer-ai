// main.cpp — entry point. Wires config and subsystems together.

#include "graphicsoptimizerai/settings.h"
#include "graphicsoptimizerai/benchmark.h"
#include "graphicsoptimizerai/suggest.h"
#include "graphicsoptimizerai/apply.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    graphicsoptimizerai::Settings settings = graphicsoptimizerai::Settings::load_default();
    graphicsoptimizerai::Benchmark benchmark(settings.store_path);
    graphicsoptimizerai::Suggest suggest(settings.store_path);
    graphicsoptimizerai::Apply apply(settings.store_path);
    std::fprintf(stderr, "[graphics-optimizer-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
