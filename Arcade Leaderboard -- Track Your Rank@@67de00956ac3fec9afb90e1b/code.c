#include <stdio.h>

void get_player_ranks(int leaderboard[], int n, int player_scores[], int m) {
    int unique_scores[n];
    int rank[n];
    int count = 0;

    // Creating unique scores with dense ranks
    for (int i = 0; i < n; i++) {
        if (i == 0 || leaderboard[i] != leaderboard[i - 1]) {
            unique_scores[count] = leaderboard[i];
            rank[count] = count + 1;
            count++;
        }
    }

    int index = count; // Start from the lowest rank
    for (int i = 0; i < m; i++) {
        while (index > 0 && player_scores[i] >= unique_scores[index - 1]) {
            index--;
        }
        printf("%d\n", index + 1);
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int leaderboard[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
    }
    
    scanf("%d", &m);
    int player_scores[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &player_scores[i]);
    }
    
    get_player_ranks(leaderboard, n, player_scores, m);
    return 0;
}
