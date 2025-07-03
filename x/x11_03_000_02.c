switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(3,254,1,0,3,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110300002_03_000");
    MsgDisp("Honda","I heard you won the judo match.
Congratulations!");
    MsgDisp("主人公","｛本多＊＊｝, thanks!");
    MsgDisp("主人公","(I'm glad I won!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,254,4,0,3,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110300002_03_010");
    MsgDisp("Honda","I heard it! You won by a single point,
didn't you? I wish I could have seen it,
Your brilliant back suiage throw!");
    MsgDisp("主人公","Ah,｛本多＊＊｝.
Hmmm, thanks!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("X110300002_03_020");
    MsgDisp("Honda","Hey, can you throw me one next time?");
    MsgDisp("主人公","(Can you do it ......?
But I'm glad we won!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
