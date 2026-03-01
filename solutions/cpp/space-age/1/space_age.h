#pragma once

namespace space_age {

// TODO: add your solution here
class space_age {
private:
    unsigned long long _seconds;
    public:

    space_age(unsigned long long seconds);

    unsigned long long seconds() const;
    double on_earth() const;
    double on_mercury() const;
    double on_venus() const;
    double on_mars() const;
    double on_jupiter() const;
    double on_saturn() const;
    double on_uranus() const;
    double on_neptune() const;
};
}  // namespace space_age
