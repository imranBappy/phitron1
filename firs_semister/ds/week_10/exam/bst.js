class Node {
  constructor(data) {
    this.data = data;
    this.left = null;
    this.right = null;
  }
}

class BST {
  constructor() {
    this.root = null;
  }
  insert(root, k) {
    if (root == null) {
      this.root = new Node(k);
      return;
    }
    let node = root;
    let curr = root;
    while (curr) {
      node = curr;
      if (curr.data > k) {
        curr = curr.left;
      } else {
        curr = curr.right;
      }
    }
    if (node.data > k) {
      node.left = new Node(k);
    } else {
      node.right = new Node(k);
    }
  }
}

function inOrder(root) {
  if (root == null) {
    return;
  }
  inOrder(root.left);
  process.stdout.write(root.data + " -> ");
  inOrder(root.right);
}
function preOrder(root) {
  if (root == null) {
    return;
  }
  process.stdout.write(root.data + " -> ");
  preOrder(root.left);
  preOrder(root.right);
}

function invert_tree(root) {
  if (root == null) return root;
  invert_tree(root.left);

  let temp = root.left;
  root.left = root.right;
  root.right = temp;

  if (root.left) {
    if (root.left.left || root.left.right) {
      invert_tree(root.left);
    }
  }
  return root;
}

let t = new BST();
const arr = [4, 2, 7, 1, 3, 6, 9];
for (let i = 0; i < arr.length; i++) {
  const element = arr[i];
  t.insert(t.root, element);
}
inOrder(t.root);

console.log();
preOrder(t.root);

invert_tree(t.root);
console.log("\npre Order : ");
preOrder(t.root);
