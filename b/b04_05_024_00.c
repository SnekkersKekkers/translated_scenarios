SEPlay("EV_SE_517");
Wait(110,0);
MsgClose();
ChOpen(5,255,2,4,4,-1,-1,0,0);
SEStop("EV_SE_517",2);
VoicePlay("B040502400_05_000");
MsgDisp("Hiiragi","So this is the sound of you and me...");
MsgSel("It's a beautiful sound...","Ah, the sound of perfect affinity!","One more time in commemoration!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChMotion(5,0);
    VoicePlay("B040502400_05_010");
    MsgDisp("Hiiragi","...It's a crystal clear tone.
the reverberation is nice too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("B040502400_05_020");
    MsgDisp("Hiiragi","Huh, so that's what it means?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040502400_05_030");
    MsgDisp("Hiiragi","This is a once in a lifetime experience.
Shall we do it again another time?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
