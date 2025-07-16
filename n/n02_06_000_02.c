ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020600002_06_000");
    MsgDisp("Himuro","Not good, but not bad.");
    MsgDisp("主人公","Uh...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("N020600002_06_010");
    MsgDisp("Himuro","Next time, get a score that is worth
commenting on.");
    MsgDisp("主人公","(Oof.
I have to study a little harder.)");
    break ;
    case 3:
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020600002_06_020");
    MsgDisp("Himuro","Your results, I saw it.
Is it really just that?");
    MsgDisp("主人公","Is that a bad thing?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("N020600002_06_030");
    MsgDisp("Himuro","If you're happy with it, I guess it's
fine?");
    MsgDisp("主人公","(Oof.
I have to study a little harder...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020600002_06_040");
    MsgDisp("Himuro","This isn't like you.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("N020600002_06_050");
    MsgDisp("Himuro","I thought you would aim for a higher
score.");
    MsgDisp("主人公","Is that so...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("N020600002_06_060");
    MsgDisp("Himuro","Yeah.
I know you can do it.");
    MsgDisp("主人公","(Oof.
I have to study a little harder...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
