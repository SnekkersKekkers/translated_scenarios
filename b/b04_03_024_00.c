SEPlay("EV_SE_517");
Wait(110,0);
ChLayout(1);
MsgClose();
ChOpen(3,255,5,0,0,-1,-1,0,0);
SEStop("EV_SE_517",2);
VoicePlay("B040302400_03_000");
MsgDisp("Honda","Wow, what a nice sound. It's a brass
instrument? I wonder how it works...");
MsgSel("Are you curious about its construction?","Shall we try taking it apart?","There might be a musician inside.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("B040302400_03_010");
    MsgDisp("Honda","Huh, aren't you?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040302400_03_020");
    MsgDisp("Honda","Yup, I know the feeling!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040302400_03_030");
    MsgDisp("Honda","Ahaha, thank you for your hard work!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
