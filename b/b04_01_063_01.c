BGOpen("wf620",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106301_01_000");
MsgDisp("Kazama","The rough seas in the winter bring all
kinds of things ashore.");
MsgSel("Doesn't that driftwood look like a baked sweet potato?","Maybe some of it washed up from England","We need to pick the trash out of it!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040106301_01_010");
    MsgDisp("Kazama","The color and shape are the same.
Even the cross section fibers look
similar!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040106301_01_020");
    MsgDisp("Kazama","Huh?
Hey, I didn't just drift ashore.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040106301_01_030");
    MsgDisp("Kazama","Yeah, you're right. There's a difference
between man-made trash, and nature-made
stuff drifting ashore.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
