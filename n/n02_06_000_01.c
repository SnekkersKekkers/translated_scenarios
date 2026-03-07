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
    MsgDisp("主人公","Ah, ｛Himuro＊＊｝.
You came to look?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("N020600001_06_010");
    MsgDisp("Himuro","I wanted to see what you got.
Well... it's not bad.");
    MsgDisp("主人公","(Alright…
I'm glad I worked hard.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020600001_06_020");
    MsgDisp("Himuro","Not bad.");
    MsgDisp("主人公","Ah, ｛Himuro＊＊｝.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("N020600001_06_030");
    MsgDisp("Himuro","You're up near the top.
I guess next you're aiming for first place.");
    MsgDisp("主人公","Y-Yeah!
I'll do my best.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("N020600001_06_040");
    MsgDisp("Himuro","I'm expecting great things.");
    MsgDisp("主人公","(Alright, I'm glad I worked hard.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,4,#1,#1,0,0);
    VoicePlay("N020600001_06_050");
    MsgDisp("Himuro","Nice job.");
    MsgDisp("主人公","Ah, ｛Himuro＊＊｝.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("N020600001_06_060");
    MsgDisp("Himuro","You made it to the top.
The fruits of your labor, I'm guessing?");
    MsgDisp("主人公","Yeah... I guess so?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("N020600001_06_070");
    MsgDisp("Himuro","You don't get that rank without 
putting in steady work.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("N020600001_06_080");
    MsgDisp("Himuro","I should try my best too.");
    MsgDisp("主人公","(Alright, I'm glad I tried my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
