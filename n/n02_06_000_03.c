ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,254,0,0,0,8,#1,0,0);
    VoicePlay("N020600003_06_000");
    MsgDisp("Himuro","What's up with this results...");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,8);
    VoicePlay("N020600003_06_010");
    MsgDisp("Himuro","Unbelievable. The lack of effort. That's
all.");
    MsgDisp("主人公","(Oof...
I have to study harder...)");
    break ;
    case 3:
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020600003_06_020");
    MsgDisp("Himuro","...
Did you turn in a blank paper?");
    MsgDisp("主人公","Huh, I filled in all the answers...");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("N020600003_06_030");
    MsgDisp("Himuro","Then... did you put them in the wrong
column?");
    MsgDisp("主人公","(Oof...
I have to study harder...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,2,0,#1,#1,0,0);
    VoicePlay("N020600003_06_040");
    MsgDisp("Himuro","...");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝...");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("N020600003_06_050");
    MsgDisp("Himuro","It's true that I've been concerned.
I haven't seen you do any studying.");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("N020600003_06_060");
    MsgDisp("Himuro","But some hardworking people don't show it,
so I didn't pry...
That was not a good idea.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("N020600003_06_070");
    MsgDisp("Himuro","If you need help, talk to me.
I think there are some things I can
understand in your senior exam.");
    MsgDisp("主人公","Okay, thank you...");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("N020600003_06_080");
    MsgDisp("Himuro","If you really want it, you'll be at the
top of the list in no time.
I'm rooting for you.");
    MsgDisp("主人公","(Oof...
I have to study harder...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
