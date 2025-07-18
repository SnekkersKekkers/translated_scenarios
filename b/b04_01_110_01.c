BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0,1);
ChCheek(1,3);
ScrFadeIn(0);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChCheek(1,3);
VoicePlay("B040111001_01_000");
MsgDisp("Kazama","Hey, don't you think your swimsuit...
Stands out too much?");
MsgSel("Huh? Is it weird...?","I was going for bold.","What's your preference?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,4);
    ChCheek(1,7);
    VoicePlay("B040111001_01_010");
    MsgDisp("Kazama","No, it's not weird. Not weird, but...It
stands out. ...Just my opinion.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,7);
    ChCheek(1,7);
    VoicePlay("B040111001_01_020");
    MsgDisp("Kazama","You don't need to be that bold.
There are roaming eyes everywhere...
Especially looking at you.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,1);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    ChCheek(1,10);
    VoicePlay("B040111001_01_030");
    MsgDisp("Kazama","I don't have any preference in girl
swimsuits!");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
