BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
ScrFadeIn(0);
VoicePlay("B040120001_01_000");
MsgDisp("Kazama","The weather is also nice, shall we go to the
summit?");
MsgSel("Let's take on a super hard course!","You shouldn't underestimate the winter mountains...","There's a two-person sled!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040120001_01_010");
    MsgDisp("Kazama","You really can't take a joke, can you?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040120001_01_020");
    MsgDisp("Kazama","Haha!
Oi, where are you from, veteran guide∋");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040120001_01_030");
    MsgDisp("Kazama","Yeah, then it's decided.
Why haven't I noticed that until now?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
