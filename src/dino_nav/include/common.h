#ifndef COMMON_H
#define COMMON_H

struct point_t {
    int x, y;
};

struct float_point_t {
    float x, y;
};

struct segment_t {
    float_point_t a, b;
};

float points_angle(float x_part, float y_part, float x_goal, float y_goal);
float points_angle_rad(float x_part, float y_part, float x_goal, float y_goal);

void rotate_point(float_point_t &p, float_point_t &o, float theta);
float get_max_value(const float *a, int dim);
float point_dst(float_point_t &a, float_point_t &b);

float point_is_front(segment_t &s, float_point_t &p);
#endif //COMMON_H