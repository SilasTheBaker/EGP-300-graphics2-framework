
/*
Implement a 3D (3x3) matrix structure in C with the following free

functions: transpose, inverse (hint: assume it is a rotation matrix, possibly

with uniform scale applied), make rotation X, make rotation Y, make

rotation Z, make rotation Euler XYZ and ZYX (they are different!), make

uniform scale, make identity, concatenate, multiply 3D vector.
*/


#ifndef MATRIX_3_X_3_H
#define MATRIX_3_X_3_H

#include <GL/glew.h>

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	struct Matrix3x3
	{
		GLfloat elements[3][3];
	};

	struct Matrix3x3 transposeMatrix3x3(const struct Matrix3x3* matrix);
	struct Matrix3x3 inverseMatrix3x3(const struct Matrix3x3* matrix);
	struct Matrix3x3 xRotationMatrix3x3(const GLfloat xRot);
	struct Matrix3x3 yRotationMatrix3x3(const GLfloat yRot);
	struct Matrix3x3 zRotationMatrix3x3(const GLfloat zRot);
	struct Matrix3x3 eulerXYZRotation(const struct Matrix3x3* matrix, const GLfloat xRot, const GLfloat yRot, const GLfloat zRot);
	struct Matrix3x3 eulerZYXRotation(const struct Matrix3x3* matrix, const GLfloat zRot, const GLfloat yRot, const GLfloat xRot);
	struct Matrix3x3 uniformScaleMatrix3x3(GLfloat scale);
	struct Matrix3x3 identityMatrix3X3();
	struct Matrix3x3 concatenateMatrix3X3(const struct Matrix3x3* left, const struct Matrix3x3* right);
	void copyMatrix(struct Matrix3x3* dest, const struct Matrix3x3* source);
	void convertVector3ToArray(const struct Vector3* vec, GLfloat* arr);
	struct Vector3 convertArrayToVector3(const GLfloat* arr);
	void zeroOutMatrix3x3(struct Matrix3x3* matrix);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //MATRIX_3_X_3_H
