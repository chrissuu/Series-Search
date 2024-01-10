# Series-Search

This project is intended to study computational applications in analysis. Inspired by the elusive value of $\zeta (3)$ (Apery's constant), I wanted to see a potential computational approach to developing closed forms for infinite series. While Apery's constant is unknown, I intend to derive the famous result $\zeta (2) = \frac{{\pi}^2}{6}$ through the algorithm below. 

### Formal Development

Let $S$ be a sequence whose sum converges absolutely to a value $\delta$, with terms $\Delta_n$. Further, let $S'$ be a sequence that converges absolutely to a value $\delta'$, with terms $\Delta_n'$. 

#### Basic Definitions

i) $Ord_R(S)$ is the sequence $K$, such that $S$ is reordered by a relation $R$.

ii) $Abs(S)$ is the sequence $K$, such that $K = (|\Delta_i|,|\Delta_{i+1}|,|\Delta_{i+2}|,|\Delta_{i+3}|,... )$

iii) $S'$ is an undercompensate of $S$ if there exists a term $\Delta_k \neq \Delta_i$, for all appropriate terms in $S'$, $\Delta_i$. We denote this with $S \sqsubset S'$

iv) $S'$ is an overcompensate of $S$ if there exists a term $\Delta_i' \neq \Delta_k$, for all appropriate terms in $S$, $\Delta_k$. We denote this with $S \sqsupset S'$

v) $S'$ is said to be **total** to $S$ if $Ord(Abs(S')) = Ord(Abs(S))$ We denote this with $S \equiv S'$. Considering the sums of the respective series are absolutely convergent, one can see that the OrdAbs operator on $S'$ and $S$ is purely a formality, and not necessary. $S'$ is said to be **equal** to $S$ if and only if $S' \equiv S$ and $\delta' = \delta$



-Abuse of Notation-

vi) Let $A$ and $B$ be sequences whose sum absolutely converges, with terms $a_n$ and $b_n$. The sequence union of $A$ and $B$, denoted $A \cup B$ is the sequence $(a_1, b_1, a_2, b_2, ...)$. 

vii) Let $A$ and $B$ be absolutely convergent sequences with terms $a_n$ and $b_n$.  The sequence intersection of $A$ and $B$, denoted $A \cap B$, is the sequence $(c_i, c_{i+1}, c_{i+2}...)$, where $c_i = a_i$ where $a_i = b_i$.

viii) Let $A$ and $B$ be absolutely convergent sequences with terms $a_n$ and $b_n$.  The sequence minus of $A$ and $B$, denoted $A \setminus B$, is the sequence $(c_i, c_{i+1}, c_{i+2}...)$, where $c_i = a_i, b_i,$ where $a_i \neq b_i$.

ix) Let $A_1, A_2, A_3... A_n$ be sequences whose sum converges absolutely. Then, $\mathcal{A} = \{A_i\}$ is said to be partitions of $S$ if $A_i$ are undercompensates of $S$ and $Ord_{\leq}(Abs(\bigcup\limits_{i=1}^{n} A_{i})) = Ord_{\leq}(Abs(S))$.

#### Series Encoding

We formalize the notion of encoding a series:

The **encoding** of a series is a tuple $\mathcal{E} = (\rho_{0}, \mathcal{T}, N)$, where $\rho_{0}$ denotes the initial value of a series, $\mathcal{T}$ denotes a transform $\mathcal{T}: \mathbb{Q} \rightarrow \mathbb{Q}$ (for this purpose, a series is over the rationals), and $N$ which denotes the number of transition states in the transform for the summation. The transform $\mathcal{T}$ should be defined such that $\mathcal{T}(\rho_{i}) = \rho_{i+1}$.

The n'th iteration of $\mathcal{T}$ on $\rho_{i}$, (i.e. $\mathcal{T}(\mathcal{T}(\mathcal{T}...(\rho_{i})...))$) will be denoted as $\mathcal{T}^n(\rho_{i})$.

#### Series Decomposition

We formalize the notion of decomposing a series:

Given a series, $S$ $(=\Delta_n)$, $S$ may be decomposed into a partition $\mathcal{A}$ and encoded as $\mathcal{Z}$.

##### Example 

Consider a geometric series, $G$, given by 

\[ G = \sum_{n=1}^{\infty} (\frac{1}{3})^{n-1} \]

We may write out a few terms:

\[1, \frac{1}{3}, \frac{1}{9}, \frac{1}{27}... \]

A valid partition for G is given by:

$\mathcal{A} = \{A_1, A_2\}$, where $A_1 = \sum_{n=0}^{\infty} (\frac{1}{3})^{2n}$, $A_2 = \sum_{n=0}^{\infty} (\frac{1}{3})^{2n+1}$ 

Encoded as: $\text{Enc}(\mathcal{A}) = \mathcal{Z} = \{(1, \mathcal{T}_0(s) = \frac{1}{9}s, |\mathbb{N}|),(\frac{1}{3}, \mathcal{T}_1(s) = \frac{1}{9}s, |\mathbb{N}|) \}$

#### Dynamic Dictionary and Series Searching

Given a dictionary $\mathcal{D}$, 