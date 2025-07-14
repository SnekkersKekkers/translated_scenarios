BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,4,1);
VoicePlay("B040801101_08_000");
MsgDisp("Shirahane","I like high places, but Somehow this place
isn't calmin'...");
MsgSel("Then, shall we go home already?","I like it though"," I'm not calm but I think it's for a different reason...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,2);
    ChMotion(8,0,1);
    VoicePlay("B040801101_08_010");
    MsgDisp("Shirahane","Are ya mad....?
Please forgive me...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040801101_08_020");
    MsgDisp("Shirahane","I don't dislike it either?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,3,1);
    ChCheek(8,5);
    VoicePlay("B040801101_08_030");
    MsgDisp("Shirahane","Eh∋
In what way then?
I wanna know!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
