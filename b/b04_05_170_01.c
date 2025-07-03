BGOpen("ne340",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040517001_05_000");
MsgDisp("Hiiragi","I'd like to hear the 
song you sang to me before.");
MsgSel("Eh, what was it?","Then, shall we sing together?","\"My heart is always pounding?\"");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040517001_05_010");
    MsgDisp("Hiiragi","Ehh, even though we had such a good
time...?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040517001_05_020");
    MsgDisp("Hiiragi","Yes, the call and response part was really
fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040517001_05_030");
    MsgDisp("Hiiragi","That's it.
It was my job to say ＹＥＳ!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
