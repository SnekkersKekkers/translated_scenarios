BGOpen("fp440",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040710400_07_000");
MsgDisp("Mikage","Travelling butterflies are interesting
insects.
It's worth looking into them.");
MsgSel("Uugh, creepy.","It's like they're on a field trip.","They travel 4000 km∈");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040710400_07_010");
    MsgDisp("Mikage","Well, tens of thousands of them are a bit
much, right?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040710400_07_020");
    MsgDisp("Mikage","Yeah, a journey with their comrades.
It must be wonderful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040710400_07_030");
    MsgDisp("Mikage","I wonder where in that small body do they
have all that energy?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
