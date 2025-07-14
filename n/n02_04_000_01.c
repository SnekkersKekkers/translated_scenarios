MsgClose();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("N020400001_04_000");
    MsgDisp("Nanatsumori","You're a smart girl, huh.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChMotion(4,1,1);
    VoicePlay("N020400001_04_010");
    MsgDisp("Nanatsumori","It's surprising.
But still impressive.");
    MsgDisp("主人公","(Oof... that's a bit confusing, but I'm
glad I did my best!)");
    break ;
    case 3:
    ChEye(4,4);
    ChMouth(4,0);
    VoicePlay("N020400001_04_020");
    MsgDisp("Nanatsumori","So close.
You're almost at the top.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("N020400001_04_030");
    MsgDisp("Nanatsumori","Still way higher than my score though.
Since it's you, with a bit more studying,
you'll be at the top, right?");
    MsgDisp("主人公","(Alright, I'll do my best!)");
    break ;
    case 4:
    case 5:
    ChEye(4,4);
    ChMouth(4,0);
    VoicePlay("N020400001_04_040");
    MsgDisp("Nanatsumori","Among the top of our grade.
Very cool.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("N020400001_04_050");
    MsgDisp("Nanatsumori","In this environment, I'm still the modest
and introverted Nanatsumori, huh...");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("N020400001_04_060");
    MsgDisp("Nanatsumori","If I don't put in a bit more effort, maybe
I won't win your heart...
Whoops, see you.");
    MsgDisp("主人公","(I'll work a little harder too...!
｛七ツ森＊｝, do your best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
