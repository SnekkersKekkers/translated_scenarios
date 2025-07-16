BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 3:
    ChNanaType(0);
    ChOpen(4,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0400000_04_000");
    MsgDisp("Nanatsumori","You did it.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
We won!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H1A0400000_04_010");
    MsgDisp("Nanatsumori","Yeah, I was watching.
Congrats!");
    MsgDisp("主人公","(I'm glad that I stayed as the baseball
club manager!)");
    break ;
    case 4:
    case 5:
    ChNanaType(0);
    ChOpen(4,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0400000_04_020");
    MsgDisp("Nanatsumori","Congrats on the win.");
    MsgDisp("主人公","｛七ツ森＊｝......
Thank you!");
    VoiceEVSPlay(4);
    VoicePlay("H1A0400000_04_030");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","Hm?");
    ChMotion(4,0,1);
    VoicePlay("H1A0400000_04_040");
    MsgDisp("Nanatsumori","I think a big reason why they were able to
win here was because of your dedication to
the club.");
    MsgDisp("主人公","｛七ツ森＊｝......");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H1A0400000_04_050");
    MsgDisp("Nanatsumori","I envy the baseball club.
I'm a little jealous.");
    MsgDisp("主人公","(I'm glad that I stayed as the baseball
club manager!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
