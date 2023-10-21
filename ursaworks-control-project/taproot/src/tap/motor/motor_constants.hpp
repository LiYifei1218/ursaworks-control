/*
 * Copyright (c) 2020-2021 Advanced Robotics at the University of Washington <robomstr@uw.edu>
 *
 * This file is part of Taproot.
 *
 * Taproot is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Taproot is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Taproot.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MOTOR_CONSTANTS_HPP_
#define MOTOR_CONSTANTS_HPP_

namespace tap::motor
{
/**
 * An interface to store motor constants and conversions.
 */
class MotorConstants
{
public:
    /**
     * @return the corresponding output in mA for a given raw motor output value (the one that you
     * directly send to the motor/receive from the motor)
     */
    virtual inline float convertOutputToCurrent(float output) const = 0;
    /**
     * @return The motor torque constant, in N * m.
     */
    virtual inline float getTorqueConstant() const = 0;
};
}  // namespace tap::motor

#endif  // MOTOR_CONSTANTS_HPP_
