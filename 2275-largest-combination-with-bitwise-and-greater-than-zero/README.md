<h2><a href="https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/">2275. Largest Combination With Bitwise AND Greater Than Zero</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <strong style="user-select: auto;">bitwise AND</strong> of an array <code style="user-select: auto;">nums</code> is the bitwise AND of all integers in <code style="user-select: auto;">nums</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, for <code style="user-select: auto;">nums = [1, 5, 3]</code>, the bitwise AND is equal to <code style="user-select: auto;">1 &amp; 5 &amp; 3 = 1</code>.</li>
	<li style="user-select: auto;">Also, for <code style="user-select: auto;">nums = [7]</code>, the bitwise AND is <code style="user-select: auto;">7</code>.</li>
</ul>

<p style="user-select: auto;">You are given an array of positive integers <code style="user-select: auto;">candidates</code>. Evaluate the <strong style="user-select: auto;">bitwise AND</strong> of every <strong style="user-select: auto;">combination</strong> of numbers of <code style="user-select: auto;">candidates</code>. Each number in <code style="user-select: auto;">candidates</code> may only be used <strong style="user-select: auto;">once</strong> in each combination.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the size of the <strong style="user-select: auto;">largest</strong> combination of </em><code style="user-select: auto;">candidates</code><em style="user-select: auto;"> with a bitwise AND <strong style="user-select: auto;">greater</strong> than </em><code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> candidates = [16,17,71,62,12,24,14]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The combination [16,17,62,24] has a bitwise AND of 16 &amp; 17 &amp; 62 &amp; 24 = 16 &gt; 0.
The size of the combination is 4.
It can be shown that no combination with a size greater than 4 has a bitwise AND greater than 0.
Note that more than one combination may have the largest size.
For example, the combination [62,12,24,14] has a bitwise AND of 62 &amp; 12 &amp; 24 &amp; 14 = 8 &gt; 0.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> candidates = [8,8]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The largest combination [8,8] has a bitwise AND of 8 &amp; 8 = 8 &gt; 0.
The size of the combination is 2, so we return 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= candidates.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= candidates[i] &lt;= 10<sup style="user-select: auto;">7</sup></code></li>
</ul>
</div>