BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040615100_06_000");
MsgDisp("Himuro","Then, let's get started.");
MsgSel("I won't lose!","｛氷室＊＊｝'s ball looks heavy.","A competition is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040615100_06_010");
    MsgDisp("Himuro","Me neither.
I'm hoping for a good competition.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040615100_06_020");
    MsgDisp("Himuro","Not really.
This is pretty normal.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040615100_06_030");
    MsgDisp("Himuro","Ah, I see.
That's dull.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
