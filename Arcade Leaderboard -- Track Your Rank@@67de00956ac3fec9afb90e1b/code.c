def get_dense_ranks(leaderboard_scores):
    dense_ranks = []
    rank = 1
    prev_score = None
    
    for score in leaderboard_scores:
        if score != prev_score:
            rank = len(dense_ranks) + 1
        dense_ranks.append(rank)
        prev_score = score
    
    return dense_ranks

def get_player_ranks(leaderboard_scores, player_scores):
    unique_scores = sorted(set(leaderboard_scores), reverse=True)
    ranks = []
    index = len(unique_scores)  # Start from the lowest rank
    
    for score in player_scores:
        while index > 0 and score >= unique_scores[index - 1]:
            index -= 1
        ranks.append(index + 1)
    
    return ranks
