BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040301101_03_000");
MsgDisp("Honda","Is there something on your mind?");
MsgSel("Is it okay to have so many people here?","｛本多＊＊｝ is.","Habataki City is beautiful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040301101_03_010");
    MsgDisp("Honda","It's okay. The foundation pillars are
attached to the ground like tree roots.
It's like they're growing out of the
earth!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("B040301101_03_020");
    MsgDisp("Honda","Eh, me? Why?
You should look at the scenery.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("B040301101_03_030");
    MsgDisp("Honda","Mhm, looking at it again this way,
I think so too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
