camel = """
Switching on camera from habitat with camels...
 ___.-''''-.
/___  @    |
',,,,.     |         _.'''''''._
     '     |        /           \\
     |     \    _.-'             \\
     |      '.-'                  '-.
     |                               ',
     |                                '',
      ',,-,                           ':;
           ',,| ;,,                 ,' ;;
              ! ; !'',,,',',,,,'!  ;   ;:
             : ;  ! !       ! ! ;  ;   :;
             ; ;   ! !      ! !  ; ;   ;,
            ; ;    ! !     ! !   ; ;     
            ; ;    ! !    ! !     ; ;
           ;,,      !,!   !,!     ;,;
           /_I      L_I   L_I     /_I
Yey, our little camel is sunbathing!"""

lion = """
Switching on camera from habitat with lions...
                                               ,w.
                                             ,YWMMw  ,M  ,
                        _.---.._   __..---._.'MMMMMw,wMWmW,
                   _.-""        '''           YP"WMMMMMMMMMb,
                .-' __.'                   .'     MMMMW^WMMMM;
    _,        .'.-'"; `,       /`     .--""      :MMM[==MWMW^;
 ,mM^"     ,-'.'   /   ;      ;      /   ,       MMMMb_wMW"  @\\
,MM:.    .'.-'   .'     ;     `\    ;     `,     MMMMMMMW `"=./`-,
WMMm__,-'.'     /      _.\      F'''-+,,   ;_,_.dMMMMMMMM[,_ / `=_}
"^MP__.-'    ,-' _.--""   `-,   ;       \  ; ;MMMMMMMMMMW^``; __|
           /   .'            ; ;         )  )`{  \ `"^W^`,   \  :
          /  .'             /  (       .'  /     Ww._     `.  `"
         /  Y,              `,  `-,=,_{   ;      MMMP`""-,  `-._.-,
        (--, )                `,_ / `) \/"")      ^"      `-, -;"\:
The lion is croaking!"""

deer = """
Switching on camera from habitat with deers...
   /|       |\\
`__\\\\       //__'
   ||      ||
 \__`\     |'__/
   `_\\\\   //_'
   _.,:---;,._
   \_:     :_/
     |@. .@|
     |     |
     ,\.-./ \\
     ;;`-'   `---__________-----.-.
     ;;;                         \_\\
     ';;;                         |
      ;    |                      ;
       \   \     \        |      /
        \_, \    /        \     |\\
          |';|  |,,,,,,,,/ \    \ \_
          |  |  |           \   /   |
          \  \  |           |  / \  |
           | || |           | |   | |
           | || |           | |   | |
           | || |           | |   | |
           |_||_|           |_|   |_|
          /_//_/           /_/   /_/
Our 'Bambi' looks hungry. Let's go to feed it!"""

goose = """
Switching on camera from habitat with lovely goose...

                                    _
                                ,-"" "".
                              ,'  ____  `.
                            ,'  ,'    `.  `._
   (`.         _..--.._   ,'  ,'        \    \\
  (`-.\    .-""        ""'   /          (  d _b
 (`._  `-"" ,._             (            `-(   \\
 <_  `     (  <`<            \              `-._\\
  <`-       (__< <           :
   (__        (_<_<          ;
    `------------------------------------------
This bird stares intently at you... (Maybe it's time to change the channel?)"""

bat = """
Switching on camera from habitat with bats...
_________________               _________________
 ~-.              \  |\___/|  /              .-~
     ~-.           \ / o o \ /           .-~
        >           \\\\  W  //           <
       /             /~---~\             \\
      /_            |       |            _\\
         ~-.        |       |        .-~
            ;        \     /        i
           /___      /\   /\      ___\\
                ~-. /  \_/  \ .-~
                   V         V
It looks like this bat is fine."""

rabbit = """
Switching on camera from habitat with rabbits...
         ,
        /|      __
       / |   ,-~ /
      Y :|  //  /
      | jj /( .^
      >-"~"-v"
     /       Y
    jo  o    |
   ( ~T~     j
    >._-' _./
   /   "~"  |
  Y     _,  |
 /| ;-"~ _  l
/ l/ ,-"~    \\
\//\/      .- \\
 Y        /    Y 
 l       I     !
 ]\      _\    /"\\
(" ~----( ~   Y.  )
It seems there will be more rabbits soon!"""

animals = [camel, lion, deer, goose, bat, rabbit]
while True:
    A = input('Which habitat # do you need? ')
    if A != 'exit':
        B = int(A)
        print(animals[B])
    else:
        print('See you!')
        break
