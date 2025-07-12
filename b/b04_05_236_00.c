MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040523600_05_000");
MsgDisp("Hiiragi","The lighting production...
It's been made well down to the details.");
MsgSel("It's super pretty!","The sound is a little loud","The impact of the skull bear is amazing!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040523600_05_010");
    MsgDisp("Hiiragi","Yep, a simple impression is enough.
It's beautiful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("B040523600_05_020");
    MsgDisp("Hiiragi","Loud sounds are also necessary
to forcefully draw you into 
the world.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040523600_05_030");
    MsgDisp("Hiiragi","Yeah...
Was it neccesary to make it stand out
that much? You won't be able to 
look at anything else.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
