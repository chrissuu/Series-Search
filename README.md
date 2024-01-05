# Series-Search

This project is intended to study computational applications in analysis. Inspired by the elusive value of $\zeta (3)$ (Apery's constant), I wanted to see a potential computational approach to developing closed forms for infinite series. While Apery's constant is unknown, I intend to derive the famous result $\zeta (2) = \frac{{\pi}^2}{6}$ through the algorithm below. 

**Formal development**

Let $S$ be a sequence whose sum converges absolutely to a value $\delta$, with terms $\Delta_n$. Further, let $S'$ be a sequence that converges absolutely to a value $\delta'$, with terms $\Delta_n'$. 

**Basic Definitions**

i) $S'$ is an undercompensate of $S$ if there exists a term $\Delta_k \neq \Delta_i$, for all appropriate terms in $S'$, $\Delta_i$.

ii) $S'$ is an overcompensate of $S$ if there exists a term $\Delta_i' \neq \Delta_k$, for all appropriate terms in $S$, $\Delta_k$.

iii) $S'$ is said to be **total** to $S$ if there exists a bijective map from the terms of $S'$ and the terms of $S$, and for all terms $\Delta_i'$ of $S'$, there exists $\Delta_k$ of $S$ such that $\Delta_i' = \Delta_k$
