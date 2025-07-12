MsgClose();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("N020400000_04_000");
    MsgDisp("Nanatsumori","Top of the grade?
Wow.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChMouth(4,4);
    VoicePlay("N020400000_04_010");
    MsgDisp("Nanatsumori","Very cool.");
    MsgDisp("主人公","(That's a little cold, but...
I'm glad I did my best!)");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,2);
    VoicePlay("N020400000_04_020");
    MsgDisp("Nanatsumori","Eh, top rank∋
Really...");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("N020400000_04_030");
    MsgDisp("Nanatsumori","I never imagined meeting someone who would
come out on top at the end of the term...");
    MsgDisp("主人公","(He's completely shocked...
Hehe, I'm glad I did my best!)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,2);
    VoicePlay("N020400000_04_040");
    MsgDisp("Nanatsumori","Incredible...");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("N020400000_04_050");
    MsgDisp("Nanatsumori","Congratulations on being the top student
in our grade.
You are really cool.");
    ChEye(4,4);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("N020400000_04_060");
    MsgDisp("Nanatsumori","Hey, when are you studying?
You spend a lot of time with me, right?
Why do we have different results∋");
    MsgDisp("主人公","(Oops, you're overthinking this...
Yeah, I'm glad I did my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
