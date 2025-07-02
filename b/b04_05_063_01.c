BGOpen("wf620",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040506301_05_000");
MsgDisp("Hiiragi","There are all sorts of things scattered on
the winter beach.");
MsgSel("Seaweed torn to shreds?","Messages in bottles?","Memories of summer?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(5,4);
    VoicePlay("B040506301_05_010");
    MsgDisp("Hiiragi","That's right, there's lots of seaweed.
It's rough in the sea too.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("B040506301_05_020");
    MsgDisp("Hiiragi","Yes, an old letter from abroad.
That seems like it would be the 
beginning of a wonderful story.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,4);
    ChEyeOpenLevel(5,8);
    VoicePlay("B040506301_05_030");
    MsgDisp("Hiiragi","It's already winter.
You're dragging on summer too much.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
