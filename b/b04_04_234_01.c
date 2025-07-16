BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,2,0,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(4,2,1);
VoicePlay("B040423401_04_000");
MsgDisp("Nanatsumori","This attraction is not suited for taking
photos.");
MsgSel("...Is that an excuse?","Isn't there a sense of realism felt from the camera shake?","Burst photography is the only way!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040423401_04_010");
    MsgDisp("Nanatsumori","I wasn't really making excuses.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423401_04_020");
    MsgDisp("Nanatsumori","Ah...
I guess that's how it seems.
You've got some good senses.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040423401_04_030");
    MsgDisp("Nanatsumori","I see.
The more you take, the more likely one
will be a hit, huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
}