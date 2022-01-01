## Byzantine Generals Problem :

- There are 4 generals from a kingdom A who are going to attack on kingdom B with their army from different directions.
- They are away from each other so they use messengers for communication.

### 1st Scenario :- 

- Each general sends message to all the generals to attack. Thus, the attack becomes successful as correct information is received by all generals.

### 2nd Scenario :- 

- Here , one of the generals is a 'Traitor'.
- Out of 4, 3 generals send message to attack but only one general who is traitor send message 'Not to attack' to all genrals so that the attack will fail.

### Solution :- 

- The decision with most votes will be taken i.e 'majority' will be considered.
- In our case, as 3 generals say 'Attack' and only 1 is saying 'not to attack', so the final decision will be to attack based on majority.
- In real world, such conditions take place in 'Distributed Systems' such as Blockchain n/w, where a hacker might send false information to the computers connected in the n/w.
  So here decision will be taken on basis of majority.
