//
// Created by buyi on 17-10-16.
//

#ifndef DSDTM_FEATURE_H
#define DSDTM_FEATURE_H

#include "Camera.h"

namespace DSDTM
{

class Frame;

struct Feature
{
    Frame*              mframe;
    Eigen::Vector2d     mpx;
    int                 mlevel;
    Eigen::Vector2d     mgrad;

    Feature(Frame* _frame, const Eigen::Vector2d& _px, int _level):
            mframe(_frame),
            mpx(_px),
            mlevel(_level),
            mgrad(0.0, 0.0)
    {}
};

}// namespace DSDTM



#endif //DSDTM_FEATURE_H