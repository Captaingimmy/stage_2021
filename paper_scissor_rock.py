#paper scissor rock


trovato = True

while trovato:
    trovato = True
    i = 0
    j = 0
    arr =  []

    titol = 'paper rock scissor\n\n'
    print(titol.center(150))

    player1 = input('player1 = paper rock scissor?? ')
    print('\n\n')

    player2 = input('player2 = paper rock scissor?? ')
    print('\n\n')

    if player1 == 'scissor' and player2 == 'paper':
        print('the winner is player1')
        i +=1
        j = 0
        i = arr[]
        print(arr[])
        
        
        
    if player2 == 'scissor' and player1 == 'paper':
        print('the winner is player2')
        j +=1
        i = 0
        
    
    if player1 == 'scissor' and player2 == 'rock':
        print('the winner is player2')
        j +=1
        i = 0
        
    
    if player1 == 'rock' and player2 == 'scissor':
        print('the winner is player1')
        i +=1
        j = 0
        
        
    if player1 == 'rock' and player2 == 'paper':
        print('the winner is player2')
        j +=1
        i = 0
        
    
    if player1 == 'paper' and player2 == 'rock':
        print('the winner is player1')
        i +=1
        j = 0
        
    
    if player1 == 'paper' and player2 == 'paper':
        print('draw')

    if player1 == 'rock' and player2 == 'rock':
        print('draw')
    
    if player1 == 'scissor' and player2 == 'scissor':
        print('draw')
    
    if player1 == 'exit' and player2 == 'exit':
        trovato = False
    

