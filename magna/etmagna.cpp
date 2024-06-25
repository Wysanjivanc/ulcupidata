std::tuple<int, std::string> result = std::make_tuple(42, "hello");
int number;
std::string text;
std::tie(number, text) = result;
