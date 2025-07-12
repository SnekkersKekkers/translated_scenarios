ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020600001_06_000");
    MsgDisp("Himuro","Huh.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
You came to see me?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("N020600001_06_010");
    MsgDisp("Himuro","I wanted to see what you got.
Well, is that good enough for you?");
    MsgDisp("主人公","(Alright, I'm gonna try a bit more next
time.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020600001_06_020");
    MsgDisp("Himuro","Not bad.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("N020600001_06_030");
    MsgDisp("Himuro","Do you want to hold that spot?
Well, next time, you should aim higher.");
    MsgDisp("主人公","Y-Yeah! I'll do my best.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("N020600001_06_040");
    MsgDisp("Himuro","I'm counting on you.");
    MsgDisp("主人公","(Alright, I'm gonna try a bit more next
time.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,4,#1,#1,0,0);
    VoicePlay("N020600001_06_050");
    MsgDisp("Himuro","Nice job.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("N020600001_06_060");
    MsgDisp("Himuro","Among the first.
The fruits of your labor, I'm guessing?");
    MsgDisp("主人公","Hm, you think so?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("N020600001_06_070");
    MsgDisp("Himuro","If you don't work hard, you won't get a
higher position than that.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("N020600001_06_080");
    MsgDisp("Himuro","Be sure to do your best.");
    MsgDisp("主人公","(Alright, I'm gonna try a bit more next
time.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
