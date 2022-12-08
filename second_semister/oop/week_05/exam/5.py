space_invaders = [] 
player_pos = ( 200 , 25 ) 
level = 1 
max_level = 10 

def play ( ) : 
   
    while ( level < max_level +1 ) :
         if len ( space_invaders ) == 0 : 
            level += 1 
            continue 


""""
Global:  space_invaders, player_pos, level, max_level, play.
Built-in: def, while, if, len, continue.
Local: which, if, len, continue.

"""