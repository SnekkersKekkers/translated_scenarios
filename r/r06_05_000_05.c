SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("R060500005_05_000");
    MsgDisp("Hiiragi","Yeah, this is not bad.
Thank you very much.");
    MsgDisp("主人公","(It seems that he's really happy with my
gift!)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("R060500005_05_010");
    MsgDisp("Hiiragi","Woah, this is pretty cool.
I look forward to using this.");
    MsgDisp("主人公","(It seems that he's really happy with my
gift!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
