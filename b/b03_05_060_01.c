BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ScrFadeIn(0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0);
VoicePlay("B030506001_05_000");
MsgDisp("Hiiragi","Well then, I'll leave it to you.
Where should we go?");
MsgSel("Let's go to the beach!","Why don't we check out the blue grotto?");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,2);
    ChEyeOpenLevel(5,8);
    VoicePlay("B030506001_05_010");
    MsgDisp("Hiiragi","Sounds good.
Phew, it's only available in this season.");
    break ;
    case 1:
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B030506001_05_020");
    MsgDisp("Hiiragi","I approve of that choice.
Well, shall we get going?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
