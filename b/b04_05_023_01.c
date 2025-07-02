MsgClose();
ChOpen(5,255,4,0,4,-1,-1,0,0);
VoicePlay("B040502301_05_000");
MsgDisp("Hiiragi","It seems as if there are no fishermen
here.");
MsgSel("Fishing seems fun","｛柊＊＊＊｝, do you like fishing?","There's traces of octopus and squid ink there!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040502301_05_010");
    MsgDisp("Hiiragi","That's right.
I am inexperienced, but curious.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMotion(5,0);
    VoicePlay("B040502301_05_020");
    MsgDisp("Hiiragi","I'd like to try it out
to see if I like it or not.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040502301_05_030");
    MsgDisp("Hiiragi","I see.
So that means someone caught an 
octopus there...you're amazing!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
