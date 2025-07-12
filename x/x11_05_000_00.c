switch (ChPrmGet(5,6)){
    case 3:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110500000_05_000");
    MsgDisp("Hiiragi","I heard the baseball club won 
their practice match.
Congratulations.");
    MsgDisp("主人公","Yeah!
Everyone gave it their all!");
    MsgDisp("主人公","(I'm glad we won...!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110500000_05_010");
    MsgDisp("Hiiragi","I heard the baseball club had gotten
a good result in their practice match?");
    MsgDisp("主人公","Yeah, I'm also happy!");
    ChEye(5,4);
    VoicePlay("X110500000_05_020");
    MsgDisp("Hiiragi","I understand just by looking.
That victory was thanks to you devoting 
all your energy towards the baseball club
usually.");
    MsgDisp("主人公","(Yay!
I was praised by ｛柊＊＊＊｝ )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
