int minEatingSpeed(int* piles, int pilesSize, int h) {
    int canEatAll(int* piles, int pilesSize, int k, int h) {
        int hours = 0;
        
        for (int i = 0; i < pilesSize; i++) {
            hours += (int)ceil((double)piles[i] / k);
            if (hours > h) return 0;  // No need to check further if hours exceed h
        }
        
        return hours <= h;
    }

    int left = 1, right = 0;

    // Set right to the max pile size
    for (int i = 0; i < pilesSize; i++) {
        if (piles[i] > right) {
            right = piles[i];
        }
    }

    // Binary search for the minimum speed k
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (canEatAll(piles, pilesSize, mid, h)) {
            right = mid;  // Try a smaller speed
        } else {
            left = mid + 1;  // Increase speed
        }
    }

    return left;  // The minimum speed k
}