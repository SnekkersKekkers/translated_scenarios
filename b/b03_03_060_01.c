BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B030306001_03_000");
MsgDisp("Honda","Where do you wanna go?");
MsgSel("Let's go to the beach!","Shall we check out the Blue Grotto?");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B030306001_03_010");
    MsgDisp("Honda","Sure.
This is the only time you can go swimming
in the ocean, after all.");
    break ;
    case 1:
    ChSet(3,3);
    VoicePlay("B030306001_03_020");
    MsgDisp("Honda","Sounds good.
There might still be interesting things
lurking around there!");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
