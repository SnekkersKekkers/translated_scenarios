BGDateAfterOpen();
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B350700000_07_000");
MsgDisp("Mikage?","Oiー.");
MsgClose();
ChOpen(7,255,5,0,0,-1,-1,0,0,0,60);
MsgDisp("主人公","Huh,｛御影＊＊｝?
What's wtong? ");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B350700000_07_010");
MsgDisp("Mikage","That's my line.
Why are you walking home by yourself?
What about those guys?");
MsgDisp("主人公","They've already gone home.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B350700000_07_020");
MsgDisp("Mikage","What are they doing... geez.
Come on, I'll take you home.");
MsgSel("Thank you very much!","I'll go home by myself?");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B350700000_07_030");
    MsgDisp("Mikage","Oh.
I'm gonna scold them～");
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B350700000_07_040");
    MsgDisp("Mikage","Huh? Really?
My bad, my bad, I'll have to 
apologize to those guys too.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B350700000_07_050");
    MsgDisp("Mikage","See you then.
Be careful.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("主人公","(Should I have let him take me home?
Maybe I messed up...)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
