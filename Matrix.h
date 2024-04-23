#pragma once

typedef struct Matrix4x4 {
	float m[4][4];
}Matrix4x4;

/// <summary>
/// 1.行列の加法
/// </summary>
/// <param name="m1"></param>
/// <param name="m2"></param>
/// <returns></returns>
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);
/// <summary>
/// 2.行列の減法
/// </summary>
/// <param name="m1"></param>
/// <param name="m2"></param>
/// <returns></returns>
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);
/// <summary>
/// 3.行列の積
/// </summary>
/// <param name="m1"></param>
/// <param name="m2"></param>
/// <returns></returns>
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
/// <summary>
/// 4.逆行列
/// </summary>
/// <param name="m"></param>
/// <returns></returns>
Matrix4x4 Inverse(const Matrix4x4& matrix);
/// <summary>
/// 5.転置行列
/// </summary>
/// <param name="m"></param>
/// <returns></returns>
Matrix4x4 Transpose(const Matrix4x4& matrix);
/// <summary>
/// 6.単位行列の作成
/// </summary>
/// <returns></returns>
Matrix4x4 MakeIdentity4x4();

