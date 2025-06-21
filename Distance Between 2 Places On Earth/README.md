# Distance Between Two Places 🌍

A C program that calculates the **great-circle distance** between two geographic points on Earth using their latitude and longitude values. This is part of my C programming series exploring real-world applications.

## 📐 Formula Used

The program applies the spherical law of cosines:

d=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2))*cos(g1-g2));

Where:
- Latitude and longitude are in **radians**
- Earth’s radius (R) is assumed as **3963 miles**
