switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(7,254,3,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("X110700002_07_000");
    MsgDisp("Mikage","They say that the judo practice
match was decided by one glorious 
ippon? That's amazing.");
    MsgDisp("主人公","Thank you very much!");
    MsgDisp("主人公","(Yay!
I was praised by ｛御影＊＊｝ 1)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,254,1,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("X110700002_07_010");
    MsgDisp("Mikage","They say you won all your practice
matches with an ippon?
Congrats.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
Thank you very much.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("X110700002_07_020");
    MsgDisp("Mikage","You're not just gentle, 
you're strong too.");
    MsgDisp("主人公","(To think that I was praised by
｛御影＊＊｝,cI'm super happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
