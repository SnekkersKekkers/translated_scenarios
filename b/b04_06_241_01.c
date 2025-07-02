BGOpen("tr510",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ScrFadeIn(0);
VoicePlay("B040624101_06_000");
MsgDisp("Himuro","They're selling cow milk ice cream.");
MsgSel("Seems delicious!","Shall we eat it together?","Are you interested?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,0);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040624101_06_010");
    MsgDisp("Himuro","I thought you'd like it.
Then, let's go buy some.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5);
    ChCheek(6,10);
    VoicePlay("B040624101_06_020");
    MsgDisp("Himuro","Together...
No, maybe I'm overthinking it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040624101_06_030");
    MsgDisp("Himuro","I'm not really.
If you're not interested,
just ignore it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
