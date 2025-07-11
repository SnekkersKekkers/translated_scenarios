ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Hmmm, ｛柊＊＊＊｝ is... there!)");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoicePlay("Q040500000_05_000");
    MsgDisp("Hiiragi","Good morning.");
    MsgDisp("主人公","Good morning! Hey, can we go together for
today's free period?");
    break ;
    case 3:
    MsgDisp("主人公","(Hmmm, ｛柊＊＊＊｝ is... there!)");
    MsgDisp("主人公"," ｛柊＊＊＊｝ ！");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoicePlay("Q040500000_05_010");
    MsgDisp("Hiiragi","Good morning. Why are you in such a hurry?");
    MsgDisp("主人公","Yeah, I wanted to look around with you,
｛柊＊＊＊｝, for the free period. 
How about it?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(｛柊＊＊＊｝ is...... there!)");
    MsgDisp("主人公","｛柊＊＊＊｝!
Morning.");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(5,254,0,4,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("Q040500000_05_020");
    MsgDisp("Hiiragi","｛主人公｝, good morning. Were you looking
for me?");
    MsgDisp("主人公","I was. If you're all right with it, I was
thinking if we could go together for
today's free time period!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
