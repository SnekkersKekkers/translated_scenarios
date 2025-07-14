BGOpen("sc761",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Next is...... Ah, it's ｛本多＊＊｝. )");
    MsgClose();
    ChOpen(3,30,1,0,3,#1,#1,0,0);
    VoicePlay("O080300000_03_000");
    MsgDisp("Honda","Let's dance!");
    break ;
    case 3:
    MsgDisp("主人公","(Next is...... Ah, it's ｛本多＊＊｝. )");
    MsgClose();
    ChOpen(3,30,1,4,3,#1,#1,0,0);
    VoicePlay("O080300000_03_010");
    MsgDisp("Honda","Sorry if I step on your foot, okay?
I don't mind if you step on me, though.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Next is...... Ah, it's ｛本多＊＊｝. )");
    MsgClose();
    ChOpen(3,30,3,3,3,#1,#1,0,0);
    VoicePlay("O080300000_03_020");
    MsgDisp("Honda","Ah, you're here, you're here!
We finally met.");
    MsgDisp("主人公","Hehe, let's dance?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    ChCheek(3,8);
    VoicePlay("O080300000_03_030");
    MsgDisp("Honda","Hm...... that's weird. Even though I've
been waiting all this time, I'm getting
nervous, now......");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
