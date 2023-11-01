public class Solution {

    static class MinHeap {
        private int[] heap;
        private int size;
        private int capacity;
        
        MinHeap(int cap) {
            heap = new int[cap];
            size=0;
            capacity=cap;
        }

        void heapify(int i){
            int smallest =i;
            int left = 2*i+1;
            int right = 2*i+2;
            if(left < size && heap[left] < heap[smallest]){
                smallest=left;
            }

            if(right <size && heap[right] < heap[smallest]){
                smallest= right;
            }
            if(smallest != i){
                swap(i, smallest);
                heapify(smallest);
            }
        }

        void swap(int i , int smallest ){
            int temp = heap[i];
            heap[i]= heap[smallest];
            heap[smallest]= temp;
        }


        // Implement the function to remove minimum element.
        int extractMinElement() {
            if(size == 0){
                return -1;
            }
            int ans = heap[0];
            swap(0 , size-1);
            size--;
            heapify(0);
            return ans;
        }

        // Implement the function to delete an element.
        void deleteElement(int ind) {
            if(ind >=size){return;}
            swap(ind , size-1);
            size--;
            heapify(ind);
        }

        // Implement the function to insert 'val' in the heap.
        void insert(int val) {
            if(size == capacity){
                return;
            }
            heap[size] =val;
            size++;
            int ind =size-1;
            while(ind >=0){
                int parent=(ind-1)/2;
                if(heap[parent] > heap[ind]){
                    swap(parent , ind);
                    ind = parent;
                }else{break;}
            }


        }
    }
};
