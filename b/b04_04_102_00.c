BGOpen("fp420",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040410200_04_000");
MsgDisp("Nanatsumori","So coolー.
I'd like to try riding one 
of these guys one day.");
MsgSel("Is it a boy's dream?","How about getting a license?","Aren't you going to take a photo?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040410200_04_010");
    MsgDisp("Nanatsumori","That might be it.
I've been strangely interested in 
it ever since I was a kid.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040410200_04_020");
    MsgDisp("Nanatsumori","Sounds nice.
If I manage to get one, I'll
give you a ride too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0);
    VoicePlay("B040410200_04_030");
    MsgDisp("Nanatsumori","Photos are allowed.
If you like it, why not take a photo?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
