switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(3,254,1,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110300000_03_000");
    MsgDisp("Honda","Oh, I heard. I heard the baseball team won
the game? Congratulations!");
    MsgDisp("主人公","｛本多＊＊｝, thank you.");
    MsgDisp("主人公","(Yeah, I'm glad I did my best ......!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,254,5,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110300000_03_010");
    MsgDisp("Honda","The baseball team, I heard they won
dramatically.
It was talked about in class.");
    MsgDisp("主人公","｛本多＊＊｝. Yes, we did!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("X110300000_03_020");
    MsgDisp("Honda","Dang, that's a good one! I'm sure it was
because of that smile, I'm betting the
players were able to do their best, too.");
    MsgDisp("主人公","(I was praised by ｛本多＊＊｝! )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
