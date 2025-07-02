BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm late!
｛七ツ森＊｝ is... Ah, he's already here!)");
BGMPlay("BGM_C04_NANA_A",0.01);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(-1);
    ChOpen(4,253,0,0,2,-1,-1,0,0,0,60);
    MsgDisp("主人公","Sorry for making you wait!");
    ChMouth(4,2);
    ChMotion(4,2);
    VoicePlay("B010400000_04_000");
    MsgDisp("Nanatsumori","'s fine..");
    MsgDisp("主人公","Um...");
    MsgDispSksp(1,0);
    ChEye(4,4);
    ChMouth(4,2);
    ChMotion(4,1);
    VoicePlay("B010400000_04_010");
    MsgDisp("Nanatsumori","I'm not mad.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgClose();
    ChNanaType(-1);
    ChOpen(4,253,0,0,2,-1,-1,0,0,0,60);
    MsgDisp("主人公","Sorry for making you wait!");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("B010400000_04_020");
    MsgDisp("Nanatsumori","I'll forgive you, since you came running.");
    MsgDisp("主人公","Ugh... Sorry.");
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("B010400000_04_030");
    MsgDisp("Nanatsumori","Haha,
what a funny face～");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(-1);
    ChOpen(4,253,0,4,5,-1,-1,0,0,0,60);
    MsgDisp("主人公","I'm sorry for keeping you waiting!");
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("B010400000_04_040");
    MsgDisp("Nanatsumori","You're late!
Seriously, I was so worried.");
    MsgDisp("主人公","Ugh... I'm sorry.");
    MsgDispSksp(1,0);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2);
    VoicePlay("B010400000_04_050");
    MsgDisp("Nanatsumori","Ah...
No, I'm sorry for yelling.
I'll keep my cool.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
