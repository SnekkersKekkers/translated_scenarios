BGOpen("sc604",0);
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have been going well
recently!)");
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("X120300000_03_000");
    MsgDisp("Honda","Recently, I've been looking forward to
hearing the Orchestra's performance coming
from the music room!");
    MsgDisp("主人公","(Yay!))");
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("X120300000_03_010");
    MsgDisp("Honda","Truthfully, recently I've been secretly
listening to you practice.
The sound was so beautiful.");
    MsgDisp("主人公","(Yay!
I got praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
