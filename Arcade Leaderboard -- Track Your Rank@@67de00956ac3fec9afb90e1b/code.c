void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Create dense ranks for the leaderboard
    int ranks[200000];
    ranks[0] = 1;
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1]) {
            ranks[i] = ranks[i - 1];
        } else {
            ranks[i] = ranks[i - 1] + 1;
        }
    }

    // Traverse player's scores and find ranks efficiently
    int currentRankIdx = n - 1; // Start from the end of leaderboard
    for (int i = 0; i < m; i++) {
        while (currentRankIdx >= 0 && player[i] >= ranked[currentRankIdx]) {
            currentRankIdx--;
        }
        // If currentRankIdx is -1, player's score is the highest
        if (currentRankIdx == -1) {
            result[i] = 1;
        } else {
            result[i] = ranks[currentRankIdx] + 1;
        }
    }
}