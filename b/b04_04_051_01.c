BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040405101_04_000");
MsgDisp("Nanatsumori","Even in an artificial starry sky, there
are sights that just make you want to take
a picture.");
MsgSel("Let's forget about photos for now?","It would be nice if it was okay to take pictures","Show me a picture of the real starry sky");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040405101_04_010");
    MsgDisp("Nanatsumori","Hey.
Was I dissing planetariums?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040405101_04_020");
    MsgDisp("Nanatsumori","Well yeah. But, a real starry sky is
better. One day, I'll take a pretty
picture of it and show it to you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040405101_04_030");
    MsgDisp("Nanatsumori","ＯＫ. Both a starry sky with a new moon
and a starry sky with a moon floating in
it have their own individual charms.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
