
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}
class Queue {
    constructor() {
        this.rear = null;
        this.front = null;
        this.length = 0;
    }
    push(value) {
        let newNode = new Node(value);
        if (!this.front) {
            this.front = this.rear = newNode;
            return;
        } else {
            newNode.prev = this.rear;
            this.rear.next = newNode;
            this.rear = newNode;
            this.length++;
        } 
    }  pop() {  let check;  if (!this.front) {      console.log("Stack underflow!");      return check;  }  if (this.front == this.rear) {      let data = this.front.data;      this.front = this.rear = null;      return data;  }  let data = this.front.data;  let temp = this.front;  this.front = this.front.next;  this.front.prev = null;  delete temp;  return data;} isEmpty() {     if (!this._head)         return true;} size() {     return length + 1;} Top() {     let check;} mid() {} }</code>



