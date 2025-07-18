BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
ChEyeOpenLevel(4,#1);
VoicePlay("B030406001_04_000");
MsgDisp("Nanatsumori","So.
What should we do?");
MsgSel("Let's go to the beach!","Shall we check out the Blue Grotto?");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(4,2);
    VoicePlay("B030406001_04_010");
    MsgDisp("Nanatsumori","...Sure thing.");
    break ;
    case 1:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B030406001_04_020");
    MsgDisp("Nanatsumori","Sounds good.
...Even more so since I won't have to
change into my swimsuit.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
