EnvAutoSet(0);
BGOpen("wf710",2);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
ChLayout(1);
MsgClose();
ChOpen(1,33,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040106500_01_000");
MsgDisp("Kazama","They're going to get fired off one after
the other from here on.");
MsgSel("A summer tradition painting the sky! Tamayaaa!","Oh, look! A big heart shape∈","I'm a little sad it's over.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040106500_01_010");
    MsgDisp("Kazama","Love it.
I think you must be the only high school
student that loves this classic that much.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("B040106500_01_020");
    MsgDisp("Kazama","You're right.
To be able to make it into a heart no
matter what direction you see it from...
That's some amazing craftsmanship.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040106500_01_030");
    MsgDisp("Kazama","Hey, hasn't it only just begun?");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
