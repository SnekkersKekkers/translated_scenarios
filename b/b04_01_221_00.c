BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("B040122100_01_000");
MsgDisp("Kazama","I wonder what the scenery
was like hundreds of years ago?");
MsgSel("There was probably more green than there is now.","It was probably colder in the winter.","The air was probably clearer, so you could see further away.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040122100_01_010");
    MsgDisp("Kazama","Right.
The types of plants were 
probably different too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040122100_01_020");
    MsgDisp("Kazama","Summers were probably hot too.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040122100_01_030");
    MsgDisp("Kazama","Probably.
I bet you could see towns people
going about their lives from here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
