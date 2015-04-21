#ifndef EIGEN_TOOLS_H
#define EIGEN_TOOLS_H

#include <Eigen/Eigen>
#include <vector>
#include <stdio.h>
#include "def.h"
#include <iostream>
#include <Eigen/StdVector>
#include <math.h>

using namespace std;

void printEigenMatrix(const Eigen::MatrixXf &mat);

void printEigenVector(const vector<Eigen::MatrixXf> &vec_mat);

void printVec(const std::vector<float> &vec);

float pseudo_inv(const Eigen::MatrixXf *mat_in,
                Eigen::MatrixXf *mat_out);

float pseudo_inv_6(const Eigen::Matrix <float, 6,6> *mat_in,
                Eigen::Matrix <float, 6,6> *mat_out);


float pseudo_inv_12(const Eigen::Matrix <float, 12, 12> *mat_in,
                Eigen::Matrix <float, 12, 12> *mat_out);



#endif // EIGEN_TOOLS_H
