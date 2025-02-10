void swap(int vec[], int k){
    int temp = vec[k];
    vec[k] = vec[k+1];
    vec[k+1] = temp;
}

void sort(int vec[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i- 1; j++){
            if(vec[j] > vec[j + 1]){
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

// Popula o vetor na memoria
#define N 5
int vec[N] = {50, 20, 40, 80, 30};

int main(){
    sort(vec, N);
    return 0;
}