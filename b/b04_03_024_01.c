SEPlay("EV_SE_518");
SEWait();
ChLayout(1);
ChOpen(3,255,0,0,4,#1,#1,0,0);
VoicePlay("B040302401_03_000");
MsgDisp("Honda","Hmm...? When that person rang it earlier,
the sound was much better.");
MsgSel("Maybe because they do it everyday?","This has an interesting sound too.","One more time!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("B040302401_03_010");
    MsgDisp("Honda","Eh, you know they do that?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040302401_03_020");
    MsgDisp("Honda","Nice, I like how you think.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040302401_03_030");
    MsgDisp("Honda","Yes, hehe!
Let's see how many variations there are!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
