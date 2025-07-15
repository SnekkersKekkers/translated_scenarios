BGOpen("fp450",0);
BGMPlay("BGM_PLACE_MUSEUM_ART",0.01);
ChLayout(1);
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,2,1);
ScrFadeIn(0);
VoicePlay("B040310500_03_000");
MsgDisp("Honda","...As I thought, I had a feeling it's
useless for me to step into this space...");
MsgSel("Eh, it's moving to me though!","Ummm...is it upside down","I feel like I could draw this too.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,3);
    VoicePlay("B040310500_03_010");
    MsgDisp("Honda","I seeー.
You're already on that side huhー.
Sorry, it might be impossible for me.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,5);
    ChMouth(3,0);
    ChMotion(3,5);
    VoicePlay("B040310500_03_020");
    MsgDisp("Honda","Ah!
So it's like that?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040310500_03_030");
    MsgDisp("Honda","I feel the same.
I'm sorry to the artist though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
