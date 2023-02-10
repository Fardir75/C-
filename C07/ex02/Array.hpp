/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:04:25 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/10 16:15:18 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename A>
class Array 
{
    private:
        A *ptr;
        int size;
    public:
        Array(int n = 10) {
            if (n > 0)
                size = n;
            else
                throw Array::IncorrectSize();
            ptr =  new A[size];

            for (int i = 0; i < size; i++) {
                ptr[i] = i*i;    
            }
        }
        Array(const Array& arrayToCopy) : size(arrayToCopy.size) {
            ptr = new A[size];
            for (int i = 0; i < size; ++i) {
                ptr[i] = arrayToCopy.ptr[i];
            }
        }
        ~Array() {delete[] ptr;}
        A& operator[](int);
        int getSize() {return size;}
        
        // Exception classes
        class IndexOutOfRange : public std::exception {
            public:
                std::string whaat() {return "Error: Index out of range";}
        };
        class IncorrectSize : public std::exception {
            public :
                std::string whaat() {return "Error: Incorrect size";}
        };
};

template <typename U>
std::istream& operator>>(std::istream& in, Array<U> &a) {
    for (int i = 0; i < a.size; ++i) {
        in >> a.ptr[i];
    }
    return in;
}

template <typename U>
U& Array<U>::operator[](int index) {
    if (index < 0 || index >= size)
        throw Array::IndexOutOfRange();
    return ptr[index];
}

#endif
