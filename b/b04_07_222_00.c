BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040722200_07_000");
MsgDisp("Mikage","This is a safe bet for a class field trip
right?");
MsgSel("Ah, looks like there's a new exhibition!","It's not typical of ｛御影＊＊｝.","I would prefer a more fun place...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040722200_07_010");
    MsgDisp("Mikage","Oh, I see.
I'm glad.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040722200_07_020");
    MsgDisp("Mikage","Hmm, I'll keep that in mind for next time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040722200_07_030");
    MsgDisp("Mikage","I understand how you feel?
But, it is a class field trip after all.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
