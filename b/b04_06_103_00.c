BGOpen("fp430",0);
BGMPlay("BGM_PLACE_MUSEUM_MIHARA",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040610300_06_000");
MsgDisp("Himuro","This trichromatic artwork is amazing...");
MsgSel("Honestly, I don't get it.","I wonder what he had in mind?","Just as I expected.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040610300_06_010");
    MsgDisp("Himuro","Art is difficult to understand, but it
would be better for you to pay more
attention to how you say these things.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("B040610300_06_020");
    MsgDisp("Himuro","I completely agree. I wonder what sort of
thought process he had? If only I could
understand it from his work.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040610300_06_030");
    MsgDisp("Himuro","Wow, you can understand this
sort of perception.
Amazing... I kinda respect it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
