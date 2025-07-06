BGOpen("wf620",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106300_01_000");
MsgDisp("Kazama","I love the air around the sea
this time of year, it's so crisp...");
MsgSel("A winter ocean for two!","The winter sea feels so sad…","The winter ocean is full of yummy foods ♪");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040106300_01_010");
    MsgDisp("Kazama","Yeah, way better than feeling so
cluttered.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,2);
    VoicePlay("B040106300_01_020");
    MsgDisp("Kazama","Right? I can just imagine
all of the things drifting ashore,
out there for who knows how long.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040106300_01_030");
    MsgDisp("Kazama","Yeah, yeah. There's all kinds of seaweed
coming up this time of year. Go ahead, eat
all you want.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
