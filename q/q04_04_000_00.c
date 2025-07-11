ChLayout(1);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛七ツ森＊｝！");
    MsgClose();
    SEPlay("EV_SE_544");
    ChNanaType(0);
    ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
    VoicePlay("Q040400000_04_000");
    MsgDisp("Nanatsumori","Hm?");
    MsgDisp("主人公","If you're cool with it, do you wanna look
around together for today's free period?");
    break ;
    case 3:
    MsgDisp("主人公","｛七ツ森＊｝！");
    MsgClose();
    SEPlay("EV_SE_544");
    ChNanaType(0);
    ChOpen(4,254,0,0,3,-1,-1,0,0,0,60);
    VoicePlay("Q040400000_04_010");
    MsgDisp("Nanatsumori","Mornin'. You're really energetic today,
huh.");
    MsgDisp("主人公","Hehe! Won't you come with me this the free
time?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛七ツ森＊｝！");
    MsgClose();
    SEPlay("EV_SE_544");
    ChNanaType(0);
    ChOpen(4,254,0,0,3,-1,-1,0,0,0,60);
    VoiceEVSPlay(4);
    VoicePlay("Q040400000_04_020");
    MsgDisp("Nanatsumori","｛主人公｝.
Mornin'.");
    MsgDisp("主人公","Morning. So I was thinking...");
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("Q040400000_04_030");
    MsgDisp("Nanatsumori","Wait.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q040400000_04_040");
    MsgDisp("Nanatsumori","...I have my hopes up.");
    MsgDisp("主人公","Hehe! Wanna come with me this free period?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
