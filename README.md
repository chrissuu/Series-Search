# Series-Search

This project is intended to study computational applications in analysis. Inspired by the elusive value of $\zeta (3)$ (Apery's constant), I wanted to see a potential computational approach to developing closed forms for infinite series. While Apery's constant is unknown, I intend to derive the famous result $\zeta (2) = \frac{{\pi}^2}{6}$ through the algorithm below. 

Recall:

$\zeta(2n) = \frac{(-1)^{(n-1)}(2\pi)^{(2n)}}{2 \cdot (2n)!}B_{2n}$, where $B_n$ is the nth Bernoulli number.

It is not far fetched to conjecture the value of Apery's constant to be a rational multiple of ${\pi}^3$. Hence, perhaps more importantly (and nuanced) is whether such an algorithm is able to determine the rationality of $\frac{\zeta (2)}{{\pi}^2}$ or (speculatively) the rationality of $\frac{\zeta (3)}{{\pi}^3}$.

##### Note 1/11: The write-up has been moved from this readme markdown file to a proper latex file due to formatting issues caused by Github's rendering! (File name: seriessearch.tex)