SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("R060500007_05_000");
    MsgDisp("Hiiragi","You were aiming for a very niche
interest...ah, no, I'm sure that someone
would be shocked getting this.");
    MsgDisp("主人公","(Darn, it seems that he wasn't very happy
with my gift...)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("R060500007_05_010");
    MsgDisp("Hiiragi","I got your present.
I can't wish for better luck than that...");
    MsgDisp("主人公","(Darn, it seems that he wasn't very happy
with my gift...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
