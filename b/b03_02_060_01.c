BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B030206001_02_000");
MsgDisp("Sassa","Alright then!
Where should we go?");
MsgSel("Let's go to the beach!","Shall we check out the Blue Grotto?");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,1);
    ChEyeOpenLevel(2,0);
    VoicePlay("B030206001_02_010");
    MsgDisp("Sassa","That's why we came.
Let's swim to our heart's content!");
    break ;
    case 1:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B030206001_02_020");
    MsgDisp("Sassa","Ooh, we'll be like explorers in a cave.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
