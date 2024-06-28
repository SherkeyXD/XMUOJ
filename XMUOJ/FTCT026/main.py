def choose(cards : list) -> int:
    if len(cards) == 2:
        return max(cards)
    else:
        return max(
            cards[0] + min(choose(cards[2:]), choose(cards[1:-1])),
            cards[-1] + min(choose(cards[1:-1]), choose(cards[:-2]))
        )

n = int(input())
cards = list(map(int, input().split()))
print(choose(cards))