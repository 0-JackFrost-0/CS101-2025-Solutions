// Author: Om Godage
// Date: 21/3/25
#include<simplecpp>

// merge function modified slightly for 2D vectors
// merge function merges jobs[l] to jobs[mid] with jobs[mid+1] to jobs[r]
// and also stores them in place in the sorted order
void merge(vector<vector<int>>& jobs, int l, int mid, int r){
    int j = mid+1;
    int i = l;
    vector<vector<int>> sortedJobs;
    while(i <= mid || j <= r){
        if(i == mid+1){
            sortedJobs.push_back(jobs[j]);
            j++;
        }
        else if(j == r+1){
            sortedJobs.push_back(jobs[i]);
            i++;
        }
        else if(jobs[i][1] < jobs[j][1]){
            sortedJobs.push_back(jobs[i]);
            i++;
        }
        else{
            sortedJobs.push_back(jobs[j]);
            j++;
        }
    }
    // sort the jobs vector in place
    for(int i = l; i <= r; i++){
        jobs[i][0] = sortedJobs[i-l][0];
        jobs[i][1] = sortedJobs[i-l][1];
    }
    return;
}

// mergeSort function stays as it is
void mergeSort(vector<vector<int>>& jobs, int l, int r){
    // base case, one element is always sorted
    if(l==r)
        return;

    int mid = l+(r-l)/2;
    mergeSort(jobs, l, mid);
    mergeSort(jobs, mid+1, r);
    merge(jobs, l, mid, r);
}

// just a wrapper around the mergeSort function
void sort(vector<vector<int>>& jobs){
    mergeSort(jobs, 0, jobs.size()-1);
    return;
}

// helper function to check if the jobs are sorted correctly
void print(vector<vector<int>>& jobs){
    for(vector<int> job: jobs)
        cout << "[" << job[0] << ", " << job[1] << "] ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int jobId;
    vector<vector<int>> jobs(n, vector<int>(2, 0));

    // input all jobs, jobIds are useless and not required
    for(int i = 0; i < n; i++)
        cin >> jobId >> jobs[i][0] >> jobs[i][1];
    
    // sort the jobs in ascending order of ending times
    sort(jobs);
    // print(jobs);

    // count the number of jobs that can be 
    // performed after the current job has ended
    int last_end = -1, cnt = 0;
    for(int i = 0; i < jobs.size(); i++){
        if(last_end <= jobs[i][0]){
            last_end = jobs[i][1];
            cnt++;
        }
    }
    cout << cnt <<endl;
}