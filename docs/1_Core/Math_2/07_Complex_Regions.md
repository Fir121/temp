## Connected Set

A set where **any** 2 points can be joined without leaving the set

Refer to [Types of Sets](../Math_1/04_Partial_Derivatives.md#Types of Sets)

- open' = closed
- closed' = open

## Domain

a set that is both open and connected.

## Limit/Accumulation Point

Deleted neighborhood of $z_0$ contains atleast one point of $S$

closed set has all limit points

all interior points and boundary points are limit points

## Properties of Functions

### Differentiable

Consider derivative equation

$$
f'(z) = \lim_{\Delta z \to 0} \frac{ f(z + \Delta z) - f(z) }{ \Delta z }
$$

A function is said to differentiable if $f'(z)$ is **unique**

### Analytic

Differentiable @ $z_0$ and its neighborhood

### Entire

Analytic Everywhere

### Harmonic

$u$ is harmonic if it satisfied Laplace equation, ie

$$
u_{xx} + u_{yy} = 0
$$

If $f(z) = u+iv$, then

- $f(z)$ is analytic
    - Put $y = 0, x = z \to f(z) = f(x)$ for shortcut
- real and imaginary parts are harmonic
- $v$ is harmonic conjugate of $u$

## Hyperbolic Function

$$
\begin{aligned}
\cos(ix) &= \cosh(x) & \sin(ix) &= i \sinh(x) \\
\cosh(x) &= \frac{e^x + e^{-x}}{2} & \sinh(x) &= \frac{e^x - e^{-x}}{2} \\
\sinh'(x) &= \cosh(x) & \cosh'(x) &= \sinh(x)
\end{aligned}
$$

$$
\cosh^2(x) - \sinh^2(x) = 1
$$

## CR Equation

Consider $f(z) = u + iv$

|                |     Rectangular      |             Polar              |
| :------------: | :------------------: | :----------------------------: |
|                |     $u_x = v_y$      |  $u_r = \frac{1}{r} v_\theta$  |
|                |    $u_y = - v_x$     |      $u_\theta = -r v_r$       |
| **Continuous** | $u_x, u_y, v_x, v_y$ | $u_r, u_\theta, v_r, v_\theta$ |
|    $f'(z)$     |    $u_x + i v_x$     | $(u_r + i v_r) e^{-i \theta}$  |

