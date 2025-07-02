BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040115200_01_000");
MsgDisp("Kazama","Do you understand?
Look, this is sharp and dangerous.");
MsgSel("This is what you need to know to be a seasoned adult?","For now, I'll just throw it until I hit it!","Could you teach me the rules?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040115200_01_010");
    MsgDisp("Kazama","Geez, You're
so carefree, you don't even care 
about other people's feelings.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("B040115200_01_020");
    MsgDisp("Kazama","If you understand, 
calm down first and listen to 
what I have to say.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040115200_01_030");
    MsgDisp("Kazama","First is posture.
Stand up straight/.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
