// Author: Om Godage
// Date: 21/3/25
#include<simplecpp>

// merge function modified slightly for 2D vectors
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
        // slight modification to handle jobs with same start time
        // if start time is same, pick the one which ends earlier
        else if(jobs[i][1] < jobs[j][1] || (jobs[i][1] == jobs[j][1] && jobs[i][2] < jobs[j][2])){
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
        jobs[i][2] = sortedJobs[i-l][2];
    }
    return;
}

// mergeSort function stays as it is
void mergeSort(vector<vector<int>>& jobs, int l, int r){
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
        cout << job[0] << " " << job[1] << " " << job[2] << endl;
}

int main(){
    int n;
    cin >> n;
    // int jobId;
    vector<vector<int>> jobs(n, vector<int>(3, 0));

    // input all jobs, jobIds are useless and not required
    for(int i = 0; i < n; i++)
        cin >> jobs[i][0] >> jobs[i][1] >> jobs[i][2];
    
    // sort the jobs in ascending order of ending times
    sort(jobs);
    print(jobs);

}