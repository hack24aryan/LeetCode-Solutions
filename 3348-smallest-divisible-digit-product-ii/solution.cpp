        int zeroPos = num.find('0');
        int zeroIdx = n-1;
        if(zeroPos != -1) {
            zeroIdx = zeroPos;
        }

        for(int i = zeroIdx; i >= 0; i--) {
            ll required = remainingFactor[i];
            int freeSlots = n - 1 - i;

            for(int digit = (num[i] - '0')+1; digit <= 9; digit++) {
                ll furtherRequired = required / gcd(required, digit);
                string requiredNumber = freeSlotsFiller(furtherRequired, freeSlots);

                if(requiredNumber.length() == freeSlots) {
                    return num.substr(0, i) + char(digit + '0') + requiredNumber;
                }
            }
        }

        return freeSlotsFiller(t, n+1); //num = "11", t = 2^15
    }
};
