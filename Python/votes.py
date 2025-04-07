def interview_decision():
    print("Interview Panel Decision: Enter 'Y' for Yes and 'N' for No.")
    
    votes = []
    for i in range(1, 6):
        vote = input(f"Panel Member {i}'s vote: ").strip().upper()
        if vote in ('Y', 'N'):
            votes.append(vote)
        else:
            print("Invalid input. Please enter 'Y' or 'N'.")
            return

    positive_votes = votes.count('Y')
    if positive_votes >= 3:
        print("Candidate advances to the next round!")
    else:
        print("Candidate does not advance to the next round.")

# Run the decision-making process
interview_decision()