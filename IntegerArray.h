#ifndef __INTEGER_ARRAY__
#define __INTEGER_ARRAY__

class IntegerArray {

    private:
        int *data;
        int size;
    public:
        IntegerArray(int size);
        IntegerArray(IntegerArray &o);
        void push_back(int m){
			int arr[size+1];
				for (int f =0; f < size; f++){
					arr[f] = data [f];
				}
				for (int k =0; k < size; k++){
					if (k == size-1){
					data[k] = m;
					}
					else{
						data[k] = arr[i+1];
					}
				}
		};
		void remove(){
			for(int indice=0; indice > 0; indice--)
				break;
			}
		void print(){
			for (int i=0; i < indice; i++){
				cout << data[i] << " ";
			}
		}
        ~IntegerArray();
        

};
