BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040303200_03_000");
MsgDisp("Honda","Water gardens, huh? This facility is
evolving rapidly, isn't it!");
MsgSel("It's just the right place to take a break.","What a beautiful fountain; it's like art created by water.","Ah, looks like there's a trendy cafe.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,3);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040303200_03_010");
    MsgDisp("Honda","Eh, a break?
It would be a shame to rest, you know?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B040303200_03_020");
    MsgDisp("Honda","Oh, I see. An exhibition weaving together
the three states of water – 'solid', 'liquid', and 'gas.' That's the water
garden for you!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040303200_03_030");
    MsgDisp("Honda","Oh, even though it's an outdoor facility, 
they have a Café Deep Sea. Well, I guess 
it's trendy?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
