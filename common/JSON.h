#ifndef SORBET_JSON_H
#define SORBET_JSON_H

#include <google/protobuf/util/json_util.h>
#include <string>

namespace ruby_typer {
namespace core {

struct JSON {
    static std::string escape(std::string from);
    static std::string fromProto(const google::protobuf::Message &message);
};

} // namespace core
} // namespace ruby_typer
#endif // SORBET_JSON
