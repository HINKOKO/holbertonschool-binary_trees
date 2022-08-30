<div class="MP_4XU1NY5Zu10QiZHzZ"><div class="
      m9qHEqW419vul78Ks_N4
      XuMz9evrxSSYQmNEht5_
      ZPMq1_RsubjX2Kzjh93t
      " tabindex="0"><div class="
      kDoyoLEgMLE4k325vN3f
      undefined
      undefined
<p>
  A data structure that consists of nodes, each with some value and pointers to
  child-nodes, which recursively form <b>subtrees</b> in the tree.
</p>
<p>
  The first node in a tree is referred to as the <b>root</b> of the tree, while
  the nodes at the bottom of a tree (the nodes with no child-nodes) are referred
  to as <b>leaf nodes</b> or simply <b>leaves</b>. The paths between the root of
  a tree and its leaves are called <b>branches</b>, and the <b>height</b> of a
  tree is the length of its longest branch. The <b>depth</b> of a tree node is
  its distance from its tree's root; this is also known as the node's
  <b>level</b> in the tree.
</p>
<p>
  A tree is effectively a <b>graph</b> that's <b>connected</b>, <b>directed</b>,
  and <b>acyclic</b>, that has an explicit root node, and whose nodes all have a
  single <b>parent</b> (except for the root node, which effectively has no
  parent). Note that in most implementations of trees, tree nodes don't have a
  pointer to their parent, but they can if desired.
</p>
<p>
  There are many types of trees and tree-like structures, including
  <b>binary trees</b>, <b>heaps</b>, and <b>tries</b>.
</p>
</div></div></li><li><h4 class="MeFGWxW4GIK5soMCM_Qe">Binary Tree</h4><div class="wER9hC6Ayr8OWkXr4hrQ default"><div class="html">
<p>A <b>tree</b> whose nodes have up to <b>two</b> child-nodes.</p>
<p>
  The structure of a binary tree is such that many of its operations have a
  logarithmic time complexity, making the binary tree an incredibly attractive
  and commonly used data structure.
</p>
</div></div></li><li><h4 class="MeFGWxW4GIK5soMCM_Qe">K-ary Tree</h4><div class="wER9hC6Ayr8OWkXr4hrQ default"><div class="html">
<p>
  A <b>tree</b> whose nodes have up to <b>k</b> child-nodes. A
  <b>binary tree</b> is a k-ary tree where <b>k == 2</b>.
</p>
</div></div></li><li><h4 class="MeFGWxW4GIK5soMCM_Qe">Perfect Binary Tree</h4><div class="wER9hC6Ayr8OWkXr4hrQ default"><div class="html">
<p>
  A <b>binary tree</b> whose interior nodes all have two child-nodes and whose
  <b>leaf nodes</b> all have the same <b>depth</b>. Example:
</p>
<pre>           1
      /         \
     2           3
   /   \       /   \
  4     5     6     7
 / \   / \   / \   / \
8   9 10 11 12 13 14 15
</pre>
</div></div></li><li><h4 class="MeFGWxW4GIK5soMCM_Qe">Complete Binary Tree</h4><div class="wER9hC6Ayr8OWkXr4hrQ default"><div class="html">
<p>
  A <b>binary tree</b> that's <i>almost</i> <b>perfect</b>; its interior nodes
  all have two child-nodes, but its <b>leaf nodes</b> don't necessarily all have
  the same <b>depth</b>. Furthermore, the nodes in the last <b>level</b> of a
  complete binary tree are as far left as possible. Example:
</p>
<pre>          1
       /     \
      2       3
    /   \   /   \
   4     5 6     7
 /   \
8     9
</pre>
<p>
  Conversely, the following binary tree <i>isn't</i> complete, because the nodes
  in its last level aren't as far left as possible:
</p>
<pre>          1
       /     \
      2       3
    /   \   /   \
   4     5 6     7
         /   \
        8     9
</pre>
</div></div></li><li><h4 class="MeFGWxW4GIK5soMCM_Qe">Balanced Binary Tree</h4><div class="wER9hC6Ayr8OWkXr4hrQ default"><div class="html">
<p>
  A <b>binary tree</b> whose nodes all have left and right <b>subtrees</b> whose
  <b>heights</b> differ by no more than 1.
</p>
<p>
  A balanced binary tree is such that the logarithmic time complexity of its
  operations is maintained.
</p>
<p>
  For example, inserting a node at the bottom of the following
  <i>imbalanced</i> binary tree's left subtree would cleary not be a
  logarithmic-time operation, since it would involve traversing through most of
  the tree's nodes:
</p>
<pre>             1
          /     \
         2       3
       /
      4
    /
   8
  /
10
</pre>
<p>The following is an example of a balanced binary tree:</p>
<pre>          1
       /     \
      2       3
    /   \   /   \
   4     5 6     7
 /   \         /   
10    9       8
</pre>
</div></div></li><li><h4 class="MeFGWxW4GIK5soMCM_Qe">Full Binary Tree</h4><div class="wER9hC6Ayr8OWkXr4hrQ default"><div class="html">
<p>
  A <b>binary tree</b> whose nodes all have either two child-nodes or zero
  child-nodes. Example:
</p>
<pre>    1
 /     \
2       3
      /   \
     6     7
   /   \
  8     9
</pre>
</div></div></li></ul></div></div></div></div>
