/**
 * @file conversion.h
 * @author SatyaJyothika
 * @brief Header file for Conversion of units
 */

#ifndef __UNIT_CONVERSION_H__
#define __UNIT_CONVERSION_H__

#include <stdio.h>

/**
* @brief converts kilograms to grams and vice versa
* @param[in] c character variable to select the type of conversion
* @param[in] n number that is to be converted
* @return Result after the conversion of n
*/
float kilograms_grams(char c, float n);

/**
* @brief converts litres to millilitres and vice versa
* @param[in] c character variable to select the type of conversion
* @param[in] n number that is to be converted
* @return Result after the conversion of n
*/
float litres_millilitres(char c, float n);

/**
* @brief converts kilometers to meters and vice versa
* @param[in] c character variable to select the type of conversion
* @param[in] n number that is to be converted
* @return Result after the conversion of n
*/
float kilometers_meters(char c, float n);

/**
* @brief converts meters to centimeters and vice versa
* @param[in] c character variable to select the type of conversion
* @param[in] n number that is to be converted
* @return Resultafter the conversion of n
*/
float meters_centimeters(char c, float n);

/**
* @brief converts squareyards to squarefeets and vice versa
* @param[in] c character variable to select the type of conversion
* @param[in] n number that is to be converted
* @return Result after the conversion of n
*/
float squareyards_squarefeets(char c, float n);

/**
* @brief converts inches to centimeters and vice versa
* @param[in] c character variable to select the type of conversion
* @param[in] n number that is to be converted
* @return Result after the conversion of n
*/
float inches_centimeters(char c, float n);

/**
* @brief converts celsius to farenheit and vice versa
* @param[in] c character variable to select the type of conversion
* @param[in] t temperature that is to be converted
* @return Result after the conversion of t
*/
float celsius_farenheit(char c, float t);

#endif  /* #define __UNIT_CONVERSION_H__ */
