BGOpen("ne330",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040516001_05_000");
MsgDisp("Hiiragi","Is there anything simple that I can do?");
MsgSel("Shall we try a dance game?","How about the pinballs?","I want to try the ＶＲ game!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,0);
    ChMotion(5,1);
    VoicePlay("B040516001_05_010");
    MsgDisp("Hiiragi","That's impossible. The moment I start,
I'll feel the sense of dismay from
spectators...even if I am unable to see
it.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040516001_05_020");
    MsgDisp("Hiiragi","A long time ago, I would play this in the
hotspring district.
I've missed it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,3);
    VoicePlay("B040516001_05_030");
    MsgDisp("Hiiragi","Virtual reality...
I'm extremely curious.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
