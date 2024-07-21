bool checkValuesInRange(const std::vector<double>& values, double dval) {
    for (size_t i = 0; i < values.size(); ++i) {
        if (!inrange(dval, values[i], false, true)) {
            return false;
        }
    }
    return true;
}
