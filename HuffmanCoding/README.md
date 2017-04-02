
### Structures
1. **MinHeapNode**
    char data, unsigned frequency, MinHeapNode left, right
    * creates a Huffman Tree Node

2. **MinHeap**
    unsigned size, unsigned capacity, MinHeapNode array
    * collection of Min Heap nodes
    
    
### Utility Functions
1. **newNode**
    char data, unsigned frequency
    (_returns MinHeapNode_)
    
    * allocate a new min Heap node with a given data and frequency
    
2. **createMinHeap**
    unsigned capacity
    (_returns MinHeap_)
    
    * create MinHeap of given capacity
    
3. **swapMinHeapNode**
    MinHeapNode a, b
    (_returns void_)
    
    * swap two MinHeapNodes
    
4. **insertMinHeap**
    MinHeap minHeap, MinHeapNode minHeapNode
    (_returns void_)
    
    * inserts new Node to existing MinHeap
5. **isSizeOne**
    Minheap minheap
    (_returns int_)
    
    * to check if size of heap is 1 or not
    
6. **printArr**
    int arr[], int n
    (_returns void_)
    
    * prints an array of size n
    
7. **isLeaf**
    MinHeapNode root
    (_returns int_)
    
    * to check if this node is leaf
    

### Standard Functions
1. **minHeapify**
    minHeap minheap, int inx(index)
    (_returns void_)
    
    * minHeapify function
    
2. **extractMin**
    MinHeap minHeap
    (_returns MinHeapNode_)
    
    * standard function to extract minimum value node from heap
    
3. **buildMinHeap**
    MinHeap minHeap
    (_returns void_)
    
    * builds MinHeap
### Important Functions

1. **HuffmanCodes**
    char data[], int freq[], int size
   (_returns void_)
   
   * Contructs Huffman Tree
   * Prints Huffman Tree using the Huffman Tree built above
   
2. **createAndBuildMinHeap**
    char data[], int freq[], int size
    (_returns MinHeap_)
    
    * Create minHeap of capacity size and inserts all character of data[] in min heap. Initially size of minHeap is equal to capcity
    
3. **buildHuffmanTree**
    char data[], int freq[], int size
    (_returns MinHeapNode_)
    
    * main function that build the Huffman Tree
    * Create a minHeap of capcity equal to size
    * Iterate while size of heap is not one
    * Extracts the two minimum items from minHeap
    * Create a new internal node with frequency equal to the sum of the two nodes frequencies. Make the two extracted node as left and right children of this new node. Add this node to the min heap
    * The remaining node is the tree node and the tree is complete
    
4. **printCodes**
    MinHeapNode root, int arr[], int top
    (_returns void_)
    
    * print Huffman Codes from the root of Huffman Tree


