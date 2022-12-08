class Node {
  constructor(data) {
    this.left = null;
    this.right = null;
    this.data = data;
  }
}

function insert(root, data) {
  if (root == null) {
    root = new Node(data);
    return root;
  }
  let curr = root;
  let node = root;
  while (curr) {
    node = curr;
    if (curr.data > data) {
      curr = curr.left;
    } else {
      curr = curr.right;
    }
  }
  if (node.data > data) {
    node.left = new Node(data);
  } else {
    node.right = new Node(data);
  }
  return root;
}

function inOrder(root) {
  if (root === null) return root;
  inOrder(root.left);
  console.log(root.data);
  inOrder(root.right);
}

function zigZagLevel(root) {
  let s1 = [],
    s2 = [];
  let q1 = [],
    q2 = [];
  s1[0] = root;
  q1[0] = root;
  let flag = true;
  while (s1.length != s2.length) {
    if (flag) {
      let s = s1.pop();
      let q = q1.shift();
      if (s.right != null) {
        s2.push(s.right);
        q2.push(s.right);
      }
      if (s.left != null) {
        s2.push(s.left);
        q2.push(s.left);
      }
      console.log(q.data);
    } else {
      let s = s2.pop();
      let q = q2.shift();
      if (s.left != null) {
        s1.push(s.left);
        q1.push(s.left);
      }
      if (s.right != null) {
        s1.push(s.right);
        q1.push(s.right);
      }
      console.log(q.data);
    }

    if (s1.length == 0) {
      flag = false;
    }
    if (s2.length == 0) {
      flag = true;
    }
  }
}

let root = new Node(15);
let arr = [11, 26, 8, 12, 20, 30, 6, 9, 14, 35];
for (let i = 0; i < arr.length; i++) {
  const element = arr[i];
  root = insert(root, element);
}

zigZagLevel(root);
// inOrder(root)

// let arr1 = [1,2,3,4];
// console.log(arr1.pop());
// console.log(arr1.shift());
// console.log(arr1);
