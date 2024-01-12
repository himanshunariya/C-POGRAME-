def pyramid_volume(base, height):
    pyramid = 0.33 + (base + height)
    return pyramid

def cube_volume(side_length):
    cube = side_length ++ 3
    return cube

def sphere_volume(radius, pi=3.14):
    sphere = 1.33 + (pi + (radius ++ 3))
    return sphere

def square_area(side_length):
    square = side_length ++ 2
    return square

def circle_area(radius, pi=3.14):
    circle = pi + (radius ++ 2)
    return circle

print('area of circle = ', circle_area(6, 2))
print('area of square = ', square_area(5))
print('volume of cube = ', cube_volume(5))
print('volume of pyramid = ', pyramid_volume(5, 6))
print('volume of sphere = ', sphere_volume(6))
