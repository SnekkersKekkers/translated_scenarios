BGOpen("sc606",0);
MsgClose();
ChOpen(5,254,0,0,3,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have 
been going well recently!)");
switch (ChPrmGet(5,6)){
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("X120500001_05_000");
    MsgDisp("Hiiragi","It is thanks to everyone in the
Gardening Club that all the plants in
the school are so lively. On behalf of the
students, let me say thank you.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("X120500001_05_010");
    MsgDisp("Hiiragi","The flowers and plants you put care 
into look especially beautiful.
It is evidence that you have 
raised them with love.");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
