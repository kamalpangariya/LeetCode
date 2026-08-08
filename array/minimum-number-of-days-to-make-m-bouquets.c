int minDays(int* bloomDay, int bloomDaySize, int m, int k) {
    long long left = 1, right = 1000000000, result = -1;

    // Check if it's even possible to make m bouquets with k flowers
    if ((long long)bloomDaySize < (long long)m * k) {
        return -1; // Not enough flowers to form m bouquets
    }

    // Function to check if we can form m bouquets by a given day
    int canMakeBouquets(int* bloomDay, int bloomDaySize, int m, int k, int day) {
        int bouquets = 0;
        int count = 0;

        for (int i = 0; i < bloomDaySize; i++) {
            if (bloomDay[i] <= day) {
                count++;
                // If we have enough flowers for a bouquet, increase the bouquet count
                if (count == k) {
                    bouquets++;
                    count = 0; // reset the count after forming one bouquet
                }
            } else {
                count = 0; // reset the count if the flower hasn't bloomed
            }
        }

        return bouquets >= m; // check if we can make at least m bouquets
    }

    // Binary search for the minimum day
    while (left <= right) {
        long long mid = left + (right - left) / 2;

        if (canMakeBouquets(bloomDay, bloomDaySize, m, k, (int)mid)) {
            result = mid; // this day works, try to find a smaller day
            right = mid - 1;
        } else {
            left = mid + 1; // this day doesn't work, try a later day
        }
    }

    return result;
}