BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040115100_01_000");
MsgDisp("Kazama","Let's start with one game,
with no handicap.");
MsgSel("I won't lose!","｛風真＊＊｝'s ball looks heavy.'","A competition is kinda...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040115100_01_010");
    MsgDisp("Kazama","You seem pretty fired up.
But don't be too rash.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040115100_01_020");
    MsgDisp("Kazama","You should use something light.
You'll hurt your hand.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040115100_01_030");
    MsgDisp("Kazama","What happened to your usual energy?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
