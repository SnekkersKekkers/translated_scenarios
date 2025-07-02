BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040115101_01_000");
MsgDisp("Kazama","Oh, that looks really good.");
MsgSel("Yeah, maybe I'll get a high score?","Maybe it's thanks to your guidance,｛風真＊＊｝?","We're fighting with real swords today!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040115101_01_010");
    MsgDisp("Kazama","Don't let your guard down.
Come on, go for another one.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040115101_01_020");
    MsgDisp("Kazama","Maybe? It's not that.
...Nothing will come out of it
even if you act cute?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040115101_01_030");
    MsgDisp("Kazama","I told you.
I won't let you surpass your master yet.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
