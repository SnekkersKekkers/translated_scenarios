BGOpen("wf620",0);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("B040306301_03_000");
MsgDisp("Honda","｛主人公｝, aren't you cold?");
MsgSel("Is｛本多＊＊｝ alright?","I'm good with the cold","Actually, I'm sensitive to the cold...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040306301_03_010");
    MsgDisp("Honda","I'm completely fine. 
After all, it's the winter sea right?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040306301_03_020");
    MsgDisp("Honda","Nice, same same.
Until middle school, I wore shorts
even in the middle of winter.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,2);
    VoicePlay("B040306301_03_030");
    MsgDisp("Honda","Eh, is that so?
Then, let's wrap this up quickly.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
