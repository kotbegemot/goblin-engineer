#pragma once

#include <goblin-engineer/core/forward.hpp>

namespace goblin_engineer {

    using actor_zeta::basic_async_actor;

    struct abstract_service : public basic_async_actor {
        template<class Supervisor>
        abstract_service(actor_zeta::intrusive_ptr<Supervisor> supervisor, const std::string& name)
            : basic_async_actor(supervisor.get(), name) {}

        ~abstract_service() override = default;
    };

} // namespace goblin_engineer
