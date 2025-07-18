BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,2,0,0,0,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623200_06_000");
MsgDisp("Himuro","Haa...it's finally over.");
MsgSel("We were able to enjoy a beautiful view♪","It was so nice I began to feel sleepy...","It was high, cramped and scary...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040623200_06_010");
    MsgDisp("Himuro","I'm glad I didn't endure it for nothing.
I don't know what I would do if you were
to say it was boring.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623200_06_020");
    MsgDisp("Himuro","...Ehhh?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,1);
    VoicePlay("B040623200_06_030");
    MsgDisp("Himuro","Why did you go on this?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
