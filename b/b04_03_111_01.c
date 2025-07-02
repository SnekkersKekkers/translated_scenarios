BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChSet(3,0,1);
ScrFadeIn(0);
VoicePlay("B040311101_03_000");
MsgDisp("Honda","Yep yep, 
It's only a bit, but 
I might be getting better.");
MsgSel("You're improving fast!","You might be better than me...","Pride is the cuase of accidents!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040311101_03_010");
    MsgDisp("Honda","Is that right?
I'm starting to like skating.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040311101_03_020");
    MsgDisp("Honda","I was way too bad to begin with.
You're better than me.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    ChEyeOpenLevel(3,8);
    VoicePlay("B040311101_03_030");
    MsgDisp("Honda","I'm not being prideful at all?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
