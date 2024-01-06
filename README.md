# Series-Search

This project is intended to study computational applications in analysis. Inspired by the elusive value of $\zeta (3)$ (Apery's constant), I wanted to see a potential computational approach to developing closed forms for infinite series. While Apery's constant is unknown, I intend to derive the famous result $\zeta (2) = \frac{{\pi}^2}{6}$ through the algorithm below. 

###**Formal Development**

Let $S$ be a sequence whose sum converges absolutely to a value $\delta$, with terms $\Delta_n$. Further, let $S'$ be a sequence that converges absolutely to a value $\delta'$, with terms $\Delta_n'$. 

####**Basic Definitions**

i) $Ord_R(S)$ is the sequence $K$, such that $S$ is reordered by a relation $R$.

ii) $Abs(S)$ is the sequence $K$, such that $K = (|\Delta_i|,|\Delta_{i+1}|,|\Delta_{i+2}|,|\Delta_{i+3}|,... )$

iii) $S'$ is an undercompensate of $S$ if there exists a term $\Delta_k \neq \Delta_i$, for all appropriate terms in $S'$, $\Delta_i$. We denote this with $S \sqsubset S'$

iv) $S'$ is an overcompensate of $S$ if there exists a term $\Delta_i' \neq \Delta_k$, for all appropriate terms in $S$, $\Delta_k$. We denote this with $S \sqsupset S'$

v) $S'$ is said to be **total** to $S$ if $Ord(Abs(S')) = Ord(Abs(S))$ We denote this with $S = S'$. Considering the sums of the respective series are absolutely convergent, one can see that the OrdAbs operator on $S'$ and $S$ is purely a formality, and not necessary.



-Abuse of Notation-

vi) Let $A$ and $B$ be sequencev s whose sum absolutely converges, with terms $a_n$ and $b_n$. The sequence union of $A$ and $B$, denoted $A \cup B$ is the sequence $(a_1, b_1, a_2, b_2, ...)$. 

vii) Let $A$ and $B$ be  absolutely convergent sequences with terms $a_n$ and $b_n$.  The sequence intersection of $A$ and $B$, denoted $A \cap B$, is the sequence $(c_i, c_{i+1}, c_{i+2}...)$, where $c_i = a_i$ where $a_i = b_i$.

viii) Let $A$ and $B$ be  absolutely convergent sequences with terms $a_n$ and $b_n$.  The sequence minus of $A$ and $B$, denoted $A \setminus B$, is the sequence $(c_i, c_{i+1}, c_{i+2}...)$, where $c_i = a_i, b_i,$ where $a_i \neq b_i$.

ix) Let $A_1, A_2, A_3... A_n$ be sequences whose sum converges absolutely. Then, $\mathcal{A} = \{A_i\}$ is said to be partitions of $S$ if $A_i$ are undercompensates of $S$ and $Ord_{\leq}(Abs(\bigcup\limits_{i=1}^{n} A_{i})) = Ord_{\leq}(Abs(S))$.

**Series decomposition**
