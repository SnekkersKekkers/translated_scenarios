MsgClose();
ChOpen(3,30,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("O040301100_03_000");
    MsgDisp("Honda","I see, so you're on the other team.
This'll be tough!");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O040301100_03_010");
    MsgDisp("Honda","You're on the other team......
This is an interesting matchup!");
    break ;
    case 4:
    case 5:
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("O040301100_03_020");
    MsgDisp("Honda","Da, what's going on!?
But, let's both do our best!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
