/*!
 * @file
 */

// Copyright 2016 UMass Lowell Command and Data Handling Team

#ifndef INCLUDE_POWERCELL_H_
#define INCLUDE_POWERCELL_H_

#include "PowerTeam.h"
#include <vector>
#include <string>

class PowerCell {
 private:
    std::vector<PowerTeam> mPowerCell;
    double mTotalVoltage;
    double mMaxVoltage;
    double mCellVoltage;

 public:
    explicit PowerCell(std::vector<PowerTeam> powerCell);
    double getTotalVoltage();
    double getMaxVoltage();
    double getCellVoltage();
    void drawPower(double power);
    void rechargeCell(double power);
    void printCell();
};

#endif  // INCLUDE_POWERCELL_H_
